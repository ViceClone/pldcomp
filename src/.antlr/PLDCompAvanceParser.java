// Generated from /home/amine/repos/pldcomp/src/PLDCompAvance.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class PLDCompAvanceParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, NOMVAR=12, NOMBRE=13;
	public static final int
		RULE_type_variable = 0, RULE_type_function = 1, RULE_exp = 2, RULE_lvalue = 3, 
		RULE_instruction = 4, RULE_param = 5, RULE_fonction = 6;
	public static final String[] ruleNames = {
		"type_variable", "type_function", "exp", "lvalue", "instruction", "param", 
		"fonction"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'char'", "'int'", "'='", "'return'", "';'", "'void'", "','", "'('", 
		"')'", "'{'", "'}'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		"NOMVAR", "NOMBRE"
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
	public String getGrammarFileName() { return "PLDCompAvance.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public PLDCompAvanceParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class Type_variableContext extends ParserRuleContext {
		public Type_variableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_variable; }
	}

	public final Type_variableContext type_variable() throws RecognitionException {
		Type_variableContext _localctx = new Type_variableContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_type_variable);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(14);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
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

	public static class Type_functionContext extends ParserRuleContext {
		public Type_functionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_function; }
	}

	public final Type_functionContext type_function() throws RecognitionException {
		Type_functionContext _localctx = new Type_functionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_type_function);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(16);
			_la = _input.LA(1);
			if ( !(_la==T__0 || _la==T__1) ) {
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

	public static class ExpContext extends ParserRuleContext {
		public TerminalNode NOMBRE() { return getToken(PLDCompAvanceParser.NOMBRE, 0); }
		public LvalueContext lvalue() {
			return getRuleContext(LvalueContext.class,0);
		}
		public ExpContext exp() {
			return getRuleContext(ExpContext.class,0);
		}
		public ExpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exp; }
	}

	public final ExpContext exp() throws RecognitionException {
		ExpContext _localctx = new ExpContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_exp);
		try {
			setState(23);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOMBRE:
				enterOuterAlt(_localctx, 1);
				{
				setState(18);
				match(NOMBRE);
				}
				break;
			case NOMVAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(19);
				lvalue();
				setState(20);
				match(T__2);
				setState(21);
				exp();
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

	public static class LvalueContext extends ParserRuleContext {
		public TerminalNode NOMVAR() { return getToken(PLDCompAvanceParser.NOMVAR, 0); }
		public LvalueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lvalue; }
	}

	public final LvalueContext lvalue() throws RecognitionException {
		LvalueContext _localctx = new LvalueContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_lvalue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(25);
			match(NOMVAR);
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

	public static class InstructionContext extends ParserRuleContext {
		public ExpContext exp() {
			return getRuleContext(ExpContext.class,0);
		}
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_instruction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(27);
			match(T__3);
			setState(28);
			exp();
			setState(29);
			match(T__4);
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

	public static class ParamContext extends ParserRuleContext {
		public List<Type_variableContext> type_variable() {
			return getRuleContexts(Type_variableContext.class);
		}
		public Type_variableContext type_variable(int i) {
			return getRuleContext(Type_variableContext.class,i);
		}
		public List<TerminalNode> NOMVAR() { return getTokens(PLDCompAvanceParser.NOMVAR); }
		public TerminalNode NOMVAR(int i) {
			return getToken(PLDCompAvanceParser.NOMVAR, i);
		}
		public ParamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param; }
	}

	public final ParamContext param() throws RecognitionException {
		ParamContext _localctx = new ParamContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_param);
		int _la;
		try {
			setState(43);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
				enterOuterAlt(_localctx, 1);
				{
				setState(31);
				match(T__5);
				}
				break;
			case T__0:
			case T__1:
				enterOuterAlt(_localctx, 2);
				{
				setState(32);
				type_variable();
				setState(33);
				match(NOMVAR);
				setState(40);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__6) {
					{
					{
					setState(34);
					match(T__6);
					setState(35);
					type_variable();
					setState(36);
					match(NOMVAR);
					}
					}
					setState(42);
					_errHandler.sync(this);
					_la = _input.LA(1);
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

	public static class FonctionContext extends ParserRuleContext {
		public Type_functionContext type_function() {
			return getRuleContext(Type_functionContext.class,0);
		}
		public TerminalNode NOMVAR() { return getToken(PLDCompAvanceParser.NOMVAR, 0); }
		public ParamContext param() {
			return getRuleContext(ParamContext.class,0);
		}
		public FonctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fonction; }
	}

	public final FonctionContext fonction() throws RecognitionException {
		FonctionContext _localctx = new FonctionContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_fonction);
		try {
			setState(60);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(45);
				type_function();
				setState(46);
				match(NOMVAR);
				setState(47);
				match(T__7);
				setState(48);
				param();
				setState(49);
				match(T__8);
				setState(50);
				match(T__9);
				setState(51);
				match(T__10);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(53);
				type_function();
				setState(54);
				match(NOMVAR);
				setState(55);
				match(T__7);
				setState(56);
				match(T__8);
				setState(57);
				match(T__9);
				setState(58);
				match(T__10);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\17A\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\3\2\3\2\3\3\3\3\3\4\3\4\3\4"+
		"\3\4\3\4\5\4\32\n\4\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\7\7)\n\7\f\7\16\7,\13\7\5\7.\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b?\n\b\3\b\2\2\t\2\4\6\b\n\f\16\2\3\3\2\3"+
		"\4\2=\2\20\3\2\2\2\4\22\3\2\2\2\6\31\3\2\2\2\b\33\3\2\2\2\n\35\3\2\2\2"+
		"\f-\3\2\2\2\16>\3\2\2\2\20\21\t\2\2\2\21\3\3\2\2\2\22\23\t\2\2\2\23\5"+
		"\3\2\2\2\24\32\7\17\2\2\25\26\5\b\5\2\26\27\7\5\2\2\27\30\5\6\4\2\30\32"+
		"\3\2\2\2\31\24\3\2\2\2\31\25\3\2\2\2\32\7\3\2\2\2\33\34\7\16\2\2\34\t"+
		"\3\2\2\2\35\36\7\6\2\2\36\37\5\6\4\2\37 \7\7\2\2 \13\3\2\2\2!.\7\b\2\2"+
		"\"#\5\2\2\2#*\7\16\2\2$%\7\t\2\2%&\5\2\2\2&\'\7\16\2\2\')\3\2\2\2($\3"+
		"\2\2\2),\3\2\2\2*(\3\2\2\2*+\3\2\2\2+.\3\2\2\2,*\3\2\2\2-!\3\2\2\2-\""+
		"\3\2\2\2.\r\3\2\2\2/\60\5\4\3\2\60\61\7\16\2\2\61\62\7\n\2\2\62\63\5\f"+
		"\7\2\63\64\7\13\2\2\64\65\7\f\2\2\65\66\7\r\2\2\66?\3\2\2\2\678\5\4\3"+
		"\289\7\16\2\29:\7\n\2\2:;\7\13\2\2;<\7\f\2\2<=\7\r\2\2=?\3\2\2\2>/\3\2"+
		"\2\2>\67\3\2\2\2?\17\3\2\2\2\6\31*->";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}