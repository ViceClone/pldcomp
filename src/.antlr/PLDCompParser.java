// Generated from /home/amine/repos/pldcomp/src/PLDComp.g4 by ANTLR 4.7.1
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
		T__0=1, RETURN=2, ID=3, INT=4, ASSIGNMENT=5, SEMICOLON=6, RIGHT_BRACE=7, 
		LEFT_BRACE=8, LEFT_PARENTHESE=9, RIGHT_PARENTHESE=10, WHITESPACE=11, NEWLINE=12;
	public static final int
		RULE_prog = 0, RULE_declaration = 1, RULE_statementseq = 2, RULE_statement = 3, 
		RULE_vardeclaration = 4, RULE_assignmentstat = 5, RULE_returnstatement = 6, 
		RULE_expr = 7, RULE_type = 8;
	public static final String[] ruleNames = {
		"prog", "declaration", "statementseq", "statement", "vardeclaration", 
		"assignmentstat", "returnstatement", "expr", "type"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'int'", "'return'", null, null, "'='", "';'", "'}'", "'{'", "'('", 
		"')'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, "RETURN", "ID", "INT", "ASSIGNMENT", "SEMICOLON", "RIGHT_BRACE", 
		"LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "WHITESPACE", "NEWLINE"
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
			} while ( _la==RETURN );
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
		public ReturnstatementContext returnstatement() {
			return getRuleContext(ReturnstatementContext.class,0);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(34);
			returnstatement();
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
		public AssignmentstatContext assignmentstat() {
			return getRuleContext(AssignmentstatContext.class,0);
		}
		public DeclWithoutAssignmentContext(VardeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class DeclWithAssignmentContext extends VardeclarationContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public DeclWithAssignmentContext(VardeclarationContext ctx) { copyFrom(ctx); }
	}

	public final VardeclarationContext vardeclaration() throws RecognitionException {
		VardeclarationContext _localctx = new VardeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_vardeclaration);
		try {
			setState(42);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new DeclWithAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(36);
				type();
				setState(37);
				match(ID);
				}
				break;
			case 2:
				_localctx = new DeclWithoutAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(39);
				type();
				setState(40);
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

	public static class AssignmentstatContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(PLDCompParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignmentstatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentstat; }
	}

	public final AssignmentstatContext assignmentstat() throws RecognitionException {
		AssignmentstatContext _localctx = new AssignmentstatContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_assignmentstat);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			match(ID);
			setState(45);
			match(ASSIGNMENT);
			setState(46);
			expr();
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
			setState(48);
			match(RETURN);
			setState(49);
			expr();
			setState(50);
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
	public static class ConstContext extends ExprContext {
		public TerminalNode INT() { return getToken(PLDCompParser.INT, 0); }
		public ConstContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_expr);
		try {
			setState(57);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				_localctx = new ConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(52);
				match(INT);
				}
				break;
			case LEFT_PARENTHESE:
				_localctx = new ParContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(53);
				match(LEFT_PARENTHESE);
				setState(54);
				expr();
				setState(55);
				match(RIGHT_PARENTHESE);
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
			setState(59);
			match(T__0);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\16@\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\3\2\3\2\3\2"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\6\4!\n\4\r\4\16\4\"\3\5\3\5\3\6\3"+
		"\6\3\6\3\6\3\6\3\6\5\6-\n\6\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3"+
		"\t\3\t\3\t\5\t<\n\t\3\n\3\n\3\n\2\2\13\2\4\6\b\n\f\16\20\22\2\2\29\2\24"+
		"\3\2\2\2\4\27\3\2\2\2\6 \3\2\2\2\b$\3\2\2\2\n,\3\2\2\2\f.\3\2\2\2\16\62"+
		"\3\2\2\2\20;\3\2\2\2\22=\3\2\2\2\24\25\5\4\3\2\25\26\7\2\2\3\26\3\3\2"+
		"\2\2\27\30\5\22\n\2\30\31\7\5\2\2\31\32\7\13\2\2\32\33\7\f\2\2\33\34\7"+
		"\n\2\2\34\35\5\6\4\2\35\36\7\t\2\2\36\5\3\2\2\2\37!\5\b\5\2 \37\3\2\2"+
		"\2!\"\3\2\2\2\" \3\2\2\2\"#\3\2\2\2#\7\3\2\2\2$%\5\16\b\2%\t\3\2\2\2&"+
		"\'\5\22\n\2\'(\7\5\2\2(-\3\2\2\2)*\5\22\n\2*+\5\f\7\2+-\3\2\2\2,&\3\2"+
		"\2\2,)\3\2\2\2-\13\3\2\2\2./\7\5\2\2/\60\7\7\2\2\60\61\5\20\t\2\61\r\3"+
		"\2\2\2\62\63\7\4\2\2\63\64\5\20\t\2\64\65\7\b\2\2\65\17\3\2\2\2\66<\7"+
		"\6\2\2\678\7\13\2\289\5\20\t\29:\7\f\2\2:<\3\2\2\2;\66\3\2\2\2;\67\3\2"+
		"\2\2<\21\3\2\2\2=>\7\3\2\2>\23\3\2\2\2\5\",;";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}