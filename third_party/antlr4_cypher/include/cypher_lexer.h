
// Generated from Cypher.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CypherLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    ACYCLIC = 45, ANY = 46, ADD = 47, ALL = 48, ALTER = 49, ANALYZE = 50, 
    AND = 51, AS = 52, ASC = 53, ASCENDING = 54, ATTACH = 55, BEGIN = 56, 
    BY = 57, CALL = 58, CASE = 59, CAST = 60, CHECKPOINT = 61, COLUMN = 62, 
    COMMENT = 63, COMMIT = 64, COMMIT_SKIP_CHECKPOINT = 65, CONTAINS = 66, 
    COPY = 67, COUNT = 68, CREATE = 69, CYCLE = 70, DATABASE = 71, DBTYPE = 72, 
    DEFAULT = 73, DELETE = 74, DESC = 75, DESCENDING = 76, DETACH = 77, 
    DISTINCT = 78, DROP = 79, ELSE = 80, END = 81, ENDS = 82, EXISTS = 83, 
    EXPLAIN = 84, EXPORT = 85, EXTENSION = 86, FALSE = 87, FROM = 88, FORCE = 89, 
    FOR = 90, GLOB = 91, GRAPH = 92, GROUP = 93, HASH = 94, HEADERS = 95, 
    HINT = 96, IMPORT = 97, INDEX = 98, IF = 99, IN = 100, INCREMENT = 101, 
    INSTALL = 102, IS = 103, JOIN = 104, KEY = 105, LIMIT = 106, LOAD = 107, 
    LOGICAL = 108, MACRO = 109, MATCH = 110, MAXVALUE = 111, MERGE = 112, 
    MINVALUE = 113, MULTI_JOIN = 114, NO = 115, NODE = 116, NOT = 117, NONE = 118, 
    NULL_ = 119, ON = 120, ONLY = 121, OPTIONS = 122, OPTIONAL = 123, OR = 124, 
    ORDER = 125, PRIMARY = 126, PROFILE = 127, PROJECT = 128, RANGE = 129, 
    READ = 130, REL = 131, RENAME = 132, RETURN = 133, ROLLBACK = 134, ROLLBACK_SKIP_CHECKPOINT = 135, 
    SEQUENCE = 136, SET = 137, SORTED = 138, SHORTEST = 139, START = 140, 
    STARTS = 141, STRUCT = 142, TABLE = 143, THEN = 144, TO = 145, TRAIL = 146, 
    TRANSACTION = 147, TRUE = 148, TYPE = 149, UNION = 150, UNWIND = 151, 
    UNINSTALL = 152, UPDATE = 153, USE = 154, WHEN = 155, WHERE = 156, WITH = 157, 
    WRITE = 158, WSHORTEST = 159, XOR = 160, SINGLE = 161, YIELD = 162, 
    USER = 163, PARTITION = 164, PARTITIONS = 165, PASSWORD = 166, ROLE = 167, 
    MAP = 168, DECIMAL = 169, STAR = 170, L_SKIP = 171, INVALID_NOT_EQUAL = 172, 
    COLON = 173, DOTDOT = 174, MINUS = 175, FACTORIAL = 176, StringLiteral = 177, 
    EscapedChar = 178, DecimalInteger = 179, HexLetter = 180, HexDigit = 181, 
    Digit = 182, NonZeroDigit = 183, NonZeroOctDigit = 184, ZeroDigit = 185, 
    ExponentDecimalReal = 186, RegularDecimalReal = 187, UnescapedSymbolicName = 188, 
    IdentifierStart = 189, IdentifierPart = 190, EscapedSymbolicName = 191, 
    SP = 192, WHITESPACE = 193, CypherComment = 194, Unknown = 195
  };

  explicit CypherLexer(antlr4::CharStream *input);

  ~CypherLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

