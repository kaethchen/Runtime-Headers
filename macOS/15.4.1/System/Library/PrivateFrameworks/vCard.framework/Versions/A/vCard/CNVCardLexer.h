@class NSMutableData, NSArray;

@interface CNVCardLexer : NSObject {
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned long long _peekedPoint;
    unsigned long long _cursor;
    BOOL _unicode;
    long long _errorCount;
    NSArray *_activeTokenSets;
}

+ (id)returnDelimiterData;
+ (id)singleByteTokens;
+ (id)utf16Tokens;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned long long)cursor;
- (long long)errorCount;
- (id)os_log;
- (id)nextBase64Line:(BOOL *)a0;
- (int)peekAtNextToken;
- (long long)advanceToString;
- (id)clipAtGraphemeClusters:(id)a0 maximumValueLength:(unsigned long long)a1 addEllipsisIfClipped:(BOOL)a2;
- (BOOL)_applyNextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 maximumValueLength:(unsigned long long)a4 intoString:(id)a5;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (void)advanceToPeekPoint;
- (long long)advanceToSingleByteString;
- (BOOL)advanceToToken:(int)a0 throughTypes:(long long)a1;
- (long long)advanceToUnicodeString;
- (BOOL)advancedPastToken:(int)a0;
- (void)appendDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toData:(id)a1;
- (void)appendNextEscapedCharacterToData:(id)a0;
- (void)appendNextQuotedPrintableDataToData:(id)a0;
- (BOOL)atEOF;
- (unsigned short)charAtPosition:(unsigned long long)a0 withOffset:(long long)a1;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })emptyRangeStartingAtCursor;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })expandRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 untilNextByteIs:(id)a1;
- (id)nextArraySeperatedByToken:(int)a0 stoppingAt:(int)a1 inEncoding:(unsigned long long)a2 maximumValueLength:(unsigned long long)a3;
- (id)nextBase64Data;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (id)nextQuotedStringValueInEncoding:(unsigned long long)a0;
- (id)nextSingleByteBase64Line:(BOOL *)a0;
- (id)nextSingleByteStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 maximumValueLength:(unsigned long long)a4;
- (id)nextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 maximumValueLength:(unsigned long long)a4;
- (int)nextTokenPeek:(BOOL)a0;
- (int)nextTokenPeek:(BOOL)a0 length:(long long)a1;
- (int)nextTokenPeekSingle:(BOOL)a0 length:(long long)a1;
- (int)nextTokenPeekUnicode:(BOOL)a0 length:(long long)a1;
- (id)nextUnicodeBase64Line:(BOOL *)a0;
- (id)nextUnicodeStringStopTokens:(int)a0 quotedPrintable:(BOOL)a1 trim:(BOOL)a2 maximumValueLength:(unsigned long long)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithLength:(unsigned long long)a0 lTrim:(unsigned long long)a1 rTrim:(unsigned long long)a2;
- (int)readNextToken;
- (void)skipToStopTokens:(int)a0;
- (id)stringByRoundingData:(id)a0 toNextWholeCharacterUsingEncoding:(unsigned long long)a1 prefixLength:(unsigned long long)a2 suffixLength:(unsigned long long)a3 maximumValueLength:(unsigned long long)a4;
- (id)stringFromData:(id)a0 encoding:(unsigned long long)a1 prefixLength:(unsigned long long)a2 suffixLength:(unsigned long long)a3;
- (id)stringFromSubData:(id)a0 encoding:(unsigned long long)a1;
- (id)stringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 encoding:(unsigned long long)a1;
- (int)tokenAtCursor;
- (int)tokenAtCursorIgnoringLineFolding;
- (id)tokenSetForLength:(long long)a0;
- (id)trimData:(id)a0 withPrefixLength:(unsigned long long)a1 suffixLength:(unsigned long long)a2;
- (void)unicodeSkipToStopTokens:(int)a0;
- (id)unicodeStringByRoundingData:(id)a0 toNextWholeCharacterUsingEncoding:(unsigned long long)a1 prefixLength:(unsigned long long)a2 suffixLength:(unsigned long long)a3 maximumValueLength:(unsigned long long)a4;

@end
