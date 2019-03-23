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
		T__0=1, T__1=2, T__2=3, RETURN=4, INT_TYPE=5, ID=6, INT=7, ASSIGNMENT=8, 
		SEMICOLON=9, RIGHT_BRACE=10, LEFT_BRACE=11, LEFT_PARENTHESE=12, RIGHT_PARENTHESE=13, 
		WHITESPACE=14, NEWLINE=15;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "RETURN", "INT_TYPE", "ID", "INT", "ASSIGNMENT", 
		"SEMICOLON", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", 
		"WHITESPACE", "NEWLINE"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'*'", "'+'", "'-'", "'return'", "'int'", null, null, "'='", "';'", 
		"'}'", "'{'", "'('", "')'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, "RETURN", "INT_TYPE", "ID", "INT", "ASSIGNMENT", 
		"SEMICOLON", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", 
		"WHITESPACE", "NEWLINE"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\21]\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\3\3\3\3\4"+
		"\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\7\7\65\n\7\f"+
		"\7\16\78\13\7\3\b\5\b;\n\b\3\b\6\b>\n\b\r\b\16\b?\3\t\3\t\3\n\3\n\3\13"+
		"\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\6\17O\n\17\r\17\16\17P\3\17\3\17"+
		"\3\20\3\20\5\20W\n\20\3\20\5\20Z\n\20\3\20\3\20\2\2\21\3\3\5\4\7\5\t\6"+
		"\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21\3\2\6\5\2"+
		"C\\aac|\6\2\62;C\\aac|\3\2\62;\4\2\13\13\"\"\2b\2\3\3\2\2\2\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\3!\3\2\2\2\5#\3\2\2\2\7%\3\2\2\2\t\'\3"+
		"\2\2\2\13.\3\2\2\2\r\62\3\2\2\2\17:\3\2\2\2\21A\3\2\2\2\23C\3\2\2\2\25"+
		"E\3\2\2\2\27G\3\2\2\2\31I\3\2\2\2\33K\3\2\2\2\35N\3\2\2\2\37Y\3\2\2\2"+
		"!\"\7,\2\2\"\4\3\2\2\2#$\7-\2\2$\6\3\2\2\2%&\7/\2\2&\b\3\2\2\2\'(\7t\2"+
		"\2()\7g\2\2)*\7v\2\2*+\7w\2\2+,\7t\2\2,-\7p\2\2-\n\3\2\2\2./\7k\2\2/\60"+
		"\7p\2\2\60\61\7v\2\2\61\f\3\2\2\2\62\66\t\2\2\2\63\65\t\3\2\2\64\63\3"+
		"\2\2\2\658\3\2\2\2\66\64\3\2\2\2\66\67\3\2\2\2\67\16\3\2\2\28\66\3\2\2"+
		"\29;\7/\2\2:9\3\2\2\2:;\3\2\2\2;=\3\2\2\2<>\t\4\2\2=<\3\2\2\2>?\3\2\2"+
		"\2?=\3\2\2\2?@\3\2\2\2@\20\3\2\2\2AB\7?\2\2B\22\3\2\2\2CD\7=\2\2D\24\3"+
		"\2\2\2EF\7\177\2\2F\26\3\2\2\2GH\7}\2\2H\30\3\2\2\2IJ\7*\2\2J\32\3\2\2"+
		"\2KL\7+\2\2L\34\3\2\2\2MO\t\5\2\2NM\3\2\2\2OP\3\2\2\2PN\3\2\2\2PQ\3\2"+
		"\2\2QR\3\2\2\2RS\b\17\2\2S\36\3\2\2\2TV\7\17\2\2UW\7\f\2\2VU\3\2\2\2V"+
		"W\3\2\2\2WZ\3\2\2\2XZ\7\f\2\2YT\3\2\2\2YX\3\2\2\2Z[\3\2\2\2[\\\b\20\2"+
		"\2\\ \3\2\2\2\t\2\66:?PVY\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}