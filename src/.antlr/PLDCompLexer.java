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
		T__0=1, T__1=2, T__2=3, T__3=4, RETURN=5, INT_TYPE=6, INT32_TYPE=7, CHAR_TYPE=8, 
		VOID_TYPE=9, IF=10, ELSE=11, WHILE=12, CHAR=13, ID=14, INT=15, LESS=16, 
		LESSEQUAL=17, GREATER=18, GREATEREQUAL=19, EQUAL=20, NOTEQUAL=21, PLUSPLUS=22, 
		MINUSMINUS=23, SHIFTL=24, SHIFTR=25, ADDE=26, SUBE=27, MULE=28, DIVE=29, 
		MODE=30, ORE=31, XORE=32, ANDE=33, AND=34, OR=35, ANDAND=36, OROR=37, 
		CARET=38, TILDE=39, PRIME=40, BACKSLASH=41, ASSIGN=42, SEMICOLON=43, COMMA=44, 
		RIGHT_BRACE=45, LEFT_BRACE=46, LEFT_PARENTHESE=47, RIGHT_PARENTHESE=48, 
		PLUS=49, MINUS=50, STAR=51, DIV=52, MOD=53, WHITESPACE=54, NEWLINE=55, 
		BLOCKCOMMENT=56, LINECOMMENT=57, DIRECTIVE=58, ERROR=59;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "RETURN", "INT_TYPE", "INT32_TYPE", "CHAR_TYPE", 
		"VOID_TYPE", "IF", "ELSE", "WHILE", "CHAR", "ID", "INT", "LESS", "LESSEQUAL", 
		"GREATER", "GREATEREQUAL", "EQUAL", "NOTEQUAL", "PLUSPLUS", "MINUSMINUS", 
		"SHIFTL", "SHIFTR", "ADDE", "SUBE", "MULE", "DIVE", "MODE", "ORE", "XORE", 
		"ANDE", "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", "PRIME", "BACKSLASH", 
		"ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", 
		"RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", "MOD", "WHITESPACE", 
		"NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "DIRECTIVE", "ERROR"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'for'", "'{ '", "'['", "']'", "'return'", "'int'", "'int32_t'", 
		"'char'", "'void'", "'if'", "'else'", "'while'", null, null, null, "'<'", 
		"'<='", "'>'", "'>='", "'=='", "'!='", "'++'", "'--'", "'<<'", "'>>'", 
		"'+='", "'-='", "'*='", "'/='", "'%='", "'|='", "'^='", "'&='", "'&'", 
		"'|'", "'&&'", "'||'", "'^'", "'~'", "'''", "'\\'", "'='", "';'", "','", 
		"'}'", "'{'", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, "RETURN", "INT_TYPE", "INT32_TYPE", "CHAR_TYPE", 
		"VOID_TYPE", "IF", "ELSE", "WHILE", "CHAR", "ID", "INT", "LESS", "LESSEQUAL", 
		"GREATER", "GREATEREQUAL", "EQUAL", "NOTEQUAL", "PLUSPLUS", "MINUSMINUS", 
		"SHIFTL", "SHIFTR", "ADDE", "SUBE", "MULE", "DIVE", "MODE", "ORE", "XORE", 
		"ANDE", "AND", "OR", "ANDAND", "OROR", "CARET", "TILDE", "PRIME", "BACKSLASH", 
		"ASSIGN", "SEMICOLON", "COMMA", "RIGHT_BRACE", "LEFT_BRACE", "LEFT_PARENTHESE", 
		"RIGHT_PARENTHESE", "PLUS", "MINUS", "STAR", "DIV", "MOD", "WHITESPACE", 
		"NEWLINE", "BLOCKCOMMENT", "LINECOMMENT", "DIRECTIVE", "ERROR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2=\u0158\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\3\2\3"+
		"\2\3\2\3\2\3\3\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7"+
		"\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\n\3"+
		"\n\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\16\3\16\3\16\3\16\5\16\u00b4\n\16\3\16\3\16\3\17\3\17\7\17\u00ba"+
		"\n\17\f\17\16\17\u00bd\13\17\3\20\6\20\u00c0\n\20\r\20\16\20\u00c1\3\21"+
		"\3\21\3\22\3\22\3\22\3\23\3\23\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26"+
		"\3\26\3\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\32\3\33"+
		"\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\36\3\37\3\37\3\37"+
		"\3 \3 \3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3$\3$\3%\3%\3%\3&\3&\3&\3\'\3\'\3"+
		"(\3(\3)\3)\3*\3*\3+\3+\3,\3,\3-\3-\3.\3.\3/\3/\3\60\3\60\3\61\3\61\3\62"+
		"\3\62\3\63\3\63\3\64\3\64\3\65\3\65\3\66\3\66\3\67\6\67\u0123\n\67\r\67"+
		"\16\67\u0124\3\67\3\67\38\38\58\u012b\n8\38\58\u012e\n8\38\38\39\39\3"+
		"9\39\79\u0136\n9\f9\169\u0139\139\39\39\39\39\39\3:\3:\3:\3:\7:\u0144"+
		"\n:\f:\16:\u0147\13:\3:\3:\3;\3;\5;\u014d\n;\3;\7;\u0150\n;\f;\16;\u0153"+
		"\13;\3;\3;\3<\3<\3\u0137\2=\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32"+
		"\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a"+
		"\62c\63e\64g\65i\66k\67m8o9q:s;u<w=\3\2\t\6\2\f\f\17\17))^^\f\2$$))AA"+
		"^^cdhhppttvvxx\5\2C\\aac|\6\2\62;C\\aac|\3\2\62;\4\2\13\13\"\"\4\2\f\f"+
		"\17\17\2\u0161\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3"+
		"\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2"+
		"\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3"+
		"\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2"+
		"\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\2"+
		"9\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3"+
		"\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2"+
		"\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2"+
		"_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3"+
		"\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3\2\2\2\2w\3\2\2"+
		"\2\3y\3\2\2\2\5}\3\2\2\2\7\u0080\3\2\2\2\t\u0082\3\2\2\2\13\u0084\3\2"+
		"\2\2\r\u008b\3\2\2\2\17\u008f\3\2\2\2\21\u0097\3\2\2\2\23\u009c\3\2\2"+
		"\2\25\u00a1\3\2\2\2\27\u00a4\3\2\2\2\31\u00a9\3\2\2\2\33\u00af\3\2\2\2"+
		"\35\u00b7\3\2\2\2\37\u00bf\3\2\2\2!\u00c3\3\2\2\2#\u00c5\3\2\2\2%\u00c8"+
		"\3\2\2\2\'\u00ca\3\2\2\2)\u00cd\3\2\2\2+\u00d0\3\2\2\2-\u00d3\3\2\2\2"+
		"/\u00d6\3\2\2\2\61\u00d9\3\2\2\2\63\u00dc\3\2\2\2\65\u00df\3\2\2\2\67"+
		"\u00e2\3\2\2\29\u00e5\3\2\2\2;\u00e8\3\2\2\2=\u00eb\3\2\2\2?\u00ee\3\2"+
		"\2\2A\u00f1\3\2\2\2C\u00f4\3\2\2\2E\u00f7\3\2\2\2G\u00f9\3\2\2\2I\u00fb"+
		"\3\2\2\2K\u00fe\3\2\2\2M\u0101\3\2\2\2O\u0103\3\2\2\2Q\u0105\3\2\2\2S"+
		"\u0107\3\2\2\2U\u0109\3\2\2\2W\u010b\3\2\2\2Y\u010d\3\2\2\2[\u010f\3\2"+
		"\2\2]\u0111\3\2\2\2_\u0113\3\2\2\2a\u0115\3\2\2\2c\u0117\3\2\2\2e\u0119"+
		"\3\2\2\2g\u011b\3\2\2\2i\u011d\3\2\2\2k\u011f\3\2\2\2m\u0122\3\2\2\2o"+
		"\u012d\3\2\2\2q\u0131\3\2\2\2s\u013f\3\2\2\2u\u014a\3\2\2\2w\u0156\3\2"+
		"\2\2yz\7h\2\2z{\7q\2\2{|\7t\2\2|\4\3\2\2\2}~\7}\2\2~\177\7\"\2\2\177\6"+
		"\3\2\2\2\u0080\u0081\7]\2\2\u0081\b\3\2\2\2\u0082\u0083\7_\2\2\u0083\n"+
		"\3\2\2\2\u0084\u0085\7t\2\2\u0085\u0086\7g\2\2\u0086\u0087\7v\2\2\u0087"+
		"\u0088\7w\2\2\u0088\u0089\7t\2\2\u0089\u008a\7p\2\2\u008a\f\3\2\2\2\u008b"+
		"\u008c\7k\2\2\u008c\u008d\7p\2\2\u008d\u008e\7v\2\2\u008e\16\3\2\2\2\u008f"+
		"\u0090\7k\2\2\u0090\u0091\7p\2\2\u0091\u0092\7v\2\2\u0092\u0093\7\65\2"+
		"\2\u0093\u0094\7\64\2\2\u0094\u0095\7a\2\2\u0095\u0096\7v\2\2\u0096\20"+
		"\3\2\2\2\u0097\u0098\7e\2\2\u0098\u0099\7j\2\2\u0099\u009a\7c\2\2\u009a"+
		"\u009b\7t\2\2\u009b\22\3\2\2\2\u009c\u009d\7x\2\2\u009d\u009e\7q\2\2\u009e"+
		"\u009f\7k\2\2\u009f\u00a0\7f\2\2\u00a0\24\3\2\2\2\u00a1\u00a2\7k\2\2\u00a2"+
		"\u00a3\7h\2\2\u00a3\26\3\2\2\2\u00a4\u00a5\7g\2\2\u00a5\u00a6\7n\2\2\u00a6"+
		"\u00a7\7u\2\2\u00a7\u00a8\7g\2\2\u00a8\30\3\2\2\2\u00a9\u00aa\7y\2\2\u00aa"+
		"\u00ab\7j\2\2\u00ab\u00ac\7k\2\2\u00ac\u00ad\7n\2\2\u00ad\u00ae\7g\2\2"+
		"\u00ae\32\3\2\2\2\u00af\u00b3\7)\2\2\u00b0\u00b4\n\2\2\2\u00b1\u00b2\7"+
		"^\2\2\u00b2\u00b4\t\3\2\2\u00b3\u00b0\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b4"+
		"\u00b5\3\2\2\2\u00b5\u00b6\7)\2\2\u00b6\34\3\2\2\2\u00b7\u00bb\t\4\2\2"+
		"\u00b8\u00ba\t\5\2\2\u00b9\u00b8\3\2\2\2\u00ba\u00bd\3\2\2\2\u00bb\u00b9"+
		"\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc\36\3\2\2\2\u00bd\u00bb\3\2\2\2\u00be"+
		"\u00c0\t\6\2\2\u00bf\u00be\3\2\2\2\u00c0\u00c1\3\2\2\2\u00c1\u00bf\3\2"+
		"\2\2\u00c1\u00c2\3\2\2\2\u00c2 \3\2\2\2\u00c3\u00c4\7>\2\2\u00c4\"\3\2"+
		"\2\2\u00c5\u00c6\7>\2\2\u00c6\u00c7\7?\2\2\u00c7$\3\2\2\2\u00c8\u00c9"+
		"\7@\2\2\u00c9&\3\2\2\2\u00ca\u00cb\7@\2\2\u00cb\u00cc\7?\2\2\u00cc(\3"+
		"\2\2\2\u00cd\u00ce\7?\2\2\u00ce\u00cf\7?\2\2\u00cf*\3\2\2\2\u00d0\u00d1"+
		"\7#\2\2\u00d1\u00d2\7?\2\2\u00d2,\3\2\2\2\u00d3\u00d4\7-\2\2\u00d4\u00d5"+
		"\7-\2\2\u00d5.\3\2\2\2\u00d6\u00d7\7/\2\2\u00d7\u00d8\7/\2\2\u00d8\60"+
		"\3\2\2\2\u00d9\u00da\7>\2\2\u00da\u00db\7>\2\2\u00db\62\3\2\2\2\u00dc"+
		"\u00dd\7@\2\2\u00dd\u00de\7@\2\2\u00de\64\3\2\2\2\u00df\u00e0\7-\2\2\u00e0"+
		"\u00e1\7?\2\2\u00e1\66\3\2\2\2\u00e2\u00e3\7/\2\2\u00e3\u00e4\7?\2\2\u00e4"+
		"8\3\2\2\2\u00e5\u00e6\7,\2\2\u00e6\u00e7\7?\2\2\u00e7:\3\2\2\2\u00e8\u00e9"+
		"\7\61\2\2\u00e9\u00ea\7?\2\2\u00ea<\3\2\2\2\u00eb\u00ec\7\'\2\2\u00ec"+
		"\u00ed\7?\2\2\u00ed>\3\2\2\2\u00ee\u00ef\7~\2\2\u00ef\u00f0\7?\2\2\u00f0"+
		"@\3\2\2\2\u00f1\u00f2\7`\2\2\u00f2\u00f3\7?\2\2\u00f3B\3\2\2\2\u00f4\u00f5"+
		"\7(\2\2\u00f5\u00f6\7?\2\2\u00f6D\3\2\2\2\u00f7\u00f8\7(\2\2\u00f8F\3"+
		"\2\2\2\u00f9\u00fa\7~\2\2\u00faH\3\2\2\2\u00fb\u00fc\7(\2\2\u00fc\u00fd"+
		"\7(\2\2\u00fdJ\3\2\2\2\u00fe\u00ff\7~\2\2\u00ff\u0100\7~\2\2\u0100L\3"+
		"\2\2\2\u0101\u0102\7`\2\2\u0102N\3\2\2\2\u0103\u0104\7\u0080\2\2\u0104"+
		"P\3\2\2\2\u0105\u0106\7)\2\2\u0106R\3\2\2\2\u0107\u0108\7^\2\2\u0108T"+
		"\3\2\2\2\u0109\u010a\7?\2\2\u010aV\3\2\2\2\u010b\u010c\7=\2\2\u010cX\3"+
		"\2\2\2\u010d\u010e\7.\2\2\u010eZ\3\2\2\2\u010f\u0110\7\177\2\2\u0110\\"+
		"\3\2\2\2\u0111\u0112\7}\2\2\u0112^\3\2\2\2\u0113\u0114\7*\2\2\u0114`\3"+
		"\2\2\2\u0115\u0116\7+\2\2\u0116b\3\2\2\2\u0117\u0118\7-\2\2\u0118d\3\2"+
		"\2\2\u0119\u011a\7/\2\2\u011af\3\2\2\2\u011b\u011c\7,\2\2\u011ch\3\2\2"+
		"\2\u011d\u011e\7\61\2\2\u011ej\3\2\2\2\u011f\u0120\7\'\2\2\u0120l\3\2"+
		"\2\2\u0121\u0123\t\7\2\2\u0122\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124"+
		"\u0122\3\2\2\2\u0124\u0125\3\2\2\2\u0125\u0126\3\2\2\2\u0126\u0127\b\67"+
		"\2\2\u0127n\3\2\2\2\u0128\u012a\7\17\2\2\u0129\u012b\7\f\2\2\u012a\u0129"+
		"\3\2\2\2\u012a\u012b\3\2\2\2\u012b\u012e\3\2\2\2\u012c\u012e\7\f\2\2\u012d"+
		"\u0128\3\2\2\2\u012d\u012c\3\2\2\2\u012e\u012f\3\2\2\2\u012f\u0130\b8"+
		"\2\2\u0130p\3\2\2\2\u0131\u0132\7\61\2\2\u0132\u0133\7,\2\2\u0133\u0137"+
		"\3\2\2\2\u0134\u0136\13\2\2\2\u0135\u0134\3\2\2\2\u0136\u0139\3\2\2\2"+
		"\u0137\u0138\3\2\2\2\u0137\u0135\3\2\2\2\u0138\u013a\3\2\2\2\u0139\u0137"+
		"\3\2\2\2\u013a\u013b\7,\2\2\u013b\u013c\7\61\2\2\u013c\u013d\3\2\2\2\u013d"+
		"\u013e\b9\2\2\u013er\3\2\2\2\u013f\u0140\7\61\2\2\u0140\u0141\7\61\2\2"+
		"\u0141\u0145\3\2\2\2\u0142\u0144\n\b\2\2\u0143\u0142\3\2\2\2\u0144\u0147"+
		"\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u0148\3\2\2\2\u0147"+
		"\u0145\3\2\2\2\u0148\u0149\b:\2\2\u0149t\3\2\2\2\u014a\u014c\7%\2\2\u014b"+
		"\u014d\5m\67\2\u014c\u014b\3\2\2\2\u014c\u014d\3\2\2\2\u014d\u0151\3\2"+
		"\2\2\u014e\u0150\n\b\2\2\u014f\u014e\3\2\2\2\u0150\u0153\3\2\2\2\u0151"+
		"\u014f\3\2\2\2\u0151\u0152\3\2\2\2\u0152\u0154\3\2\2\2\u0153\u0151\3\2"+
		"\2\2\u0154\u0155\b;\2\2\u0155v\3\2\2\2\u0156\u0157\13\2\2\2\u0157x\3\2"+
		"\2\2\r\2\u00b3\u00bb\u00c1\u0124\u012a\u012d\u0137\u0145\u014c\u0151\3"+
		"\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}