// Generated from /home/coaxuanhuy/Documents/pldcomp/src/PLDComp.g4 by ANTLR 4.7.1
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
		RETURN=1, INT_TYPE=2, ID=3, INT=4, ASSIGN=5, SEMICOLON=6, RIGHT_BRACE=7, 
		LEFT_BRACE=8, LEFT_PARENTHESE=9, RIGHT_PARENTHESE=10, PLUS=11, MINUS=12, 
		STAR=13, DIV=14, MOD=15, WHITESPACE=16, NEWLINE=17, BLOCKCOMMENT=18, LINECOMMENT=19;
	public static final int
		RULE_prog = 0, RULE_declaration = 1, RULE_statementseq = 2, RULE_statement = 3, 
		RULE_vardeclaration = 4, RULE_assignmentstat = 5, RULE_returnstatement = 6, 
		RULE_expr = 7, RULE_type = 8;
	public static final String[] ruleNames = {
		"prog", "declaration", "statementseq", "statement", "vardeclaration", 
		"assignmentstat", "returnstatement", "expr", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'return'", "'int'", null, null, "'='", "';'", "'}'", "'{'", "'('", 
		"')'", "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "RETURN", "INT_TYPE", "ID", "INT", "ASSIGN", "SEMICOLON", "RIGHT_BRACE", 
		"LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", 
		"STAR", "DIV", "MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT"
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
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public TerminalNode EOF() { return getToken(PLDCompParser.EOF, 0); }
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(18);
			declaration();
			setState(19);
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

	public static class DeclarationContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public StatementseqContext statementseq() {
			return getRuleContext(StatementseqContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(21);
			type();
			setState(22);
			match(ID);
			setState(23);
			match(LEFT_PARENTHESE);
			setState(24);
			match(RIGHT_PARENTHESE);
			setState(25);
			match(LEFT_BRACE);
			setState(26);
			statementseq();
			setState(27);
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
			setState(30); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(29);
				statement();
				}
				}
				setState(32); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << RETURN) | (1L << INT_TYPE) | (1L << ID))) != 0) );
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
			setState(37);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT_TYPE:
				enterOuterAlt(_localctx, 1);
				{
				setState(34);
				vardeclaration();
				}
				break;
			case RETURN:
				enterOuterAlt(_localctx, 2);
				{
				setState(35);
				returnstatement();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 3);
				{
				setState(36);
				assignmentstat();
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
		enterRule(_localctx, 8, RULE_vardeclaration);
		try {
			setState(49);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new DeclWithAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(39);
				type();
				setState(40);
				match(ID);
				setState(41);
				match(ASSIGN);
				setState(42);
				expr(0);
				setState(43);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new DeclWithoutAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(45);
				type();
				setState(46);
				match(ID);
				setState(47);
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
		enterRule(_localctx, 10, RULE_assignmentstat);
		try {
			_localctx = new AssignmentExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(51);
			match(ID);
			setState(52);
			match(ASSIGN);
			setState(53);
			expr(0);
			setState(54);
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
		enterRule(_localctx, 12, RULE_returnstatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(56);
			match(RETURN);
			setState(57);
			expr(0);
			setState(58);
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

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 14;
		enterRecursionRule(_localctx, 14, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(61);
				match(LEFT_PARENTHESE);
				setState(62);
				expr(0);
				setState(63);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 2:
				{
				_localctx = new NegExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(65);
				match(MINUS);
				setState(66);
				match(LEFT_PARENTHESE);
				setState(67);
				expr(0);
				setState(68);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 3:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(70);
				match(INT);
				}
				break;
			case 4:
				{
				_localctx = new NegConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(71);
				match(MINUS);
				setState(72);
				match(INT);
				}
				break;
			case 5:
				{
				_localctx = new NegExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(73);
				match(MINUS);
				setState(74);
				match(LEFT_PARENTHESE);
				setState(75);
				expr(0);
				setState(76);
				match(RIGHT_PARENTHESE);
				}
				break;
			case 6:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(78);
				match(ID);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(89);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(87);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(81);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(82);
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
						setState(83);
						expr(7);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveOpContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(84);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(85);
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
						setState(86);
						expr(6);
						}
						break;
					}
					} 
				}
				setState(91);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
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
		enterRule(_localctx, 16, RULE_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			match(INT_TYPE);
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
		case 7:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 6);
		case 1:
			return precpred(_ctx, 5);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\25a\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\3\2\3\2\3\2"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\6\4!\n\4\r\4\16\4\"\3\5\3\5\3\5\5"+
		"\5(\n\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6\64\n\6\3\7\3\7\3\7"+
		"\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\tR\n\t\3\t\3\t\3\t\3\t\3\t\3\t\7\tZ\n"+
		"\t\f\t\16\t]\13\t\3\n\3\n\3\n\2\3\20\13\2\4\6\b\n\f\16\20\22\2\4\3\2\17"+
		"\21\3\2\r\16\2b\2\24\3\2\2\2\4\27\3\2\2\2\6 \3\2\2\2\b\'\3\2\2\2\n\63"+
		"\3\2\2\2\f\65\3\2\2\2\16:\3\2\2\2\20Q\3\2\2\2\22^\3\2\2\2\24\25\5\4\3"+
		"\2\25\26\7\2\2\3\26\3\3\2\2\2\27\30\5\22\n\2\30\31\7\5\2\2\31\32\7\13"+
		"\2\2\32\33\7\f\2\2\33\34\7\n\2\2\34\35\5\6\4\2\35\36\7\t\2\2\36\5\3\2"+
		"\2\2\37!\5\b\5\2 \37\3\2\2\2!\"\3\2\2\2\" \3\2\2\2\"#\3\2\2\2#\7\3\2\2"+
		"\2$(\5\n\6\2%(\5\16\b\2&(\5\f\7\2\'$\3\2\2\2\'%\3\2\2\2\'&\3\2\2\2(\t"+
		"\3\2\2\2)*\5\22\n\2*+\7\5\2\2+,\7\7\2\2,-\5\20\t\2-.\7\b\2\2.\64\3\2\2"+
		"\2/\60\5\22\n\2\60\61\7\5\2\2\61\62\7\b\2\2\62\64\3\2\2\2\63)\3\2\2\2"+
		"\63/\3\2\2\2\64\13\3\2\2\2\65\66\7\5\2\2\66\67\7\7\2\2\678\5\20\t\289"+
		"\7\b\2\29\r\3\2\2\2:;\7\3\2\2;<\5\20\t\2<=\7\b\2\2=\17\3\2\2\2>?\b\t\1"+
		"\2?@\7\13\2\2@A\5\20\t\2AB\7\f\2\2BR\3\2\2\2CD\7\16\2\2DE\7\13\2\2EF\5"+
		"\20\t\2FG\7\f\2\2GR\3\2\2\2HR\7\6\2\2IJ\7\16\2\2JR\7\6\2\2KL\7\16\2\2"+
		"LM\7\13\2\2MN\5\20\t\2NO\7\f\2\2OR\3\2\2\2PR\7\5\2\2Q>\3\2\2\2QC\3\2\2"+
		"\2QH\3\2\2\2QI\3\2\2\2QK\3\2\2\2QP\3\2\2\2R[\3\2\2\2ST\f\b\2\2TU\t\2\2"+
		"\2UZ\5\20\t\tVW\f\7\2\2WX\t\3\2\2XZ\5\20\t\bYS\3\2\2\2YV\3\2\2\2Z]\3\2"+
		"\2\2[Y\3\2\2\2[\\\3\2\2\2\\\21\3\2\2\2][\3\2\2\2^_\7\4\2\2_\23\3\2\2\2"+
		"\b\"\'\63QY[";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}