// Generated from /home/viceclone/Documents/pldcomp/src/PLDComp.g4 by ANTLR 4.7.1
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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, RETURN=6, INT_TYPE=7, IF=8, ELSE=9, 
		WHILE=10, CHAR=11, ID=12, INT=13, LESS=14, LESSEQUAL=15, GREATER=16, GREATEREQUAL=17, 
		EQUAL=18, NOTEQUAL=19, AND=20, OR=21, ANDAND=22, OROR=23, CARET=24, TILDE=25, 
		PRIME=26, BACKSLASH=27, ASSIGN=28, SEMICOLON=29, COMMA=30, RIGHT_BRACE=31, 
		LEFT_BRACE=32, LEFT_PARENTHESE=33, RIGHT_PARENTHESE=34, PLUS=35, MINUS=36, 
		STAR=37, DIV=38, MOD=39, WHITESPACE=40, NEWLINE=41, BLOCKCOMMENT=42, LINECOMMENT=43, 
		ERROR=44;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "RETURN", "INT_TYPE", "IF", "ELSE", 
		"WHILE", "CHAR", "ID", "INT", "LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", 
		"EQUAL", "NOTEQUAL", "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", 
		"PRIME", "BACKSLASH", "ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", 
		"LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", 
		"MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "ERROR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2.\u00fd\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6"+
		"\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\n\3\n\3"+
		"\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\5\f\u0089\n\f"+
		"\3\f\3\f\3\r\3\r\7\r\u008f\n\r\f\r\16\r\u0092\13\r\3\16\6\16\u0095\n\16"+
		"\r\16\16\16\u0096\3\17\3\17\3\20\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3"+
		"\23\3\23\3\23\3\24\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\27\3\30\3"+
		"\30\3\30\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3"+
		"\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3)"+
		"\6)\u00d4\n)\r)\16)\u00d5\3)\3)\3*\3*\5*\u00dc\n*\3*\5*\u00df\n*\3*\3"+
		"*\3+\3+\3+\3+\7+\u00e7\n+\f+\16+\u00ea\13+\3+\3+\3+\3+\3+\3,\3,\3,\3,"+
		"\7,\u00f5\n,\f,\16,\u00f8\13,\3,\3,\3-\3-\3\u00e8\2.\3\3\5\4\7\5\t\6\13"+
		"\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'"+
		"\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'"+
		"M(O)Q*S+U,W-Y.\3\2\t\6\2\f\f\17\17))^^\f\2$$))AA^^cdhhppttvvxx\5\2C\\"+
		"aac|\6\2\62;C\\aac|\3\2\62;\4\2\13\13\"\"\4\2\f\f\17\17\2\u0104\2\3\3"+
		"\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2"+
		"\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3"+
		"\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2"+
		"%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61"+
		"\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2"+
		"\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I"+
		"\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2"+
		"\2\2\2W\3\2\2\2\2Y\3\2\2\2\3[\3\2\2\2\5_\3\2\2\2\7b\3\2\2\2\td\3\2\2\2"+
		"\13f\3\2\2\2\rk\3\2\2\2\17r\3\2\2\2\21v\3\2\2\2\23y\3\2\2\2\25~\3\2\2"+
		"\2\27\u0084\3\2\2\2\31\u008c\3\2\2\2\33\u0094\3\2\2\2\35\u0098\3\2\2\2"+
		"\37\u009a\3\2\2\2!\u009d\3\2\2\2#\u009f\3\2\2\2%\u00a2\3\2\2\2\'\u00a5"+
		"\3\2\2\2)\u00a8\3\2\2\2+\u00aa\3\2\2\2-\u00ac\3\2\2\2/\u00af\3\2\2\2\61"+
		"\u00b2\3\2\2\2\63\u00b4\3\2\2\2\65\u00b6\3\2\2\2\67\u00b8\3\2\2\29\u00ba"+
		"\3\2\2\2;\u00bc\3\2\2\2=\u00be\3\2\2\2?\u00c0\3\2\2\2A\u00c2\3\2\2\2C"+
		"\u00c4\3\2\2\2E\u00c6\3\2\2\2G\u00c8\3\2\2\2I\u00ca\3\2\2\2K\u00cc\3\2"+
		"\2\2M\u00ce\3\2\2\2O\u00d0\3\2\2\2Q\u00d3\3\2\2\2S\u00de\3\2\2\2U\u00e2"+
		"\3\2\2\2W\u00f0\3\2\2\2Y\u00fb\3\2\2\2[\\\7h\2\2\\]\7q\2\2]^\7t\2\2^\4"+
		"\3\2\2\2_`\7}\2\2`a\7\"\2\2a\6\3\2\2\2bc\7]\2\2c\b\3\2\2\2de\7_\2\2e\n"+
		"\3\2\2\2fg\7e\2\2gh\7j\2\2hi\7c\2\2ij\7t\2\2j\f\3\2\2\2kl\7t\2\2lm\7g"+
		"\2\2mn\7v\2\2no\7w\2\2op\7t\2\2pq\7p\2\2q\16\3\2\2\2rs\7k\2\2st\7p\2\2"+
		"tu\7v\2\2u\20\3\2\2\2vw\7k\2\2wx\7h\2\2x\22\3\2\2\2yz\7g\2\2z{\7n\2\2"+
		"{|\7u\2\2|}\7g\2\2}\24\3\2\2\2~\177\7y\2\2\177\u0080\7j\2\2\u0080\u0081"+
		"\7k\2\2\u0081\u0082\7n\2\2\u0082\u0083\7g\2\2\u0083\26\3\2\2\2\u0084\u0088"+
		"\7)\2\2\u0085\u0089\n\2\2\2\u0086\u0087\7^\2\2\u0087\u0089\t\3\2\2\u0088"+
		"\u0085\3\2\2\2\u0088\u0086\3\2\2\2\u0089\u008a\3\2\2\2\u008a\u008b\7)"+
		"\2\2\u008b\30\3\2\2\2\u008c\u0090\t\4\2\2\u008d\u008f\t\5\2\2\u008e\u008d"+
		"\3\2\2\2\u008f\u0092\3\2\2\2\u0090\u008e\3\2\2\2\u0090\u0091\3\2\2\2\u0091"+
		"\32\3\2\2\2\u0092\u0090\3\2\2\2\u0093\u0095\t\6\2\2\u0094\u0093\3\2\2"+
		"\2\u0095\u0096\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097\34"+
		"\3\2\2\2\u0098\u0099\7>\2\2\u0099\36\3\2\2\2\u009a\u009b\7>\2\2\u009b"+
		"\u009c\7?\2\2\u009c \3\2\2\2\u009d\u009e\7@\2\2\u009e\"\3\2\2\2\u009f"+
		"\u00a0\7@\2\2\u00a0\u00a1\7?\2\2\u00a1$\3\2\2\2\u00a2\u00a3\7?\2\2\u00a3"+
		"\u00a4\7?\2\2\u00a4&\3\2\2\2\u00a5\u00a6\7#\2\2\u00a6\u00a7\7?\2\2\u00a7"+
		"(\3\2\2\2\u00a8\u00a9\7(\2\2\u00a9*\3\2\2\2\u00aa\u00ab\7~\2\2\u00ab,"+
		"\3\2\2\2\u00ac\u00ad\7(\2\2\u00ad\u00ae\7(\2\2\u00ae.\3\2\2\2\u00af\u00b0"+
		"\7~\2\2\u00b0\u00b1\7~\2\2\u00b1\60\3\2\2\2\u00b2\u00b3\7`\2\2\u00b3\62"+
		"\3\2\2\2\u00b4\u00b5\7\u0080\2\2\u00b5\64\3\2\2\2\u00b6\u00b7\7)\2\2\u00b7"+
		"\66\3\2\2\2\u00b8\u00b9\7^\2\2\u00b98\3\2\2\2\u00ba\u00bb\7?\2\2\u00bb"+
		":\3\2\2\2\u00bc\u00bd\7=\2\2\u00bd<\3\2\2\2\u00be\u00bf\7.\2\2\u00bf>"+
		"\3\2\2\2\u00c0\u00c1\7\177\2\2\u00c1@\3\2\2\2\u00c2\u00c3\7}\2\2\u00c3"+
		"B\3\2\2\2\u00c4\u00c5\7*\2\2\u00c5D\3\2\2\2\u00c6\u00c7\7+\2\2\u00c7F"+
		"\3\2\2\2\u00c8\u00c9\7-\2\2\u00c9H\3\2\2\2\u00ca\u00cb\7/\2\2\u00cbJ\3"+
		"\2\2\2\u00cc\u00cd\7,\2\2\u00cdL\3\2\2\2\u00ce\u00cf\7\61\2\2\u00cfN\3"+
		"\2\2\2\u00d0\u00d1\7\'\2\2\u00d1P\3\2\2\2\u00d2\u00d4\t\7\2\2\u00d3\u00d2"+
		"\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5\u00d3\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6"+
		"\u00d7\3\2\2\2\u00d7\u00d8\b)\2\2\u00d8R\3\2\2\2\u00d9\u00db\7\17\2\2"+
		"\u00da\u00dc\7\f\2\2\u00db\u00da\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc\u00df"+
		"\3\2\2\2\u00dd\u00df\7\f\2\2\u00de\u00d9\3\2\2\2\u00de\u00dd\3\2\2\2\u00df"+
		"\u00e0\3\2\2\2\u00e0\u00e1\b*\2\2\u00e1T\3\2\2\2\u00e2\u00e3\7\61\2\2"+
		"\u00e3\u00e4\7,\2\2\u00e4\u00e8\3\2\2\2\u00e5\u00e7\13\2\2\2\u00e6\u00e5"+
		"\3\2\2\2\u00e7\u00ea\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e9"+
		"\u00eb\3\2\2\2\u00ea\u00e8\3\2\2\2\u00eb\u00ec\7,\2\2\u00ec\u00ed\7\61"+
		"\2\2\u00ed\u00ee\3\2\2\2\u00ee\u00ef\b+\2\2\u00efV\3\2\2\2\u00f0\u00f1"+
		"\7\61\2\2\u00f1\u00f2\7\61\2\2\u00f2\u00f6\3\2\2\2\u00f3\u00f5\n\b\2\2"+
		"\u00f4\u00f3\3\2\2\2\u00f5\u00f8\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f6\u00f7"+
		"\3\2\2\2\u00f7\u00f9\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f9\u00fa\b,\2\2\u00fa"+
		"X\3\2\2\2\u00fb\u00fc\13\2\2\2\u00fcZ\3\2\2\2\13\2\u0088\u0090\u0096\u00d5"+
		"\u00db\u00de\u00e8\u00f6\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}