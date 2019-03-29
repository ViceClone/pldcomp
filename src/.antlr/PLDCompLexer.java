// Generated from /home/amine/repos/pldcomp/src/PLDComp.g4 by ANTLR 4.7.1
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\25\177\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3"+
		"\4\7\4\67\n\4\f\4\16\4:\13\4\3\5\6\5=\n\5\r\5\16\5>\3\6\3\6\3\7\3\7\3"+
		"\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3"+
		"\20\3\20\3\21\6\21X\n\21\r\21\16\21Y\3\21\3\21\3\22\3\22\5\22`\n\22\3"+
		"\22\5\22c\n\22\3\22\3\22\3\23\3\23\3\23\3\23\7\23k\n\23\f\23\16\23n\13"+
		"\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\7\24y\n\24\f\24\16\24"+
		"|\13\24\3\24\3\24\3l\2\25\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25\3\2\7\5\2C\\aac|\6\2"+
		"\62;C\\aac|\3\2\62;\4\2\13\13\"\"\4\2\f\f\17\17\2\u0085\2\3\3\2\2\2\2"+
		"\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2"+
		"\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2"+
		"\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2"+
		"\2\'\3\2\2\2\3)\3\2\2\2\5\60\3\2\2\2\7\64\3\2\2\2\t<\3\2\2\2\13@\3\2\2"+
		"\2\rB\3\2\2\2\17D\3\2\2\2\21F\3\2\2\2\23H\3\2\2\2\25J\3\2\2\2\27L\3\2"+
		"\2\2\31N\3\2\2\2\33P\3\2\2\2\35R\3\2\2\2\37T\3\2\2\2!W\3\2\2\2#b\3\2\2"+
		"\2%f\3\2\2\2\'t\3\2\2\2)*\7t\2\2*+\7g\2\2+,\7v\2\2,-\7w\2\2-.\7t\2\2."+
		"/\7p\2\2/\4\3\2\2\2\60\61\7k\2\2\61\62\7p\2\2\62\63\7v\2\2\63\6\3\2\2"+
		"\2\648\t\2\2\2\65\67\t\3\2\2\66\65\3\2\2\2\67:\3\2\2\28\66\3\2\2\289\3"+
		"\2\2\29\b\3\2\2\2:8\3\2\2\2;=\t\4\2\2<;\3\2\2\2=>\3\2\2\2><\3\2\2\2>?"+
		"\3\2\2\2?\n\3\2\2\2@A\7?\2\2A\f\3\2\2\2BC\7=\2\2C\16\3\2\2\2DE\7\177\2"+
		"\2E\20\3\2\2\2FG\7}\2\2G\22\3\2\2\2HI\7*\2\2I\24\3\2\2\2JK\7+\2\2K\26"+
		"\3\2\2\2LM\7-\2\2M\30\3\2\2\2NO\7/\2\2O\32\3\2\2\2PQ\7,\2\2Q\34\3\2\2"+
		"\2RS\7\61\2\2S\36\3\2\2\2TU\7\'\2\2U \3\2\2\2VX\t\5\2\2WV\3\2\2\2XY\3"+
		"\2\2\2YW\3\2\2\2YZ\3\2\2\2Z[\3\2\2\2[\\\b\21\2\2\\\"\3\2\2\2]_\7\17\2"+
		"\2^`\7\f\2\2_^\3\2\2\2_`\3\2\2\2`c\3\2\2\2ac\7\f\2\2b]\3\2\2\2ba\3\2\2"+
		"\2cd\3\2\2\2de\b\22\2\2e$\3\2\2\2fg\7\61\2\2gh\7,\2\2hl\3\2\2\2ik\13\2"+
		"\2\2ji\3\2\2\2kn\3\2\2\2lm\3\2\2\2lj\3\2\2\2mo\3\2\2\2nl\3\2\2\2op\7,"+
		"\2\2pq\7\61\2\2qr\3\2\2\2rs\b\23\2\2s&\3\2\2\2tu\7\61\2\2uv\7\61\2\2v"+
		"z\3\2\2\2wy\n\6\2\2xw\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{}\3\2\2\2"+
		"|z\3\2\2\2}~\b\24\2\2~(\3\2\2\2\n\28>Y_blz\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}