#pragma once

class Generator : public PLDCompBaseVisitor {
public:
    Generator(string filename): os(filename) {}
    antlrcpp:Any visitProg(PLDComp::ProgContext *ctx) override {
        os.write('.text\n.global main\n');
        os.write('main:\n');
        os.write('pushq %rbp\n');
        os.write('movq %rsp, %rbp\n');
        visit(ctx->Return_intruction());
        os.write('popq %rbp\n');
        os.write('ret \n');
    }

    antlrcpp::Any visitReturn_instruction(PLDCompParser::Return_instructionContext *ctx) override {
        os.write('movl $');
        os.write(ctx->INT()->getText());
        os.write(", %eax\n");
        return;
    }
private: 
    ofstream os;
}