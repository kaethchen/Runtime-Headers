@class NSString, NSLocale;

@interface AXKStringTokenizer : NSObject {
    struct __CFStringTokenizer { } *_tokenizer;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currentTokenRange;
@property (copy, nonatomic) NSString *currentToken;
@property (copy, nonatomic) NSString *currentTokenLanguageID;
@property (nonatomic) BOOL shouldTrimWhitespaceAndNewLine;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) BOOL isCurrentTokenValid;
@property (readonly, copy, nonatomic) NSString *inputString;
@property (readonly, nonatomic) long long tokenizerUnit;

+ (id)wordTokenizerWithString:(id)a0 locale:(id)a1;
+ (id)bestLanguageForString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)lineBreakTokenizerWithString:(id)a0 locale:(id)a1;
+ (id)paragraphTokenizerWithString:(id)a0 locale:(id)a1;
+ (id)sentenceTokenizerWithString:(id)a0 locale:(id)a1;
+ (id)tokenizerWithString:(id)a0 unit:(long long)a1 locale:(id)a2;
+ (id)wordBoundaryTokenizerWithString:(id)a0 locale:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __CFStringTokenizer { } *)_tokenizer;
- (BOOL)moveToNextToken;
- (id)initWithString:(id)a0 tokenizerUnit:(long long)a1;
- (id)initWithString:(id)a0 tokenizerUnit:(long long)a1 locale:(id)a2;
- (BOOL)moveToPreviousToken;
- (BOOL)moveToTokenAtIndex:(long long)a0;

@end
