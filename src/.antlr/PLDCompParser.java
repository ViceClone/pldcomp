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
		T__0=1, T__1=2, T__2=3, RETURN=4, INT_TYPE=5, IF=6, ELSE=7, WHILE=8, CHAR=9, 
		ID=10, INT=11, LESS=12, LESSEQUAL=13, GREATER=14, GREATEREQUAL=15, EQUAL=16, 
		NOTEQUAL=17, AND=18, OR=19, ANDAND=20, OROR=21, CARET=22, TILDE=23, PRIME=24, 
		BACKSLASH=25, ASSIGN=26, SEMICOLON=27, COMMA=28, RIGHT_BRACE=29, LEFT_BRACE=30, 
		LEFT_PARENTHESE=31, RIGHT_PARENTHESE=32, PLUS=33, MINUS=34, STAR=35, DIV=36, 
		MOD=37, WHITESPACE=38, NEWLINE=39, BLOCKCOMMENT=40, LINECOMMENT=41, ERROR=42;
	public static final int
		RULE_prog = 0, RULE_functiondefinition = 1, RULE_statementseq = 2, RULE_statement = 3, 
		RULE_ifstatement = 4, RULE_whilestatement = 5, RULE_callstatement = 6, 
		RULE_call = 7, RULE_vardeclaration = 8, RULE_assignmentstat = 9, RULE_lvalue = 10, 
		RULE_array = 11, RULE_returnstatement = 12, RULE_expr = 13, RULE_type = 14;
	public static final String[] ruleNames = {
		"prog", "functiondefinition", "statementseq", "statement", "ifstatement", 
		"whilestatement", "callstatement", "call", "vardeclaration", "assignmentstat", 
		"lvalue", "array", "returnstatement", "expr", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'['", "']'", "'char'", "'return'", "'int'", "'if'", "'else'", "'while'", 
		null, null, null, "'<'", "'<='", "'>'", "'>='", "'=='", "'!='", "'&'", 
		"'|'", "'&&'", "'||'", "'^'", "'~'", "'''", "'\\'", "'='", "';'", "','", 
		"'}'", "'{'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, "RETURN", "INT_TYPE", "IF", "ELSE", "WHILE", "CHAR", 
		"ID", "INT", "LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", "EQUAL", 
		"NOTEQUAL", "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", "PRIME", 
		"BACKSLASH", "ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", 
		"LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", 
		"MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "ERROR"
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
			setState(31); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(30);
				functiondefinition();
				}
				}
				setState(33); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__2 || _la==INT_TYPE );
			setState(35);
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
			setState(37);
			type();
			setState(38);
			match(ID);
			setState(39);
			match(LEFT_PARENTHESE);
			setState(51);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__2 || _la==INT_TYPE) {
				{
				setState(40);
				type();
				setState(41);
				match(ID);
				setState(48);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(42);
					match(COMMA);
					setState(43);
					type();
					setState(44);
					match(ID);
					}
					}
					setState(50);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(53);
			match(RIGHT_PARENTHESE);
			setState(54);
			match(LEFT_BRACE);
			setState(55);
			statementseq();
			setState(56);
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
			setState(61);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << RETURN) | (1L << INT_TYPE) | (1L << IF) | (1L << WHILE) | (1L << ID))) != 0)) {
				{
				{
				setState(58);
				statement();
				}
				}
				setState(63);
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
			setState(70);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(64);
				vardeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(65);
				ifstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(66);
				whilestatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(67);
				callstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(68);
				returnstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(69);
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
			setState(72);
			match(IF);
			setState(73);
			match(LEFT_PARENTHESE);
			setState(74);
			expr(0);
			setState(75);
			match(RIGHT_PARENTHESE);
			setState(76);
			match(LEFT_BRACE);
			setState(77);
			statementseq();
			setState(78);
			match(RIGHT_BRACE);
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(79);
				match(ELSE);
				setState(80);
				match(LEFT_BRACE);
				setState(81);
				statementseq();
				setState(82);
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
			setState(86);
			match(WHILE);
			setState(87);
			match(LEFT_PARENTHESE);
			setState(88);
			expr(0);
			setState(89);
			match(RIGHT_PARENTHESE);
			setState(90);
			match(LEFT_BRACE);
			setState(91);
			statementseq();
			setState(92);
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
			setState(94);
			call();
			setState(95);
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
			setState(97);
			match(ID);
			setState(98);
			match(LEFT_PARENTHESE);
			setState(107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CHAR) | (1L << ID) | (1L << INT) | (1L << LEFT_PARENTHESE) | (1L << MINUS))) != 0)) {
				{
				setState(99);
				expr(0);
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(100);
					match(COMMA);
					setState(101);
					expr(0);
					}
					}
					setState(106);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(109);
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
	public static class DeclArrayContext extends VardeclarationContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclArrayContext(VardeclarationContext ctx) { copyFrom(ctx); }
	}

	public final VardeclarationContext vardeclaration() throws RecognitionException {
		VardeclarationContext _localctx = new VardeclarationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_vardeclaration);
		try {
			setState(128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new DeclWithAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(111);
				type();
				setState(112);
				match(ID);
				setState(113);
				match(ASSIGN);
				setState(114);
				expr(0);
				setState(115);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new DeclWithoutAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(117);
				type();
				setState(118);
				match(ID);
				setState(119);
				match(SEMICOLON);
				}
				break;
			case 3:
				_localctx = new DeclArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(121);
				type();
				setState(122);
				match(ID);
				setState(123);
				match(T__0);
				setState(124);
				expr(0);
				setState(125);
				match(T__1);
				setState(126);
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
		enterRule(_localctx, 18, RULE_assignmentstat);
		try {
			_localctx = new AssignmentExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			lvalue();
			setState(131);
			match(ASSIGN);
			setState(132);
			expr(0);
			setState(133);
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
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public LvalueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lvalue; }
	}

	public final LvalueContext lvalue() throws RecognitionException {
		LvalueContext _localctx = new LvalueContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_lvalue);
		try {
			setState(137);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(135);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(136);
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
		enterRule(_localctx, 22, RULE_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(139);
			match(ID);
			setState(140);
			match(T__0);
			setState(141);
			expr(0);
			setState(142);
			match(T__1);
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
		enterRule(_localctx, 24, RULE_returnstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(RETURN);
			setState(145);
			expr(0);
			setState(146);
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
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(149);
				match(LEFT_PARENTHESE);
				setState(150);
				expr(0);
				setState(151);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 2:
				{
				_localctx = new ArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(153);
				array();
				}
				break;
			case 3:
				{
				_localctx = new NegExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(154);
				match(MINUS);
				setState(155);
				match(LEFT_PARENTHESE);
				setState(156);
				expr(0);
				setState(157);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 4:
				{
				_localctx = new CallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(159);
				call();
				}
				break;
			case 5:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(160);
				match(INT);
				}
				break;
			case 6:
				{
				_localctx = new NegConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(161);
				match(MINUS);
				setState(162);
				match(INT);
				}
				break;
			case 7:
				{
				_localctx = new CharConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(163);
				match(CHAR);
				}
				break;
			case 8:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(164);
				match(ID);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(196);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(194);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(167);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(168);
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
						setState(169);
						expr(14);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(170);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(171);
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
						setState(172);
						expr(13);
						}
						break;
					case 3:
						{
						_localctx = new Rel1ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(173);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(174);
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
						setState(175);
						expr(12);
						}
						break;
					case 4:
						{
						_localctx = new Rel2ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(176);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(177);
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
						setState(178);
						expr(11);
						}
						break;
					case 5:
						{
						_localctx = new BitwiseAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(179);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(180);
						match(AND);
						setState(181);
						expr(10);
						}
						break;
					case 6:
						{
						_localctx = new BitwiseXorContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(182);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(183);
						match(CARET);
						setState(184);
						expr(9);
						}
						break;
					case 7:
						{
						_localctx = new BitwiseOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(185);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(186);
						match(OR);
						setState(187);
						expr(8);
						}
						break;
					case 8:
						{
						_localctx = new LogicalAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(188);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(189);
						match(ANDAND);
						setState(190);
						expr(7);
						}
						break;
					case 9:
						{
						_localctx = new LogicalOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(191);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(192);
						match(OROR);
						setState(193);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(198);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
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
		enterRule(_localctx, 28, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			_la = _input.LA(1);
			if ( !(_la==T__2 || _la==INT_TYPE) ) {
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
		case 13:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3,\u00cc\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\6\2\"\n\2\r\2\16"+
		"\2#\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3\61\n\3\f\3\16\3\64"+
		"\13\3\5\3\66\n\3\3\3\3\3\3\3\3\3\3\3\3\4\7\4>\n\4\f\4\16\4A\13\4\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\5\5I\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\3\6\5\6W\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3"+
		"\t\3\t\3\t\7\ti\n\t\f\t\16\tl\13\t\5\tn\n\t\3\t\3\t\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u0083\n\n\3\13"+
		"\3\13\3\13\3\13\3\13\3\f\3\f\5\f\u008c\n\f\3\r\3\r\3\r\3\r\3\r\3\16\3"+
		"\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\5\17\u00a8\n\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17\u00c5\n\17\f\17\16\17\u00c8"+
		"\13\17\3\20\3\20\3\20\2\3\34\21\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		"\2\7\3\2%\'\3\2#$\3\2\16\21\3\2\22\23\4\2\5\5\7\7\2\u00db\2!\3\2\2\2\4"+
		"\'\3\2\2\2\6?\3\2\2\2\bH\3\2\2\2\nJ\3\2\2\2\fX\3\2\2\2\16`\3\2\2\2\20"+
		"c\3\2\2\2\22\u0082\3\2\2\2\24\u0084\3\2\2\2\26\u008b\3\2\2\2\30\u008d"+
		"\3\2\2\2\32\u0092\3\2\2\2\34\u00a7\3\2\2\2\36\u00c9\3\2\2\2 \"\5\4\3\2"+
		"! \3\2\2\2\"#\3\2\2\2#!\3\2\2\2#$\3\2\2\2$%\3\2\2\2%&\7\2\2\3&\3\3\2\2"+
		"\2\'(\5\36\20\2()\7\f\2\2)\65\7!\2\2*+\5\36\20\2+\62\7\f\2\2,-\7\36\2"+
		"\2-.\5\36\20\2./\7\f\2\2/\61\3\2\2\2\60,\3\2\2\2\61\64\3\2\2\2\62\60\3"+
		"\2\2\2\62\63\3\2\2\2\63\66\3\2\2\2\64\62\3\2\2\2\65*\3\2\2\2\65\66\3\2"+
		"\2\2\66\67\3\2\2\2\678\7\"\2\289\7 \2\29:\5\6\4\2:;\7\37\2\2;\5\3\2\2"+
		"\2<>\5\b\5\2=<\3\2\2\2>A\3\2\2\2?=\3\2\2\2?@\3\2\2\2@\7\3\2\2\2A?\3\2"+
		"\2\2BI\5\22\n\2CI\5\n\6\2DI\5\f\7\2EI\5\16\b\2FI\5\32\16\2GI\5\24\13\2"+
		"HB\3\2\2\2HC\3\2\2\2HD\3\2\2\2HE\3\2\2\2HF\3\2\2\2HG\3\2\2\2I\t\3\2\2"+
		"\2JK\7\b\2\2KL\7!\2\2LM\5\34\17\2MN\7\"\2\2NO\7 \2\2OP\5\6\4\2PV\7\37"+
		"\2\2QR\7\t\2\2RS\7 \2\2ST\5\6\4\2TU\7\37\2\2UW\3\2\2\2VQ\3\2\2\2VW\3\2"+
		"\2\2W\13\3\2\2\2XY\7\n\2\2YZ\7!\2\2Z[\5\34\17\2[\\\7\"\2\2\\]\7 \2\2]"+
		"^\5\6\4\2^_\7\37\2\2_\r\3\2\2\2`a\5\20\t\2ab\7\35\2\2b\17\3\2\2\2cd\7"+
		"\f\2\2dm\7!\2\2ej\5\34\17\2fg\7\36\2\2gi\5\34\17\2hf\3\2\2\2il\3\2\2\2"+
		"jh\3\2\2\2jk\3\2\2\2kn\3\2\2\2lj\3\2\2\2me\3\2\2\2mn\3\2\2\2no\3\2\2\2"+
		"op\7\"\2\2p\21\3\2\2\2qr\5\36\20\2rs\7\f\2\2st\7\34\2\2tu\5\34\17\2uv"+
		"\7\35\2\2v\u0083\3\2\2\2wx\5\36\20\2xy\7\f\2\2yz\7\35\2\2z\u0083\3\2\2"+
		"\2{|\5\36\20\2|}\7\f\2\2}~\7\3\2\2~\177\5\34\17\2\177\u0080\7\4\2\2\u0080"+
		"\u0081\7\35\2\2\u0081\u0083\3\2\2\2\u0082q\3\2\2\2\u0082w\3\2\2\2\u0082"+
		"{\3\2\2\2\u0083\23\3\2\2\2\u0084\u0085\5\26\f\2\u0085\u0086\7\34\2\2\u0086"+
		"\u0087\5\34\17\2\u0087\u0088\7\35\2\2\u0088\25\3\2\2\2\u0089\u008c\7\f"+
		"\2\2\u008a\u008c\5\30\r\2\u008b\u0089\3\2\2\2\u008b\u008a\3\2\2\2\u008c"+
		"\27\3\2\2\2\u008d\u008e\7\f\2\2\u008e\u008f\7\3\2\2\u008f\u0090\5\34\17"+
		"\2\u0090\u0091\7\4\2\2\u0091\31\3\2\2\2\u0092\u0093\7\6\2\2\u0093\u0094"+
		"\5\34\17\2\u0094\u0095\7\35\2\2\u0095\33\3\2\2\2\u0096\u0097\b\17\1\2"+
		"\u0097\u0098\7!\2\2\u0098\u0099\5\34\17\2\u0099\u009a\7\"\2\2\u009a\u00a8"+
		"\3\2\2\2\u009b\u00a8\5\30\r\2\u009c\u009d\7$\2\2\u009d\u009e\7!\2\2\u009e"+
		"\u009f\5\34\17\2\u009f\u00a0\7\"\2\2\u00a0\u00a8\3\2\2\2\u00a1\u00a8\5"+
		"\20\t\2\u00a2\u00a8\7\r\2\2\u00a3\u00a4\7$\2\2\u00a4\u00a8\7\r\2\2\u00a5"+
		"\u00a8\7\13\2\2\u00a6\u00a8\7\f\2\2\u00a7\u0096\3\2\2\2\u00a7\u009b\3"+
		"\2\2\2\u00a7\u009c\3\2\2\2\u00a7\u00a1\3\2\2\2\u00a7\u00a2\3\2\2\2\u00a7"+
		"\u00a3\3\2\2\2\u00a7\u00a5\3\2\2\2\u00a7\u00a6\3\2\2\2\u00a8\u00c6\3\2"+
		"\2\2\u00a9\u00aa\f\17\2\2\u00aa\u00ab\t\2\2\2\u00ab\u00c5\5\34\17\20\u00ac"+
		"\u00ad\f\16\2\2\u00ad\u00ae\t\3\2\2\u00ae\u00c5\5\34\17\17\u00af\u00b0"+
		"\f\r\2\2\u00b0\u00b1\t\4\2\2\u00b1\u00c5\5\34\17\16\u00b2\u00b3\f\f\2"+
		"\2\u00b3\u00b4\t\5\2\2\u00b4\u00c5\5\34\17\r\u00b5\u00b6\f\13\2\2\u00b6"+
		"\u00b7\7\24\2\2\u00b7\u00c5\5\34\17\f\u00b8\u00b9\f\n\2\2\u00b9\u00ba"+
		"\7\30\2\2\u00ba\u00c5\5\34\17\13\u00bb\u00bc\f\t\2\2\u00bc\u00bd\7\25"+
		"\2\2\u00bd\u00c5\5\34\17\n\u00be\u00bf\f\b\2\2\u00bf\u00c0\7\26\2\2\u00c0"+
		"\u00c5\5\34\17\t\u00c1\u00c2\f\7\2\2\u00c2\u00c3\7\27\2\2\u00c3\u00c5"+
		"\5\34\17\b\u00c4\u00a9\3\2\2\2\u00c4\u00ac\3\2\2\2\u00c4\u00af\3\2\2\2"+
		"\u00c4\u00b2\3\2\2\2\u00c4\u00b5\3\2\2\2\u00c4\u00b8\3\2\2\2\u00c4\u00bb"+
		"\3\2\2\2\u00c4\u00be\3\2\2\2\u00c4\u00c1\3\2\2\2\u00c5\u00c8\3\2\2\2\u00c6"+
		"\u00c4\3\2\2\2\u00c6\u00c7\3\2\2\2\u00c7\35\3\2\2\2\u00c8\u00c6\3\2\2"+
		"\2\u00c9\u00ca\t\6\2\2\u00ca\37\3\2\2\2\17#\62\65?HVjm\u0082\u008b\u00a7"+
		"\u00c4\u00c6";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}