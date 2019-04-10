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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, RETURN=6, INT_TYPE=7, IF=8, ELSE=9, 
		WHILE=10, CHAR=11, ID=12, INT=13, LESS=14, LESSEQUAL=15, GREATER=16, GREATEREQUAL=17, 
		EQUAL=18, NOTEQUAL=19, AND=20, OR=21, ANDAND=22, OROR=23, CARET=24, TILDE=25, 
		PRIME=26, BACKSLASH=27, ASSIGN=28, SEMICOLON=29, COMMA=30, RIGHT_BRACE=31, 
		LEFT_BRACE=32, LEFT_PARENTHESE=33, RIGHT_PARENTHESE=34, PLUS=35, MINUS=36, 
		STAR=37, DIV=38, MOD=39, WHITESPACE=40, NEWLINE=41, BLOCKCOMMENT=42, LINECOMMENT=43, 
		ERROR=44;
	public static final int
		RULE_prog = 0, RULE_functiondefinition = 1, RULE_statementseq = 2, RULE_statement = 3, 
		RULE_ifstatement = 4, RULE_whilestatement = 5, RULE_forstatement = 6, 
		RULE_callstatement = 7, RULE_call = 8, RULE_vardeclaration = 9, RULE_assignmentstat = 10, 
		RULE_lvalue = 11, RULE_array = 12, RULE_returnstatement = 13, RULE_expr = 14, 
		RULE_type = 15;
	public static final String[] ruleNames = {
		"prog", "functiondefinition", "statementseq", "statement", "ifstatement", 
		"whilestatement", "forstatement", "callstatement", "call", "vardeclaration", 
		"assignmentstat", "lvalue", "array", "returnstatement", "expr", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'for'", "'{ '", "'['", "']'", "'char'", "'return'", "'int'", "'if'", 
		"'else'", "'while'", null, null, null, "'<'", "'<='", "'>'", "'>='", "'=='", 
		"'!='", "'&'", "'|'", "'&&'", "'||'", "'^'", "'~'", "'''", "'\\'", "'='", 
		"';'", "','", "'}'", "'{'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", 
		"'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, "RETURN", "INT_TYPE", "IF", "ELSE", 
		"WHILE", "CHAR", "ID", "INT", "LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", 
		"EQUAL", "NOTEQUAL", "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", 
		"PRIME", "BACKSLASH", "ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", 
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
			setState(33); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(32);
				functiondefinition();
				}
				}
				setState(35); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__4 || _la==INT_TYPE );
			setState(37);
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
			setState(39);
			type();
			setState(40);
			match(ID);
			setState(41);
			match(LEFT_PARENTHESE);
			setState(53);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__4 || _la==INT_TYPE) {
				{
				setState(42);
				type();
				setState(43);
				match(ID);
				setState(50);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(44);
					match(COMMA);
					setState(45);
					type();
					setState(46);
					match(ID);
					}
					}
					setState(52);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(55);
			match(RIGHT_PARENTHESE);
			setState(56);
			match(LEFT_BRACE);
			setState(57);
			statementseq();
			setState(58);
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
			setState(63);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__4) | (1L << RETURN) | (1L << INT_TYPE) | (1L << IF) | (1L << WHILE) | (1L << ID))) != 0)) {
				{
				{
				setState(60);
				statement();
				}
				}
				setState(65);
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
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_statement);
		try {
			setState(73);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(66);
				vardeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(67);
				ifstatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(68);
				whilestatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(69);
				forstatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(70);
				callstatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(71);
				returnstatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(72);
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
			setState(75);
			match(IF);
			setState(76);
			match(LEFT_PARENTHESE);
			setState(77);
			expr(0);
			setState(78);
			match(RIGHT_PARENTHESE);
			setState(79);
			match(LEFT_BRACE);
			setState(80);
			statementseq();
			setState(81);
			match(RIGHT_BRACE);
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(82);
				match(ELSE);
				setState(83);
				match(LEFT_BRACE);
				setState(84);
				statementseq();
				setState(85);
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
			setState(89);
			match(WHILE);
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
			setState(97);
			match(T__0);
			setState(98);
			match(LEFT_PARENTHESE);
			setState(99);
			assignmentstat();
			setState(100);
			match(SEMICOLON);
			setState(101);
			expr(0);
			setState(102);
			match(SEMICOLON);
			setState(103);
			assignmentstat();
			setState(104);
			match(RIGHT_PARENTHESE);
			setState(105);
			match(T__1);
			setState(106);
			statementseq();
			setState(107);
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
			setState(109);
			call();
			setState(110);
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
			setState(112);
			match(ID);
			setState(113);
			match(LEFT_PARENTHESE);
			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CHAR) | (1L << ID) | (1L << INT) | (1L << LEFT_PARENTHESE) | (1L << MINUS))) != 0)) {
				{
				setState(114);
				expr(0);
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(115);
					match(COMMA);
					setState(116);
					expr(0);
					}
					}
					setState(121);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(124);
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
			setState(158);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				_localctx = new DeclWithAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(126);
				type();
				setState(127);
				match(ID);
				setState(128);
				match(ASSIGN);
				setState(129);
				expr(0);
				setState(130);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new DeclWithoutAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(132);
				type();
				setState(133);
				match(ID);
				setState(134);
				match(SEMICOLON);
				}
				break;
			case 3:
				_localctx = new DeclArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(136);
				type();
				setState(137);
				match(ID);
				setState(138);
				match(T__2);
				setState(139);
				match(INT);
				setState(140);
				match(T__3);
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(141);
					match(ASSIGN);
					setState(142);
					match(LEFT_BRACE);
					setState(151);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CHAR) | (1L << ID) | (1L << INT) | (1L << LEFT_PARENTHESE) | (1L << MINUS))) != 0)) {
						{
						setState(143);
						expr(0);
						setState(148);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==COMMA) {
							{
							{
							setState(144);
							match(COMMA);
							setState(145);
							expr(0);
							}
							}
							setState(150);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
					}

					setState(153);
					match(RIGHT_BRACE);
					}
				}

				setState(156);
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
			setState(160);
			lvalue();
			setState(161);
			match(ASSIGN);
			setState(162);
			expr(0);
			setState(163);
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
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				_localctx = new IdLContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(165);
				match(ID);
				}
				break;
			case 2:
				_localctx = new ArrayLContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(166);
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
			setState(169);
			match(ID);
			setState(170);
			match(T__2);
			setState(171);
			expr(0);
			setState(172);
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
			setState(174);
			match(RETURN);
			setState(175);
			expr(0);
			setState(176);
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
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(179);
				match(LEFT_PARENTHESE);
				setState(180);
				expr(0);
				setState(181);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 2:
				{
				_localctx = new ArrayExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(183);
				array();
				}
				break;
			case 3:
				{
				_localctx = new NegExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(184);
				match(MINUS);
				setState(185);
				match(LEFT_PARENTHESE);
				setState(186);
				expr(0);
				setState(187);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 4:
				{
				_localctx = new CallExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(189);
				call();
				}
				break;
			case 5:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(190);
				match(INT);
				}
				break;
			case 6:
				{
				_localctx = new NegConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(191);
				match(MINUS);
				setState(192);
				match(INT);
				}
				break;
			case 7:
				{
				_localctx = new CharConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(193);
				match(CHAR);
				}
				break;
			case 8:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(194);
				match(ID);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(226);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(224);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(197);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(198);
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
						setState(199);
						expr(14);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(200);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(201);
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
						setState(202);
						expr(13);
						}
						break;
					case 3:
						{
						_localctx = new Rel1ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(203);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(204);
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
						setState(205);
						expr(12);
						}
						break;
					case 4:
						{
						_localctx = new Rel2ExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(206);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(207);
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
						setState(208);
						expr(11);
						}
						break;
					case 5:
						{
						_localctx = new BitwiseAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(209);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(210);
						match(AND);
						setState(211);
						expr(10);
						}
						break;
					case 6:
						{
						_localctx = new BitwiseXorContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(212);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(213);
						match(CARET);
						setState(214);
						expr(9);
						}
						break;
					case 7:
						{
						_localctx = new BitwiseOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(215);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(216);
						match(OR);
						setState(217);
						expr(8);
						}
						break;
					case 8:
						{
						_localctx = new LogicalAndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(218);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(219);
						match(ANDAND);
						setState(220);
						expr(7);
						}
						break;
					case 9:
						{
						_localctx = new LogicalOrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(221);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(222);
						match(OROR);
						setState(223);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(228);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
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
		enterRule(_localctx, 30, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(229);
			_la = _input.LA(1);
			if ( !(_la==T__4 || _la==INT_TYPE) ) {
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
		case 14:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3.\u00ea\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\6\2$\n"+
		"\2\r\2\16\2%\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3\63\n\3\f"+
		"\3\16\3\66\13\3\5\38\n\3\3\3\3\3\3\3\3\3\3\3\3\4\7\4@\n\4\f\4\16\4C\13"+
		"\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5L\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\3\6\3\6\3\6\3\6\5\6Z\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n"+
		"\7\nx\n\n\f\n\16\n{\13\n\5\n}\n\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\7\13\u0095\n\13\f\13\16\13\u0098\13\13\5\13\u009a\n\13\3\13\5\13\u009d"+
		"\n\13\3\13\3\13\5\13\u00a1\n\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\5\r\u00aa"+
		"\n\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\5\20"+
		"\u00c6\n\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\7\20\u00e3\n\20\f\20\16\20\u00e6\13\20\3\21\3\21\3\21\2\3\36\22"+
		"\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \2\7\3\2\')\3\2%&\3\2\20\23\3"+
		"\2\24\25\4\2\7\7\t\t\2\u00fc\2#\3\2\2\2\4)\3\2\2\2\6A\3\2\2\2\bK\3\2\2"+
		"\2\nM\3\2\2\2\f[\3\2\2\2\16c\3\2\2\2\20o\3\2\2\2\22r\3\2\2\2\24\u00a0"+
		"\3\2\2\2\26\u00a2\3\2\2\2\30\u00a9\3\2\2\2\32\u00ab\3\2\2\2\34\u00b0\3"+
		"\2\2\2\36\u00c5\3\2\2\2 \u00e7\3\2\2\2\"$\5\4\3\2#\"\3\2\2\2$%\3\2\2\2"+
		"%#\3\2\2\2%&\3\2\2\2&\'\3\2\2\2\'(\7\2\2\3(\3\3\2\2\2)*\5 \21\2*+\7\16"+
		"\2\2+\67\7#\2\2,-\5 \21\2-\64\7\16\2\2./\7 \2\2/\60\5 \21\2\60\61\7\16"+
		"\2\2\61\63\3\2\2\2\62.\3\2\2\2\63\66\3\2\2\2\64\62\3\2\2\2\64\65\3\2\2"+
		"\2\658\3\2\2\2\66\64\3\2\2\2\67,\3\2\2\2\678\3\2\2\289\3\2\2\29:\7$\2"+
		"\2:;\7\"\2\2;<\5\6\4\2<=\7!\2\2=\5\3\2\2\2>@\5\b\5\2?>\3\2\2\2@C\3\2\2"+
		"\2A?\3\2\2\2AB\3\2\2\2B\7\3\2\2\2CA\3\2\2\2DL\5\24\13\2EL\5\n\6\2FL\5"+
		"\f\7\2GL\5\16\b\2HL\5\20\t\2IL\5\34\17\2JL\5\26\f\2KD\3\2\2\2KE\3\2\2"+
		"\2KF\3\2\2\2KG\3\2\2\2KH\3\2\2\2KI\3\2\2\2KJ\3\2\2\2L\t\3\2\2\2MN\7\n"+
		"\2\2NO\7#\2\2OP\5\36\20\2PQ\7$\2\2QR\7\"\2\2RS\5\6\4\2SY\7!\2\2TU\7\13"+
		"\2\2UV\7\"\2\2VW\5\6\4\2WX\7!\2\2XZ\3\2\2\2YT\3\2\2\2YZ\3\2\2\2Z\13\3"+
		"\2\2\2[\\\7\f\2\2\\]\7#\2\2]^\5\36\20\2^_\7$\2\2_`\7\"\2\2`a\5\6\4\2a"+
		"b\7!\2\2b\r\3\2\2\2cd\7\3\2\2de\7#\2\2ef\5\26\f\2fg\7\37\2\2gh\5\36\20"+
		"\2hi\7\37\2\2ij\5\26\f\2jk\7$\2\2kl\7\4\2\2lm\5\6\4\2mn\7!\2\2n\17\3\2"+
		"\2\2op\5\22\n\2pq\7\37\2\2q\21\3\2\2\2rs\7\16\2\2s|\7#\2\2ty\5\36\20\2"+
		"uv\7 \2\2vx\5\36\20\2wu\3\2\2\2x{\3\2\2\2yw\3\2\2\2yz\3\2\2\2z}\3\2\2"+
		"\2{y\3\2\2\2|t\3\2\2\2|}\3\2\2\2}~\3\2\2\2~\177\7$\2\2\177\23\3\2\2\2"+
		"\u0080\u0081\5 \21\2\u0081\u0082\7\16\2\2\u0082\u0083\7\36\2\2\u0083\u0084"+
		"\5\36\20\2\u0084\u0085\7\37\2\2\u0085\u00a1\3\2\2\2\u0086\u0087\5 \21"+
		"\2\u0087\u0088\7\16\2\2\u0088\u0089\7\37\2\2\u0089\u00a1\3\2\2\2\u008a"+
		"\u008b\5 \21\2\u008b\u008c\7\16\2\2\u008c\u008d\7\5\2\2\u008d\u008e\7"+
		"\17\2\2\u008e\u009c\7\6\2\2\u008f\u0090\7\36\2\2\u0090\u0099\7\"\2\2\u0091"+
		"\u0096\5\36\20\2\u0092\u0093\7 \2\2\u0093\u0095\5\36\20\2\u0094\u0092"+
		"\3\2\2\2\u0095\u0098\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097"+
		"\u009a\3\2\2\2\u0098\u0096\3\2\2\2\u0099\u0091\3\2\2\2\u0099\u009a\3\2"+
		"\2\2\u009a\u009b\3\2\2\2\u009b\u009d\7!\2\2\u009c\u008f\3\2\2\2\u009c"+
		"\u009d\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u009f\7\37\2\2\u009f\u00a1\3"+
		"\2\2\2\u00a0\u0080\3\2\2\2\u00a0\u0086\3\2\2\2\u00a0\u008a\3\2\2\2\u00a1"+
		"\25\3\2\2\2\u00a2\u00a3\5\30\r\2\u00a3\u00a4\7\36\2\2\u00a4\u00a5\5\36"+
		"\20\2\u00a5\u00a6\7\37\2\2\u00a6\27\3\2\2\2\u00a7\u00aa\7\16\2\2\u00a8"+
		"\u00aa\5\32\16\2\u00a9\u00a7\3\2\2\2\u00a9\u00a8\3\2\2\2\u00aa\31\3\2"+
		"\2\2\u00ab\u00ac\7\16\2\2\u00ac\u00ad\7\5\2\2\u00ad\u00ae\5\36\20\2\u00ae"+
		"\u00af\7\6\2\2\u00af\33\3\2\2\2\u00b0\u00b1\7\b\2\2\u00b1\u00b2\5\36\20"+
		"\2\u00b2\u00b3\7\37\2\2\u00b3\35\3\2\2\2\u00b4\u00b5\b\20\1\2\u00b5\u00b6"+
		"\7#\2\2\u00b6\u00b7\5\36\20\2\u00b7\u00b8\7$\2\2\u00b8\u00c6\3\2\2\2\u00b9"+
		"\u00c6\5\32\16\2\u00ba\u00bb\7&\2\2\u00bb\u00bc\7#\2\2\u00bc\u00bd\5\36"+
		"\20\2\u00bd\u00be\7$\2\2\u00be\u00c6\3\2\2\2\u00bf\u00c6\5\22\n\2\u00c0"+
		"\u00c6\7\17\2\2\u00c1\u00c2\7&\2\2\u00c2\u00c6\7\17\2\2\u00c3\u00c6\7"+
		"\r\2\2\u00c4\u00c6\7\16\2\2\u00c5\u00b4\3\2\2\2\u00c5\u00b9\3\2\2\2\u00c5"+
		"\u00ba\3\2\2\2\u00c5\u00bf\3\2\2\2\u00c5\u00c0\3\2\2\2\u00c5\u00c1\3\2"+
		"\2\2\u00c5\u00c3\3\2\2\2\u00c5\u00c4\3\2\2\2\u00c6\u00e4\3\2\2\2\u00c7"+
		"\u00c8\f\17\2\2\u00c8\u00c9\t\2\2\2\u00c9\u00e3\5\36\20\20\u00ca\u00cb"+
		"\f\16\2\2\u00cb\u00cc\t\3\2\2\u00cc\u00e3\5\36\20\17\u00cd\u00ce\f\r\2"+
		"\2\u00ce\u00cf\t\4\2\2\u00cf\u00e3\5\36\20\16\u00d0\u00d1\f\f\2\2\u00d1"+
		"\u00d2\t\5\2\2\u00d2\u00e3\5\36\20\r\u00d3\u00d4\f\13\2\2\u00d4\u00d5"+
		"\7\26\2\2\u00d5\u00e3\5\36\20\f\u00d6\u00d7\f\n\2\2\u00d7\u00d8\7\32\2"+
		"\2\u00d8\u00e3\5\36\20\13\u00d9\u00da\f\t\2\2\u00da\u00db\7\27\2\2\u00db"+
		"\u00e3\5\36\20\n\u00dc\u00dd\f\b\2\2\u00dd\u00de\7\30\2\2\u00de\u00e3"+
		"\5\36\20\t\u00df\u00e0\f\7\2\2\u00e0\u00e1\7\31\2\2\u00e1\u00e3\5\36\20"+
		"\b\u00e2\u00c7\3\2\2\2\u00e2\u00ca\3\2\2\2\u00e2\u00cd\3\2\2\2\u00e2\u00d0"+
		"\3\2\2\2\u00e2\u00d3\3\2\2\2\u00e2\u00d6\3\2\2\2\u00e2\u00d9\3\2\2\2\u00e2"+
		"\u00dc\3\2\2\2\u00e2\u00df\3\2\2\2\u00e3\u00e6\3\2\2\2\u00e4\u00e2\3\2"+
		"\2\2\u00e4\u00e5\3\2\2\2\u00e5\37\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e7\u00e8"+
		"\t\6\2\2\u00e8!\3\2\2\2\22%\64\67AKYy|\u0096\u0099\u009c\u00a0\u00a9\u00c5"+
		"\u00e2\u00e4";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}