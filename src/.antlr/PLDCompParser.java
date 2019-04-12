// Generated from /home/viceclone/Documents/pldcomp/src/PLDComp.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class PLDCompParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, RETURN=5, INT_TYPE=6, INT32_TYPE=7, CHAR_TYPE=8, 
		VOID_TYPE=9, IF=10, ELSE=11, WHILE=12, CHAR=13, ID=14, INT=15, LESS=16, 
		LESSEQUAL=17, GREATER=18, GREATEREQUAL=19, EQUAL=20, NOTEQUAL=21, PLUSPLUS=22, 
		MINUSMINUS=23, SHIFTL=24, SHIFTR=25, ADDE=26, SUBE=27, MULE=28, DIVE=29, 
		MODE=30, ORE=31, XORE=32, ANDE=33, AND=34, OR=35, ANDAND=36, OROR=37, 
		CARET=38, TILDE=39, PRIME=40, BACKSLASH=41, ASSIGN=42, SEMICOLON=43, COMMA=44, 
		RIGHT_BRACE=45, LEFT_BRACE=46, LEFT_PARENTHESE=47, RIGHT_PARENTHESE=48, 
		PLUS=49, MINUS=50, STAR=51, DIV=52, MOD=53, WHITESPACE=54, NEWLINE=55, 
		BLOCKCOMMENT=56, LINECOMMENT=57, DIRECTIVE=58, ERROR=59;
	public static final int
		RULE_prog = 0, RULE_functiondefinition = 1, RULE_statementseq = 2, RULE_statement = 3, 
		RULE_ifstatement = 4, RULE_whilestatement = 5, RULE_forstatement = 6, 
		RULE_callstatement = 7, RULE_call = 8, RULE_vardeclaration = 9, RULE_assignmentstat = 10, 
		RULE_lvalue = 11, RULE_array = 12, RULE_returnstatement = 13, RULE_incrdecrstatement = 14, 
		RULE_incr_decr = 15, RULE_incr_decr_op = 16, RULE_compoundassignment = 17, 
		RULE_compoundassignmentstatement = 18, RULE_expr = 19, RULE_type = 20;
	public static final String[] ruleNames = {
		"prog", "functiondefinition", "statementseq", "statement", "ifstatement", 
		"whilestatement", "forstatement", "callstatement", "call", "vardeclaration", 
		"assignmentstat", "lvalue", "array", "returnstatement", "incrdecrstatement", 
		"incr_decr", "incr_decr_op", "compoundassignment", "compoundassignmentstatement", 
		"expr", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'for'", "'{ '", "'['", "']'", "'return'", "'int'", "'int32_t'", 
		"'char'", "'void'", "'if'", "'else'", "'while'", null, null, null, "'<'", 
		"'<='", "'>'", "'>='", "'=='", "'!='", "'++'", "'--'", "'<<'", "'>>'", 
		"'+='", "'-='", "'*='", "'/='", "'%='", "'|='", "'^='", "'&='", "'&'", 
		"'|'", "'&&'", "'||'", "'^'", "'~'", "'''", "'\\'", "'='", "';'", "','", 
		"'}'", "'{'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, "RETURN", "INT_TYPE", "INT32_TYPE", "CHAR_TYPE", 
		"VOID_TYPE", "IF", "ELSE", "WHILE", "CHAR", "ID", "INT", "LESS", "LESSEQUAL", 
		"GREATER", "GREATEREQUAL", "EQUAL", "NOTEQUAL", "PLUSPLUS", "MINUSMINUS", 
		"SHIFTL", "SHIFTR", "ADDE", "SUBE", "MULE", "DIVE", "MODE", "ORE", "XORE", 
		"ANDE", "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", "PRIME", "BACKSLASH", 
		"ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", 
		"RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", "MOD", "WHITESPACE", 
		"NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "DIRECTIVE", "ERROR"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "PLDComp.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public PLDCompParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(PLDCompParser.EOF, 0); }
		public List<FunctiondefinitionContext> functiondefinition() {
			return getRuleContexts(FunctiondefinitionContext.class);
		}
		public FunctiondefinitionContext functiondefinition(int i) {
			return getRuleContext(FunctiondefinitionContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(45);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT_TYPE) | (1L << INT32_TYPE) | (1L << CHAR_TYPE) | (1L << VOID_TYPE))) != 0)) {
				{
				{
				setState(42);
				functiondefinition();
				}
				}
				setState(47);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(48);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctiondefinitionContext extends ParserRuleContext {
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public List<TerminalNode> ID() { return getTokens(PLDCompParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(PLDCompParser.ID, i);
		}
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public FunctiondefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functiondefinition; }
	}

	public final FunctiondefinitionContext functiondefinition() throws RecognitionException {
		FunctiondefinitionContext _localctx = new FunctiondefinitionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_functiondefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			type();
			setState(51);
			match(ID);
			setState(52);
			match(LEFT_PARENTHESE);
			setState(65);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				{
				setState(53);
				type();
				setState(54);
				match(ID);
				setState(61);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(55);
					match(COMMA);
					setState(56);
					type();
					setState(57);
					match(ID);
					}
					}
					setState(63);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				break;
			case 2:
				{
				setState(64);
				match(VOID_TYPE);
				}
				break;
			}
			setState(67);
			match(RIGHT_PARENTHESE);
			setState(68);
			match(LEFT_BRACE);
			setState(69);
			statementseq();
			setState(70);
			match(RIGHT_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementseqContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementseq; }
	}

	public final StatementseqContext statementseq() throws RecognitionException {
		StatementseqContext _localctx = new StatementseqContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statementseq);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << RETURN) | (1L << INT_TYPE) | (1L << INT32_TYPE) | (1L << CHAR_TYPE) | (1L << VOID_TYPE) | (1L << IF) | (1L << WHILE) | (1L << ID) | (1L << PLUSPLUS) | (1L << MINUSMINUS))) != 0)) {
				{
				{
				setState(72);
				statement();
				}
				}
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public VardeclarationContext vardeclaration() {
			return getRuleContext(VardeclarationContext.class,0);
		}
		public IfstatementContext ifstatement() {
			return getRuleContext(IfstatementContext.class,0);
		}
		public WhilestatementContext whilestatement() {
			return getRuleContext(WhilestatementContext.class,0);
		}
		public ForstatementContext forstatement() {
			return getRuleContext(ForstatementContext.class,0);
		}
		public CallstatementContext callstatement() {
			return getRuleContext(CallstatementContext.class,0);
		}
		public ReturnstatementContext returnstatement() {
			return getRuleContext(ReturnstatementContext.class,0);
		}
		public AssignmentstatContext assignmentstat() {
			return getRuleContext(AssignmentstatContext.class,0);
		}
		public IncrdecrstatementContext incrdecrstatement() {
			return getRuleContext(IncrdecrstatementContext.class,0);
		}
		public CompoundassignmentstatementContext compoundassignmentstatement() {
			return getRuleContext(CompoundassignmentstatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_statement);
		try {
			setState(87);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(78);
				vardeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(79);
				ifstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(80);
				whilestatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(81);
				forstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(82);
				callstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(83);
				returnstatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(84);
				assignmentstat();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(85);
				incrdecrstatement();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(86);
				compoundassignmentstatement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfstatementContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<StatementseqContext> statementseq() {
			return getRuleContexts(StatementseqContext.class);
		}
		public StatementseqContext statementseq(int i) {
			return getRuleContext(StatementseqContext.class,i);
		}
		public IfstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifstatement; }
	}

	public final IfstatementContext ifstatement() throws RecognitionException {
		IfstatementContext _localctx = new IfstatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_ifstatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(IF);
			setState(90);
			match(LEFT_PARENTHESE);
			setState(91);
			expr(0);
			setState(92);
			match(RIGHT_PARENTHESE);
			setState(93);
			match(LEFT_BRACE);
			setState(94);
			statementseq();
			setState(95);
			match(RIGHT_BRACE);
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(96);
				match(ELSE);
				setState(97);
				match(LEFT_BRACE);
				setState(98);
				statementseq();
				setState(99);
				match(RIGHT_BRACE);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhilestatementContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public WhilestatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whilestatement; }
	}

	public final WhilestatementContext whilestatement() throws RecognitionException {
		WhilestatementContext _localctx = new WhilestatementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_whilestatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(103);
			match(WHILE);
			setState(104);
			match(LEFT_PARENTHESE);
			setState(105);
			expr(0);
			setState(106);
			match(RIGHT_PARENTHESE);
			setState(107);
			match(LEFT_BRACE);
			setState(108);
			statementseq();
			setState(109);
			match(RIGHT_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForstatementContext extends ParserRuleContext {
		public List<AssignmentstatContext> assignmentstat() {
			return getRuleContexts(AssignmentstatContext.class);
		}
		public AssignmentstatContext assignmentstat(int i) {
			return getRuleContext(AssignmentstatContext.class,i);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public ForstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forstatement; }
	}

	public final ForstatementContext forstatement() throws RecognitionException {
		ForstatementContext _localctx = new ForstatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_forstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
			match(T__0);
			setState(112);
			match(LEFT_PARENTHESE);
			setState(113);
			assignmentstat();
			setState(114);
			match(SEMICOLON);
			setState(115);
			expr(0);
			setState(116);
			match(SEMICOLON);
			setState(117);
			assignmentstat();
			setState(118);
			match(RIGHT_PARENTHESE);
			setState(119);
			match(T__1);
			setState(120);
			statementseq();
			setState(121);
			match(RIGHT_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CallstatementContext extends ParserRuleContext {
		public CallContext call() {
			return getRuleContext(CallContext.class,0);
		}
		public CallstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callstatement; }
	}

	public final CallstatementContext callstatement() throws RecognitionException {
		CallstatementContext _localctx = new CallstatementContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_callstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			call();
			setState(124);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CallContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public CallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_call; }
	}

	public final CallContext call() throws RecognitionException {
		CallContext _localctx = new CallContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_call);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(ID);
			setState(127);
			match(LEFT_PARENTHESE);
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CHAR) | (1L << ID) | (1L << INT) | (1L << PLUSPLUS) | (1L << MINUSMINUS) | (1L << LEFT_PARENTHESE) | (1L << MINUS))) != 0)) {
				{
				setState(128);
				expr(0);
				setState(133);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(129);
					match(COMMA);
					setState(130);
					expr(0);
					}
					}
					setState(135);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(138);
			match(RIGHT_PARENTHESE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VardeclarationContext extends ParserRuleContext {
		public VardeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vardeclaration; }
	 
		public VardeclarationContext() { }
		public void copyFrom(VardeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DeclWithoutAssignmentContext extends VardeclarationContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<TerminalNode> ID() { return getTokens(PLDCompParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(PLDCompParser.ID, i);
		}
		public DeclWithoutAssignmentContext(VardeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class DeclWithAssignmentContext extends VardeclarationContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclWithAssignmentContext(VardeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class DeclArrayContext extends VardeclarationContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public TerminalNode INT() { return getToken(PLDCompParser.INT, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public DeclArrayContext(VardeclarationContext ctx) { copyFrom(ctx); }
	}

	public final VardeclarationContext vardeclaration() throws RecognitionException {
		VardeclarationContext _localctx = new VardeclarationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_vardeclaration);
		int _la;
		try {
			setState(179);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				_localctx = new DeclWithAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(140);
				type();
				setState(141);
				match(ID);
				setState(142);
				match(ASSIGN);
				setState(143);
				expr(0);
				setState(144);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new DeclWithoutAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(146);
				type();
				setState(147);
				match(ID);
				setState(152);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(148);
					match(COMMA);
					setState(149);
					match(ID);
					}
					}
					setState(154);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(155);
				match(SEMICOLON);
				}
				break;
			case 3:
				_localctx = new DeclArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(157);
				type();
				setState(158);
				match(ID);
				setState(159);
				match(T__2);
				setState(160);
				match(INT);
				setState(161);
				match(T__3);
				setState(175);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(162);
					match(ASSIGN);
					setState(163);
					match(LEFT_BRACE);
					setState(172);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CHAR) | (1L << ID) | (1L << INT) | (1L << PLUSPLUS) | (1L << MINUSMINUS) | (1L << LEFT_PARENTHESE) | (1L << MINUS))) != 0)) {
						{
						setState(164);
						expr(0);
						setState(169);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==COMMA) {
							{
							{
							setState(165);
							match(COMMA);
							setState(166);
							expr(0);
							}
							}
							setState(171);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
					}

					setState(174);
					match(RIGHT_BRACE);
					}
				}

				setState(177);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentstatContext extends ParserRuleContext {
		public AssignmentstatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentstat; }
	 
		public AssignmentstatContext() { }
		public void copyFrom(AssignmentstatContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AssignmentExprContext extends AssignmentstatContext {
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignmentExprContext(AssignmentstatContext ctx) { copyFrom(ctx); }
	}

	public final AssignmentstatContext assignmentstat() throws RecognitionException {
		AssignmentstatContext _localctx = new AssignmentstatContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_assignmentstat);
		try {
			_localctx = new AssignmentExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
			lvalue();
			setState(182);
			match(ASSIGN);
			setState(183);
			expr(0);
			setState(184);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LvalueContext extends ParserRuleContext {
		public LvalueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lvalue; }
	 
		public LvalueContext() { }
		public void copyFrom(LvalueContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IdLContext extends LvalueContext {
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public IdLContext(LvalueContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayLContext extends LvalueContext {
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public ArrayLContext(LvalueContext ctx) { copyFrom(ctx); }
	}

	public final LvalueContext lvalue() throws RecognitionException {
		LvalueContext _localctx = new LvalueContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_lvalue);
		try {
			setState(188);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				_localctx = new IdLContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(186);
				match(ID);
				}
				break;
			case 2:
				_localctx = new ArrayLContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(187);
				array();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArrayContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array; }
	}

	public final ArrayContext array() throws RecognitionException {
		ArrayContext _localctx = new ArrayContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(ID);
			setState(191);
			match(T__2);
			setState(192);
			expr(0);
			setState(193);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ReturnstatementContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnstatement; }
	}

	public final ReturnstatementContext returnstatement() throws RecognitionException {
		ReturnstatementContext _localctx = new ReturnstatementContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_returnstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			match(RETURN);
			setState(196);
			expr(0);
			setState(197);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IncrdecrstatementContext extends ParserRuleContext {
		public Incr_decrContext incr_decr() {
			return getRuleContext(Incr_decrContext.class,0);
		}
		public IncrdecrstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_incrdecrstatement; }
	}

	public final IncrdecrstatementContext incrdecrstatement() throws RecognitionException {
		IncrdecrstatementContext _localctx = new IncrdecrstatementContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_incrdecrstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			incr_decr();
			setState(200);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Incr_decrContext extends ParserRuleContext {
		public Incr_decr_opContext incr_decr_op() {
			return getRuleContext(Incr_decr_opContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public Incr_decrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_incr_decr; }
	}

	public final Incr_decrContext incr_decr() throws RecognitionException {
		Incr_decrContext _localctx = new Incr_decrContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_incr_decr);
		try {
			setState(212);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(204);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(202);
					match(ID);
					}
					break;
				case 2:
					{
					setState(203);
					array();
					}
					break;
				}
				setState(206);
				incr_decr_op();
				}
				}
				break;
			case PLUSPLUS:
			case MINUSMINUS:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(207);
				incr_decr_op();
				setState(210);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(208);
					match(ID);
					}
					break;
				case 2:
					{
					setState(209);
					array();
					}
					break;
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Incr_decr_opContext extends ParserRuleContext {
		public Incr_decr_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_incr_decr_op; }
	}

	public final Incr_decr_opContext incr_decr_op() throws RecognitionException {
		Incr_decr_opContext _localctx = new Incr_decr_opContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_incr_decr_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(214);
			_la = _input.LA(1);
			if ( !(_la==PLUSPLUS || _la==MINUSMINUS) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompoundassignmentContext extends ParserRuleContext {
		public Token op;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public CompoundassignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundassignment; }
	}

	public final CompoundassignmentContext compoundassignment() throws RecognitionException {
		CompoundassignmentContext _localctx = new CompoundassignmentContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_compoundassignment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(218);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				{
				setState(216);
				match(ID);
				}
				break;
			case 2:
				{
				setState(217);
				array();
				}
				break;
			}
			setState(220);
			((CompoundassignmentContext)_localctx).op = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ADDE) | (1L << SUBE) | (1L << MULE) | (1L << DIVE) | (1L << MODE) | (1L << ORE) | (1L << XORE) | (1L << ANDE))) != 0)) ) {
				((CompoundassignmentContext)_localctx).op = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(221);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompoundassignmentstatementContext extends ParserRuleContext {
		public CompoundassignmentContext compoundassignment() {
			return getRuleContext(CompoundassignmentContext.class,0);
		}
		public CompoundassignmentstatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundassignmentstatement; }
	}

	public final CompoundassignmentstatementContext compoundassignmentstatement() throws RecognitionException {
		CompoundassignmentstatementContext _localctx = new CompoundassignmentstatementContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_compoundassignmentstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			compoundassignment();
			setState(224);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class CharConstContext extends ExprContext {
		public TerminalNode CHAR() { return getToken(PLDCompParser.CHAR, 0); }
		public CharConstContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class VarContext extends ExprContext {
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public VarContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MultiplicativeOpContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public MultiplicativeOpContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ConstContext extends ExprContext {
		public TerminalNode INT() { return getToken(PLDCompParser.INT, 0); }
		public ConstContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class NegExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NegExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class NegConstContext extends ExprContext {
		public TerminalNode INT() { return getToken(PLDCompParser.INT, 0); }
		public NegConstContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class Rel2ExprContext extends ExprContext {
		public Token relop;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Rel2ExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalOrContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public LogicalOrContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayExprContext extends ExprContext {
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public ArrayExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BitwiseXorContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BitwiseXorContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BitwiseOrContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BitwiseOrContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ShiftOpContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ShiftOpContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalAndContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public LogicalAndContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class CompoundAssignmentExprContext extends ExprContext {
		public CompoundassignmentContext compoundassignment() {
			return getRuleContext(CompoundassignmentContext.class,0);
		}
		public CompoundAssignmentExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class AdditiveOpContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AdditiveOpContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BitwiseAndContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public BitwiseAndContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class Rel1ExprContext extends ExprContext {
		public Token relop;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Rel1ExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class CallExprContext extends ExprContext {
		public CallContext call() {
			return getRuleContext(CallContext.class,0);
		}
		public CallExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class IncDecExprContext extends ExprContext {
		public Incr_decrContext incr_decr() {
			return getRuleContext(Incr_decrContext.class,0);
		}
		public IncDecExprContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 38;
		enterRecursionRule(_localctx, 38, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(242);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(227);
				match(LEFT_PARENTHESE);
				setState(228);
				expr(0);
				setState(229);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 2:
				{
				_localctx = new ArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(231);
				array();
				}
				break;
			case 3:
				{
				_localctx = new NegExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(232);
				match(MINUS);
				setState(233);
				expr(18);
				}
				break;
			case 4:
				{
				_localctx = new IncDecExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(234);
				incr_decr();
				}
				break;
			case 5:
				{
				_localctx = new CallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(235);
				call();
				}
				break;
			case 6:
				{
				_localctx = new CompoundAssignmentExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(236);
				compoundassignment();
				}
				break;
			case 7:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(237);
				match(INT);
				}
				break;
			case 8:
				{
				_localctx = new NegConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(238);
				match(MINUS);
				setState(239);
				match(INT);
				}
				break;
			case 9:
				{
				_localctx = new CharConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(240);
				match(CHAR);
				}
				break;
			case 10:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(241);
				match(ID);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(276);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(274);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(244);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(245);
						((MultiplicativeOpContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << STAR) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((MultiplicativeOpContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(246);
						expr(16);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(247);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(248);
						((AdditiveOpContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((AdditiveOpContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(249);
						expr(15);
						}
						break;
					case 3:
						{
						_localctx = new ShiftOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(250);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(251);
						((ShiftOpContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==SHIFTL || _la==SHIFTR) ) {
							((ShiftOpContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(252);
						expr(14);
						}
						break;
					case 4:
						{
						_localctx = new Rel1ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(253);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(254);
						((Rel1ExprContext)_localctx).relop = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LESS) | (1L << LESSEQUAL) | (1L << GREATER) | (1L << GREATEREQUAL))) != 0)) ) {
							((Rel1ExprContext)_localctx).relop = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(255);
						expr(13);
						}
						break;
					case 5:
						{
						_localctx = new Rel2ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(256);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(257);
						((Rel2ExprContext)_localctx).relop = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==EQUAL || _la==NOTEQUAL) ) {
							((Rel2ExprContext)_localctx).relop = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(258);
						expr(12);
						}
						break;
					case 6:
						{
						_localctx = new BitwiseAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(259);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(260);
						match(AND);
						setState(261);
						expr(11);
						}
						break;
					case 7:
						{
						_localctx = new BitwiseXorContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(262);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(263);
						match(CARET);
						setState(264);
						expr(10);
						}
						break;
					case 8:
						{
						_localctx = new BitwiseOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(265);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(266);
						match(OR);
						setState(267);
						expr(9);
						}
						break;
					case 9:
						{
						_localctx = new LogicalAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(268);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(269);
						match(ANDAND);
						setState(270);
						expr(8);
						}
						break;
					case 10:
						{
						_localctx = new LogicalOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(271);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(272);
						match(OROR);
						setState(273);
						expr(7);
						}
						break;
					}
					} 
				}
				setState(278);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(279);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT_TYPE) | (1L << INT32_TYPE) | (1L << CHAR_TYPE) | (1L << VOID_TYPE))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 19:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 15);
		case 1:
			return precpred(_ctx, 14);
		case 2:
			return precpred(_ctx, 13);
		case 3:
			return precpred(_ctx, 12);
		case 4:
			return precpred(_ctx, 11);
		case 5:
			return precpred(_ctx, 10);
		case 6:
			return precpred(_ctx, 9);
		case 7:
			return precpred(_ctx, 8);
		case 8:
			return precpred(_ctx, 7);
		case 9:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3=\u011c\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\3\2\7\2.\n\2\f\2\16\2\61\13\2"+
		"\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3>\n\3\f\3\16\3A\13\3\3"+
		"\3\5\3D\n\3\3\3\3\3\3\3\3\3\3\3\3\4\7\4L\n\4\f\4\16\4O\13\4\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5Z\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\3\6\3\6\3\6\5\6h\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\7\n"+
		"\u0086\n\n\f\n\16\n\u0089\13\n\5\n\u008b\n\n\3\n\3\n\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u0099\n\13\f\13\16\13\u009c\13"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u00aa"+
		"\n\13\f\13\16\13\u00ad\13\13\5\13\u00af\n\13\3\13\5\13\u00b2\n\13\3\13"+
		"\3\13\5\13\u00b6\n\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\5\r\u00bf\n\r\3\16\3"+
		"\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\21\3\21\5\21\u00cf"+
		"\n\21\3\21\3\21\3\21\3\21\5\21\u00d5\n\21\5\21\u00d7\n\21\3\22\3\22\3"+
		"\23\3\23\5\23\u00dd\n\23\3\23\3\23\3\23\3\24\3\24\3\24\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25"+
		"\u00f5\n\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\7\25\u0115\n\25\f\25\16\25\u0118\13\25\3\26\3\26"+
		"\3\26\2\3(\27\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*\2\n\3\2\30"+
		"\31\3\2\34#\3\2\65\67\3\2\63\64\3\2\32\33\3\2\22\25\3\2\26\27\3\2\b\13"+
		"\2\u0134\2/\3\2\2\2\4\64\3\2\2\2\6M\3\2\2\2\bY\3\2\2\2\n[\3\2\2\2\fi\3"+
		"\2\2\2\16q\3\2\2\2\20}\3\2\2\2\22\u0080\3\2\2\2\24\u00b5\3\2\2\2\26\u00b7"+
		"\3\2\2\2\30\u00be\3\2\2\2\32\u00c0\3\2\2\2\34\u00c5\3\2\2\2\36\u00c9\3"+
		"\2\2\2 \u00d6\3\2\2\2\"\u00d8\3\2\2\2$\u00dc\3\2\2\2&\u00e1\3\2\2\2(\u00f4"+
		"\3\2\2\2*\u0119\3\2\2\2,.\5\4\3\2-,\3\2\2\2.\61\3\2\2\2/-\3\2\2\2/\60"+
		"\3\2\2\2\60\62\3\2\2\2\61/\3\2\2\2\62\63\7\2\2\3\63\3\3\2\2\2\64\65\5"+
		"*\26\2\65\66\7\20\2\2\66C\7\61\2\2\678\5*\26\28?\7\20\2\29:\7.\2\2:;\5"+
		"*\26\2;<\7\20\2\2<>\3\2\2\2=9\3\2\2\2>A\3\2\2\2?=\3\2\2\2?@\3\2\2\2@D"+
		"\3\2\2\2A?\3\2\2\2BD\7\13\2\2C\67\3\2\2\2CB\3\2\2\2CD\3\2\2\2DE\3\2\2"+
		"\2EF\7\62\2\2FG\7\60\2\2GH\5\6\4\2HI\7/\2\2I\5\3\2\2\2JL\5\b\5\2KJ\3\2"+
		"\2\2LO\3\2\2\2MK\3\2\2\2MN\3\2\2\2N\7\3\2\2\2OM\3\2\2\2PZ\5\24\13\2QZ"+
		"\5\n\6\2RZ\5\f\7\2SZ\5\16\b\2TZ\5\20\t\2UZ\5\34\17\2VZ\5\26\f\2WZ\5\36"+
		"\20\2XZ\5&\24\2YP\3\2\2\2YQ\3\2\2\2YR\3\2\2\2YS\3\2\2\2YT\3\2\2\2YU\3"+
		"\2\2\2YV\3\2\2\2YW\3\2\2\2YX\3\2\2\2Z\t\3\2\2\2[\\\7\f\2\2\\]\7\61\2\2"+
		"]^\5(\25\2^_\7\62\2\2_`\7\60\2\2`a\5\6\4\2ag\7/\2\2bc\7\r\2\2cd\7\60\2"+
		"\2de\5\6\4\2ef\7/\2\2fh\3\2\2\2gb\3\2\2\2gh\3\2\2\2h\13\3\2\2\2ij\7\16"+
		"\2\2jk\7\61\2\2kl\5(\25\2lm\7\62\2\2mn\7\60\2\2no\5\6\4\2op\7/\2\2p\r"+
		"\3\2\2\2qr\7\3\2\2rs\7\61\2\2st\5\26\f\2tu\7-\2\2uv\5(\25\2vw\7-\2\2w"+
		"x\5\26\f\2xy\7\62\2\2yz\7\4\2\2z{\5\6\4\2{|\7/\2\2|\17\3\2\2\2}~\5\22"+
		"\n\2~\177\7-\2\2\177\21\3\2\2\2\u0080\u0081\7\20\2\2\u0081\u008a\7\61"+
		"\2\2\u0082\u0087\5(\25\2\u0083\u0084\7.\2\2\u0084\u0086\5(\25\2\u0085"+
		"\u0083\3\2\2\2\u0086\u0089\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2"+
		"\2\2\u0088\u008b\3\2\2\2\u0089\u0087\3\2\2\2\u008a\u0082\3\2\2\2\u008a"+
		"\u008b\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u008d\7\62\2\2\u008d\23\3\2\2"+
		"\2\u008e\u008f\5*\26\2\u008f\u0090\7\20\2\2\u0090\u0091\7,\2\2\u0091\u0092"+
		"\5(\25\2\u0092\u0093\7-\2\2\u0093\u00b6\3\2\2\2\u0094\u0095\5*\26\2\u0095"+
		"\u009a\7\20\2\2\u0096\u0097\7.\2\2\u0097\u0099\7\20\2\2\u0098\u0096\3"+
		"\2\2\2\u0099\u009c\3\2\2\2\u009a\u0098\3\2\2\2\u009a\u009b\3\2\2\2\u009b"+
		"\u009d\3\2\2\2\u009c\u009a\3\2\2\2\u009d\u009e\7-\2\2\u009e\u00b6\3\2"+
		"\2\2\u009f\u00a0\5*\26\2\u00a0\u00a1\7\20\2\2\u00a1\u00a2\7\5\2\2\u00a2"+
		"\u00a3\7\21\2\2\u00a3\u00b1\7\6\2\2\u00a4\u00a5\7,\2\2\u00a5\u00ae\7\60"+
		"\2\2\u00a6\u00ab\5(\25\2\u00a7\u00a8\7.\2\2\u00a8\u00aa\5(\25\2\u00a9"+
		"\u00a7\3\2\2\2\u00aa\u00ad\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ab\u00ac\3\2"+
		"\2\2\u00ac\u00af\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ae\u00a6\3\2\2\2\u00ae"+
		"\u00af\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00b2\7/\2\2\u00b1\u00a4\3\2"+
		"\2\2\u00b1\u00b2\3\2\2\2\u00b2\u00b3\3\2\2\2\u00b3\u00b4\7-\2\2\u00b4"+
		"\u00b6\3\2\2\2\u00b5\u008e\3\2\2\2\u00b5\u0094\3\2\2\2\u00b5\u009f\3\2"+
		"\2\2\u00b6\25\3\2\2\2\u00b7\u00b8\5\30\r\2\u00b8\u00b9\7,\2\2\u00b9\u00ba"+
		"\5(\25\2\u00ba\u00bb\7-\2\2\u00bb\27\3\2\2\2\u00bc\u00bf\7\20\2\2\u00bd"+
		"\u00bf\5\32\16\2\u00be\u00bc\3\2\2\2\u00be\u00bd\3\2\2\2\u00bf\31\3\2"+
		"\2\2\u00c0\u00c1\7\20\2\2\u00c1\u00c2\7\5\2\2\u00c2\u00c3\5(\25\2\u00c3"+
		"\u00c4\7\6\2\2\u00c4\33\3\2\2\2\u00c5\u00c6\7\7\2\2\u00c6\u00c7\5(\25"+
		"\2\u00c7\u00c8\7-\2\2\u00c8\35\3\2\2\2\u00c9\u00ca\5 \21\2\u00ca\u00cb"+
		"\7-\2\2\u00cb\37\3\2\2\2\u00cc\u00cf\7\20\2\2\u00cd\u00cf\5\32\16\2\u00ce"+
		"\u00cc\3\2\2\2\u00ce\u00cd\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0\u00d7\5\""+
		"\22\2\u00d1\u00d4\5\"\22\2\u00d2\u00d5\7\20\2\2\u00d3\u00d5\5\32\16\2"+
		"\u00d4\u00d2\3\2\2\2\u00d4\u00d3\3\2\2\2\u00d5\u00d7\3\2\2\2\u00d6\u00ce"+
		"\3\2\2\2\u00d6\u00d1\3\2\2\2\u00d7!\3\2\2\2\u00d8\u00d9\t\2\2\2\u00d9"+
		"#\3\2\2\2\u00da\u00dd\7\20\2\2\u00db\u00dd\5\32\16\2\u00dc\u00da\3\2\2"+
		"\2\u00dc\u00db\3\2\2\2\u00dd\u00de\3\2\2\2\u00de\u00df\t\3\2\2\u00df\u00e0"+
		"\5(\25\2\u00e0%\3\2\2\2\u00e1\u00e2\5$\23\2\u00e2\u00e3\7-\2\2\u00e3\'"+
		"\3\2\2\2\u00e4\u00e5\b\25\1\2\u00e5\u00e6\7\61\2\2\u00e6\u00e7\5(\25\2"+
		"\u00e7\u00e8\7\62\2\2\u00e8\u00f5\3\2\2\2\u00e9\u00f5\5\32\16\2\u00ea"+
		"\u00eb\7\64\2\2\u00eb\u00f5\5(\25\24\u00ec\u00f5\5 \21\2\u00ed\u00f5\5"+
		"\22\n\2\u00ee\u00f5\5$\23\2\u00ef\u00f5\7\21\2\2\u00f0\u00f1\7\64\2\2"+
		"\u00f1\u00f5\7\21\2\2\u00f2\u00f5\7\17\2\2\u00f3\u00f5\7\20\2\2\u00f4"+
		"\u00e4\3\2\2\2\u00f4\u00e9\3\2\2\2\u00f4\u00ea\3\2\2\2\u00f4\u00ec\3\2"+
		"\2\2\u00f4\u00ed\3\2\2\2\u00f4\u00ee\3\2\2\2\u00f4\u00ef\3\2\2\2\u00f4"+
		"\u00f0\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f4\u00f3\3\2\2\2\u00f5\u0116\3\2"+
		"\2\2\u00f6\u00f7\f\21\2\2\u00f7\u00f8\t\4\2\2\u00f8\u0115\5(\25\22\u00f9"+
		"\u00fa\f\20\2\2\u00fa\u00fb\t\5\2\2\u00fb\u0115\5(\25\21\u00fc\u00fd\f"+
		"\17\2\2\u00fd\u00fe\t\6\2\2\u00fe\u0115\5(\25\20\u00ff\u0100\f\16\2\2"+
		"\u0100\u0101\t\7\2\2\u0101\u0115\5(\25\17\u0102\u0103\f\r\2\2\u0103\u0104"+
		"\t\b\2\2\u0104\u0115\5(\25\16\u0105\u0106\f\f\2\2\u0106\u0107\7$\2\2\u0107"+
		"\u0115\5(\25\r\u0108\u0109\f\13\2\2\u0109\u010a\7(\2\2\u010a\u0115\5("+
		"\25\f\u010b\u010c\f\n\2\2\u010c\u010d\7%\2\2\u010d\u0115\5(\25\13\u010e"+
		"\u010f\f\t\2\2\u010f\u0110\7&\2\2\u0110\u0115\5(\25\n\u0111\u0112\f\b"+
		"\2\2\u0112\u0113\7\'\2\2\u0113\u0115\5(\25\t\u0114\u00f6\3\2\2\2\u0114"+
		"\u00f9\3\2\2\2\u0114\u00fc\3\2\2\2\u0114\u00ff\3\2\2\2\u0114\u0102\3\2"+
		"\2\2\u0114\u0105\3\2\2\2\u0114\u0108\3\2\2\2\u0114\u010b\3\2\2\2\u0114"+
		"\u010e\3\2\2\2\u0114\u0111\3\2\2\2\u0115\u0118\3\2\2\2\u0116\u0114\3\2"+
		"\2\2\u0116\u0117\3\2\2\2\u0117)\3\2\2\2\u0118\u0116\3\2\2\2\u0119\u011a"+
		"\t\t\2\2\u011a+\3\2\2\2\27/?CMYg\u0087\u008a\u009a\u00ab\u00ae\u00b1\u00b5"+
		"\u00be\u00ce\u00d4\u00d6\u00dc\u00f4\u0114\u0116";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}