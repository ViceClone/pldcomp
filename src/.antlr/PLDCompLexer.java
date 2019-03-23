// Generated from /home/coaxuanhuy/Documents/pldcomp/src/PLDComp.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class PLDCompLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		RETURN=1, INT_TYPE=2, ID=3, INT=4, ASSIGN=5, SEMICOLON=6, RIGHT_BRACE=7, 
		LEFT_BRACE=8, LEFT_PARENTHESE=9, RIGHT_PARENTHESE=10, PLUS=11, MINUS=12, 
		STAR=13, DIV=14, MOD=15, WHITESPACE=16, NEWLINE=17, BLOCKCOMMENT=18, LINECOMMENT=19;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"RETURN", "INT_TYPE", "ID", "INT", "ASSIGN", "SEMICOLON", "RIGHT_BRACE", 
		"LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", 
		"STAR", "DIV", "MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT"
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


	public PLDCompLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "PLDComp.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\25\u0082\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3"+
		"\3\4\3\4\7\4\67\n\4\f\4\16\4:\13\4\3\5\5\5=\n\5\3\5\6\5@\n\5\r\5\16\5"+
		"A\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3"+
		"\16\3\16\3\17\3\17\3\20\3\20\3\21\6\21[\n\21\r\21\16\21\\\3\21\3\21\3"+
		"\22\3\22\5\22c\n\22\3\22\5\22f\n\22\3\22\3\22\3\23\3\23\3\23\3\23\7\23"+
		"n\n\23\f\23\16\23q\13\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24"+
		"\7\24|\n\24\f\24\16\24\177\13\24\3\24\3\24\3o\2\25\3\3\5\4\7\5\t\6\13"+
		"\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'"+
		"\25\3\2\7\5\2C\\aac|\6\2\62;C\\aac|\3\2\62;\4\2\13\13\"\"\4\2\f\f\17\17"+
		"\2\u0089\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2"+
		"\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2"+
		"\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\3)\3\2\2\2\5\60\3\2\2\2\7\64\3\2"+
		"\2\2\t<\3\2\2\2\13C\3\2\2\2\rE\3\2\2\2\17G\3\2\2\2\21I\3\2\2\2\23K\3\2"+
		"\2\2\25M\3\2\2\2\27O\3\2\2\2\31Q\3\2\2\2\33S\3\2\2\2\35U\3\2\2\2\37W\3"+
		"\2\2\2!Z\3\2\2\2#e\3\2\2\2%i\3\2\2\2\'w\3\2\2\2)*\7t\2\2*+\7g\2\2+,\7"+
		"v\2\2,-\7w\2\2-.\7t\2\2./\7p\2\2/\4\3\2\2\2\60\61\7k\2\2\61\62\7p\2\2"+
		"\62\63\7v\2\2\63\6\3\2\2\2\648\t\2\2\2\65\67\t\3\2\2\66\65\3\2\2\2\67"+
		":\3\2\2\28\66\3\2\2\289\3\2\2\29\b\3\2\2\2:8\3\2\2\2;=\7/\2\2<;\3\2\2"+
		"\2<=\3\2\2\2=?\3\2\2\2>@\t\4\2\2?>\3\2\2\2@A\3\2\2\2A?\3\2\2\2AB\3\2\2"+
		"\2B\n\3\2\2\2CD\7?\2\2D\f\3\2\2\2EF\7=\2\2F\16\3\2\2\2GH\7\177\2\2H\20"+
		"\3\2\2\2IJ\7}\2\2J\22\3\2\2\2KL\7*\2\2L\24\3\2\2\2MN\7+\2\2N\26\3\2\2"+
		"\2OP\7-\2\2P\30\3\2\2\2QR\7/\2\2R\32\3\2\2\2ST\7,\2\2T\34\3\2\2\2UV\7"+
		"\61\2\2V\36\3\2\2\2WX\7\'\2\2X \3\2\2\2Y[\t\5\2\2ZY\3\2\2\2[\\\3\2\2\2"+
		"\\Z\3\2\2\2\\]\3\2\2\2]^\3\2\2\2^_\b\21\2\2_\"\3\2\2\2`b\7\17\2\2ac\7"+
		"\f\2\2ba\3\2\2\2bc\3\2\2\2cf\3\2\2\2df\7\f\2\2e`\3\2\2\2ed\3\2\2\2fg\3"+
		"\2\2\2gh\b\22\2\2h$\3\2\2\2ij\7\61\2\2jk\7,\2\2ko\3\2\2\2ln\13\2\2\2m"+
		"l\3\2\2\2nq\3\2\2\2op\3\2\2\2om\3\2\2\2pr\3\2\2\2qo\3\2\2\2rs\7,\2\2s"+
		"t\7\61\2\2tu\3\2\2\2uv\b\23\2\2v&\3\2\2\2wx\7\61\2\2xy\7\61\2\2y}\3\2"+
		"\2\2z|\n\6\2\2{z\3\2\2\2|\177\3\2\2\2}{\3\2\2\2}~\3\2\2\2~\u0080\3\2\2"+
		"\2\177}\3\2\2\2\u0080\u0081\b\24\2\2\u0081(\3\2\2\2\13\28<A\\beo}\3\b"+
		"\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}