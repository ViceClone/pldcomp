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
		T__0=1, RETURN=2, INT_TYPE=3, ID=4, INT=5, ASSIGN=6, SEMICOLON=7, RIGHT_BRACE=8, 
		LEFT_BRACE=9, LEFT_PARENTHESE=10, RIGHT_PARENTHESE=11, PLUS=12, MINUS=13, 
		STAR=14, DIV=15, MOD=16, WHITESPACE=17, NEWLINE=18, BLOCKCOMMENT=19, LINECOMMENT=20, 
		ERROR=21;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "RETURN", "INT_TYPE", "ID", "INT", "ASSIGN", "SEMICOLON", "RIGHT_BRACE", 
		"LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", "MINUS", 
		"STAR", "DIV", "MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", 
		"ERROR"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "','", "'return'", "'int'", null, null, "'='", "';'", "'}'", "'{'", 
		"'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, "RETURN", "INT_TYPE", "ID", "INT", "ASSIGN", "SEMICOLON", 
		"RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", "RIGHT_PARENTHESE", "PLUS", 
		"MINUS", "STAR", "DIV", "MOD", "WHITESPACE", "NEWLINE", "BLOCKCOMMENT", 
		"LINECOMMENT", "ERROR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\27\u0087\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\3\2\3\2\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\7\5=\n\5\f\5\16\5@\13\5\3\6\6\6C"+
		"\n\6\r\6\16\6D\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3"+
		"\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\6\22^\n\22\r\22\16\22"+
		"_\3\22\3\22\3\23\3\23\5\23f\n\23\3\23\5\23i\n\23\3\23\3\23\3\24\3\24\3"+
		"\24\3\24\7\24q\n\24\f\24\16\24t\13\24\3\24\3\24\3\24\3\24\3\24\3\25\3"+
		"\25\3\25\3\25\7\25\177\n\25\f\25\16\25\u0082\13\25\3\25\3\25\3\26\3\26"+
		"\3r\2\27\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17"+
		"\35\20\37\21!\22#\23%\24\'\25)\26+\27\3\2\7\5\2C\\aac|\6\2\62;C\\aac|"+
		"\3\2\62;\4\2\13\13\"\"\4\2\f\f\17\17\2\u008d\2\3\3\2\2\2\2\5\3\2\2\2\2"+
		"\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2"+
		"\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2"+
		"\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2"+
		"\2\2)\3\2\2\2\2+\3\2\2\2\3-\3\2\2\2\5/\3\2\2\2\7\66\3\2\2\2\t:\3\2\2\2"+
		"\13B\3\2\2\2\rF\3\2\2\2\17H\3\2\2\2\21J\3\2\2\2\23L\3\2\2\2\25N\3\2\2"+
		"\2\27P\3\2\2\2\31R\3\2\2\2\33T\3\2\2\2\35V\3\2\2\2\37X\3\2\2\2!Z\3\2\2"+
		"\2#]\3\2\2\2%h\3\2\2\2\'l\3\2\2\2)z\3\2\2\2+\u0085\3\2\2\2-.\7.\2\2.\4"+
		"\3\2\2\2/\60\7t\2\2\60\61\7g\2\2\61\62\7v\2\2\62\63\7w\2\2\63\64\7t\2"+
		"\2\64\65\7p\2\2\65\6\3\2\2\2\66\67\7k\2\2\678\7p\2\289\7v\2\29\b\3\2\2"+
		"\2:>\t\2\2\2;=\t\3\2\2<;\3\2\2\2=@\3\2\2\2><\3\2\2\2>?\3\2\2\2?\n\3\2"+
		"\2\2@>\3\2\2\2AC\t\4\2\2BA\3\2\2\2CD\3\2\2\2DB\3\2\2\2DE\3\2\2\2E\f\3"+
		"\2\2\2FG\7?\2\2G\16\3\2\2\2HI\7=\2\2I\20\3\2\2\2JK\7\177\2\2K\22\3\2\2"+
		"\2LM\7}\2\2M\24\3\2\2\2NO\7*\2\2O\26\3\2\2\2PQ\7+\2\2Q\30\3\2\2\2RS\7"+
		"-\2\2S\32\3\2\2\2TU\7/\2\2U\34\3\2\2\2VW\7,\2\2W\36\3\2\2\2XY\7\61\2\2"+
		"Y \3\2\2\2Z[\7\'\2\2[\"\3\2\2\2\\^\t\5\2\2]\\\3\2\2\2^_\3\2\2\2_]\3\2"+
		"\2\2_`\3\2\2\2`a\3\2\2\2ab\b\22\2\2b$\3\2\2\2ce\7\17\2\2df\7\f\2\2ed\3"+
		"\2\2\2ef\3\2\2\2fi\3\2\2\2gi\7\f\2\2hc\3\2\2\2hg\3\2\2\2ij\3\2\2\2jk\b"+
		"\23\2\2k&\3\2\2\2lm\7\61\2\2mn\7,\2\2nr\3\2\2\2oq\13\2\2\2po\3\2\2\2q"+
		"t\3\2\2\2rs\3\2\2\2rp\3\2\2\2su\3\2\2\2tr\3\2\2\2uv\7,\2\2vw\7\61\2\2"+
		"wx\3\2\2\2xy\b\24\2\2y(\3\2\2\2z{\7\61\2\2{|\7\61\2\2|\u0080\3\2\2\2}"+
		"\177\n\6\2\2~}\3\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3"+
		"\2\2\2\u0081\u0083\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u0084\b\25\2\2\u0084"+
		"*\3\2\2\2\u0085\u0086\13\2\2\2\u0086,\3\2\2\2\n\2>D_ehr\u0080\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}