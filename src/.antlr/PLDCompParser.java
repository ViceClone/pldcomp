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
		T__0=1, RETURN=2, INT_TYPE=3, IF=4, ELSE=5, WHILE=6, CHAR=7, ID=8, INT=9, 
		LESS=10, LESSEQUAL=11, GREATER=12, GREATEREQUAL=13, EQUAL=14, NOTEQUAL=15, 
		AND=16, OR=17, ANDAND=18, OROR=19, CARET=20, TILDE=21, PRIME=22, BACKSLASH=23, 
		ASSIGN=24, SEMICOLON=25, COMMA=26, RIGHT_BRACE=27, LEFT_BRACE=28, LEFT_PARENTHESE=29, 
		RIGHT_PARENTHESE=30, PLUS=31, MINUS=32, STAR=33, DIV=34, MOD=35, WHITESPACE=36, 
		NEWLINE=37, BLOCKCOMMENT=38, LINECOMMENT=39, ERROR=40;
	public static final int
		RULE_prog = 0, RULE_functiondefinition = 1, RULE_statementseq = 2, RULE_statement = 3, 
		RULE_ifstatement = 4, RULE_whilestatement = 5, RULE_callstatement = 6, 
		RULE_call = 7, RULE_vardeclaration = 8, RULE_assignmentstat = 9, RULE_returnstatement = 10, 
		RULE_expr = 11, RULE_type = 12;
	public static final String[] ruleNames = {
		"prog", "functiondefinition", "statementseq", "statement", "ifstatement", 
		"whilestatement", "callstatement", "call", "vardeclaration", "assignmentstat", 
		"returnstatement", "expr", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'char'", "'return'", "'int'", "'if'", "'else'", "'while'", null, 
		null, null, "'<'", "'<='", "'>'", "'>='", "'=='", "'!='", "'&'", "'|'", 
		"'&&'", "'||'", "'^'", "'~'", "'''", "'\\'", "'='", "';'", "','", "'}'", 
		"'{'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, "RETURN", "INT_TYPE", "IF", "ELSE", "WHILE", "CHAR", "ID", 
		"INT", "LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", "EQUAL", "NOTEQUAL", 
		"AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", "PRIME", "BACKSLASH", 
		"ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", 
		"RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", "MOD", "WHITESPACE", 
		"NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "ERROR"
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
			setState(27); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(26);
				functiondefinition();
				}
				}
				setState(29); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__0 || _la==INT_TYPE );
			setState(31);
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
			setState(33);
			type();
			setState(34);
			match(ID);
			setState(35);
			match(LEFT_PARENTHESE);
			setState(47);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0 || _la==INT_TYPE) {
				{
				setState(36);
				type();
				setState(37);
				match(ID);
				setState(44);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(38);
					match(COMMA);
					setState(39);
					type();
					setState(40);
					match(ID);
					}
					}
					setState(46);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(49);
			match(RIGHT_PARENTHESE);
			setState(50);
			match(LEFT_BRACE);
			setState(51);
			statementseq();
			setState(52);
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
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << RETURN) | (1L << INT_TYPE) | (1L << IF) | (1L << WHILE) | (1L << ID))) != 0)) {
				{
				{
				setState(54);
				statement();
				}
				}
				setState(59);
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
		public CallstatementContext callstatement() {
			return getRuleContext(CallstatementContext.class,0);
		}
		public ReturnstatementContext returnstatement() {
			return getRuleContext(ReturnstatementContext.class,0);
		}
		public AssignmentstatContext assignmentstat() {
			return getRuleContext(AssignmentstatContext.class,0);
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
			setState(66);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(60);
				vardeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(61);
				ifstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(62);
				whilestatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(63);
				callstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(64);
				returnstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(65);
				assignmentstat();
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
			setState(68);
			match(IF);
			setState(69);
			match(LEFT_PARENTHESE);
			setState(70);
			expr(0);
			setState(71);
			match(RIGHT_PARENTHESE);
			setState(72);
			match(LEFT_BRACE);
			setState(73);
			statementseq();
			setState(74);
			match(RIGHT_BRACE);
			setState(80);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(75);
				match(ELSE);
				setState(76);
				match(LEFT_BRACE);
				setState(77);
				statementseq();
				setState(78);
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
			setState(82);
			match(WHILE);
			setState(83);
			match(LEFT_PARENTHESE);
			setState(84);
			expr(0);
			setState(85);
			match(RIGHT_PARENTHESE);
			setState(86);
			match(LEFT_BRACE);
			setState(87);
			statementseq();
			setState(88);
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
		enterRule(_localctx, 12, RULE_callstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			call();
			setState(91);
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
		enterRule(_localctx, 14, RULE_call);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
			match(ID);
			setState(94);
			match(LEFT_PARENTHESE);
			setState(103);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CHAR) | (1L << ID) | (1L << INT) | (1L << LEFT_PARENTHESE) | (1L << MINUS))) != 0)) {
				{
				setState(95);
				expr(0);
				setState(100);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(96);
					match(COMMA);
					setState(97);
					expr(0);
					}
					}
					setState(102);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(105);
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
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
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

	public final VardeclarationContext vardeclaration() throws RecognitionException {
		VardeclarationContext _localctx = new VardeclarationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_vardeclaration);
		try {
			setState(117);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new DeclWithAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(107);
				type();
				setState(108);
				match(ID);
				setState(109);
				match(ASSIGN);
				setState(110);
				expr(0);
				setState(111);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new DeclWithoutAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(113);
				type();
				setState(114);
				match(ID);
				setState(115);
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
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignmentExprContext(AssignmentstatContext ctx) { copyFrom(ctx); }
	}

	public final AssignmentstatContext assignmentstat() throws RecognitionException {
		AssignmentstatContext _localctx = new AssignmentstatContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_assignmentstat);
		try {
			_localctx = new AssignmentExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(119);
			match(ID);
			setState(120);
			match(ASSIGN);
			setState(121);
			expr(0);
			setState(122);
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
		enterRule(_localctx, 20, RULE_returnstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			match(RETURN);
			setState(125);
			expr(0);
			setState(126);
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
	public static class LogicalAndContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public LogicalAndContext(ExprContext ctx) { copyFrom(ctx); }
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

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 22;
		enterRecursionRule(_localctx, 22, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(129);
				match(LEFT_PARENTHESE);
				setState(130);
				expr(0);
				setState(131);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 2:
				{
				_localctx = new NegExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(133);
				match(MINUS);
				setState(134);
				match(LEFT_PARENTHESE);
				setState(135);
				expr(0);
				setState(136);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 3:
				{
				_localctx = new CallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(138);
				call();
				}
				break;
			case 4:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(139);
				match(INT);
				}
				break;
			case 5:
				{
				_localctx = new NegConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(140);
				match(MINUS);
				setState(141);
				match(INT);
				}
				break;
			case 6:
				{
				_localctx = new CharConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(142);
				match(CHAR);
				}
				break;
			case 7:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(143);
				match(ID);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(175);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(173);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(146);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(147);
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
						setState(148);
						expr(14);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(149);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(150);
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
						setState(151);
						expr(13);
						}
						break;
					case 3:
						{
						_localctx = new Rel1ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(152);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(153);
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
						setState(154);
						expr(12);
						}
						break;
					case 4:
						{
						_localctx = new Rel2ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(155);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(156);
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
						setState(157);
						expr(11);
						}
						break;
					case 5:
						{
						_localctx = new BitwiseAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(158);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(159);
						match(AND);
						setState(160);
						expr(10);
						}
						break;
					case 6:
						{
						_localctx = new BitwiseXorContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(161);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(162);
						match(CARET);
						setState(163);
						expr(9);
						}
						break;
					case 7:
						{
						_localctx = new BitwiseOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(164);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(165);
						match(OR);
						setState(166);
						expr(8);
						}
						break;
					case 8:
						{
						_localctx = new LogicalAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(167);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(168);
						match(ANDAND);
						setState(169);
						expr(7);
						}
						break;
					case 9:
						{
						_localctx = new LogicalOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(170);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(171);
						match(OROR);
						setState(172);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(177);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
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
		enterRule(_localctx, 24, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==INT_TYPE) ) {
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
		case 11:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 13);
		case 1:
			return precpred(_ctx, 12);
		case 2:
			return precpred(_ctx, 11);
		case 3:
			return precpred(_ctx, 10);
		case 4:
			return precpred(_ctx, 9);
		case 5:
			return precpred(_ctx, 8);
		case 6:
			return precpred(_ctx, 7);
		case 7:
			return precpred(_ctx, 6);
		case 8:
			return precpred(_ctx, 5);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3*\u00b7\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\3\2\6\2\36\n\2\r\2\16\2\37\3\2\3\2\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3-\n\3\f\3\16\3\60\13\3\5\3\62\n\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\4\7\4:\n\4\f\4\16\4=\13\4\3\5\3\5\3\5\3\5\3\5\3\5"+
		"\5\5E\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6S\n\6\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\7\te\n\t"+
		"\f\t\16\th\13\t\5\tj\n\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3"+
		"\n\5\nx\n\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0093\n\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u00b0\n\r\f\r\16\r\u00b3\13\r\3\16\3"+
		"\16\3\16\2\3\30\17\2\4\6\b\n\f\16\20\22\24\26\30\32\2\7\3\2#%\3\2!\"\3"+
		"\2\f\17\3\2\20\21\4\2\3\3\5\5\2\u00c5\2\35\3\2\2\2\4#\3\2\2\2\6;\3\2\2"+
		"\2\bD\3\2\2\2\nF\3\2\2\2\fT\3\2\2\2\16\\\3\2\2\2\20_\3\2\2\2\22w\3\2\2"+
		"\2\24y\3\2\2\2\26~\3\2\2\2\30\u0092\3\2\2\2\32\u00b4\3\2\2\2\34\36\5\4"+
		"\3\2\35\34\3\2\2\2\36\37\3\2\2\2\37\35\3\2\2\2\37 \3\2\2\2 !\3\2\2\2!"+
		"\"\7\2\2\3\"\3\3\2\2\2#$\5\32\16\2$%\7\n\2\2%\61\7\37\2\2&\'\5\32\16\2"+
		"\'.\7\n\2\2()\7\34\2\2)*\5\32\16\2*+\7\n\2\2+-\3\2\2\2,(\3\2\2\2-\60\3"+
		"\2\2\2.,\3\2\2\2./\3\2\2\2/\62\3\2\2\2\60.\3\2\2\2\61&\3\2\2\2\61\62\3"+
		"\2\2\2\62\63\3\2\2\2\63\64\7 \2\2\64\65\7\36\2\2\65\66\5\6\4\2\66\67\7"+
		"\35\2\2\67\5\3\2\2\28:\5\b\5\298\3\2\2\2:=\3\2\2\2;9\3\2\2\2;<\3\2\2\2"+
		"<\7\3\2\2\2=;\3\2\2\2>E\5\22\n\2?E\5\n\6\2@E\5\f\7\2AE\5\16\b\2BE\5\26"+
		"\f\2CE\5\24\13\2D>\3\2\2\2D?\3\2\2\2D@\3\2\2\2DA\3\2\2\2DB\3\2\2\2DC\3"+
		"\2\2\2E\t\3\2\2\2FG\7\6\2\2GH\7\37\2\2HI\5\30\r\2IJ\7 \2\2JK\7\36\2\2"+
		"KL\5\6\4\2LR\7\35\2\2MN\7\7\2\2NO\7\36\2\2OP\5\6\4\2PQ\7\35\2\2QS\3\2"+
		"\2\2RM\3\2\2\2RS\3\2\2\2S\13\3\2\2\2TU\7\b\2\2UV\7\37\2\2VW\5\30\r\2W"+
		"X\7 \2\2XY\7\36\2\2YZ\5\6\4\2Z[\7\35\2\2[\r\3\2\2\2\\]\5\20\t\2]^\7\33"+
		"\2\2^\17\3\2\2\2_`\7\n\2\2`i\7\37\2\2af\5\30\r\2bc\7\34\2\2ce\5\30\r\2"+
		"db\3\2\2\2eh\3\2\2\2fd\3\2\2\2fg\3\2\2\2gj\3\2\2\2hf\3\2\2\2ia\3\2\2\2"+
		"ij\3\2\2\2jk\3\2\2\2kl\7 \2\2l\21\3\2\2\2mn\5\32\16\2no\7\n\2\2op\7\32"+
		"\2\2pq\5\30\r\2qr\7\33\2\2rx\3\2\2\2st\5\32\16\2tu\7\n\2\2uv\7\33\2\2"+
		"vx\3\2\2\2wm\3\2\2\2ws\3\2\2\2x\23\3\2\2\2yz\7\n\2\2z{\7\32\2\2{|\5\30"+
		"\r\2|}\7\33\2\2}\25\3\2\2\2~\177\7\4\2\2\177\u0080\5\30\r\2\u0080\u0081"+
		"\7\33\2\2\u0081\27\3\2\2\2\u0082\u0083\b\r\1\2\u0083\u0084\7\37\2\2\u0084"+
		"\u0085\5\30\r\2\u0085\u0086\7 \2\2\u0086\u0093\3\2\2\2\u0087\u0088\7\""+
		"\2\2\u0088\u0089\7\37\2\2\u0089\u008a\5\30\r\2\u008a\u008b\7 \2\2\u008b"+
		"\u0093\3\2\2\2\u008c\u0093\5\20\t\2\u008d\u0093\7\13\2\2\u008e\u008f\7"+
		"\"\2\2\u008f\u0093\7\13\2\2\u0090\u0093\7\t\2\2\u0091\u0093\7\n\2\2\u0092"+
		"\u0082\3\2\2\2\u0092\u0087\3\2\2\2\u0092\u008c\3\2\2\2\u0092\u008d\3\2"+
		"\2\2\u0092\u008e\3\2\2\2\u0092\u0090\3\2\2\2\u0092\u0091\3\2\2\2\u0093"+
		"\u00b1\3\2\2\2\u0094\u0095\f\17\2\2\u0095\u0096\t\2\2\2\u0096\u00b0\5"+
		"\30\r\20\u0097\u0098\f\16\2\2\u0098\u0099\t\3\2\2\u0099\u00b0\5\30\r\17"+
		"\u009a\u009b\f\r\2\2\u009b\u009c\t\4\2\2\u009c\u00b0\5\30\r\16\u009d\u009e"+
		"\f\f\2\2\u009e\u009f\t\5\2\2\u009f\u00b0\5\30\r\r\u00a0\u00a1\f\13\2\2"+
		"\u00a1\u00a2\7\22\2\2\u00a2\u00b0\5\30\r\f\u00a3\u00a4\f\n\2\2\u00a4\u00a5"+
		"\7\26\2\2\u00a5\u00b0\5\30\r\13\u00a6\u00a7\f\t\2\2\u00a7\u00a8\7\23\2"+
		"\2\u00a8\u00b0\5\30\r\n\u00a9\u00aa\f\b\2\2\u00aa\u00ab\7\24\2\2\u00ab"+
		"\u00b0\5\30\r\t\u00ac\u00ad\f\7\2\2\u00ad\u00ae\7\25\2\2\u00ae\u00b0\5"+
		"\30\r\b\u00af\u0094\3\2\2\2\u00af\u0097\3\2\2\2\u00af\u009a\3\2\2\2\u00af"+
		"\u009d\3\2\2\2\u00af\u00a0\3\2\2\2\u00af\u00a3\3\2\2\2\u00af\u00a6\3\2"+
		"\2\2\u00af\u00a9\3\2\2\2\u00af\u00ac\3\2\2\2\u00b0\u00b3\3\2\2\2\u00b1"+
		"\u00af\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2\31\3\2\2\2\u00b3\u00b1\3\2\2"+
		"\2\u00b4\u00b5\t\6\2\2\u00b5\33\3\2\2\2\16\37.\61;DRfiw\u0092\u00af\u00b1";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}