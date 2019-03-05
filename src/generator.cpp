#pragma once

class Generator : public gram1BaseVisitor {
public:
    Generator(File * f): fp(f) {}
    antlrcpp:Any visitProg(gram1Parser::ProgContext *ctx) override {
        
    }
private: 
    File * fp;
}