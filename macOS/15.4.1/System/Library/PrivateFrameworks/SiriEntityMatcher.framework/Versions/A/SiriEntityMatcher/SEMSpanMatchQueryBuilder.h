@class NSString, NSMutableString, SIRINLUEXTERNALAsrHypothesis, NSLocale;

@interface SEMSpanMatchQueryBuilder : NSObject {
    NSLocale *_locale;
    NSString *_originalText;
    NSMutableString *_originalTextMutable;
    struct TokenStream { struct Token *__begin_; struct Token *__end_; struct __compressed_pair<skit::Token *, std::allocator<skit::Token>> { struct Token *__value_; } __end_cap_; } _tokens;
    struct TokenStream { struct Token *__begin_; struct Token *__end_; struct __compressed_pair<skit::Token *, std::allocator<skit::Token>> { struct Token *__value_; } __end_cap_; } _normalized_tokens;
    SIRINLUEXTERNALAsrHypothesis *_asrHypothesis;
}

+ (id)getASRPhoneSequence:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0;
- (id)build;
- (void)addTokenWithValue:(id)a0 cleanValue:(id)a1 normalizedValues:(id)a2 beginIndex:(unsigned int)a3 endIndex:(unsigned int)a4 isSignificant:(BOOL)a5 isWhitespace:(BOOL)a6;
- (id)initWithLocale:(id)a0 originalText:(id)a1;
- (id)initWithLocale:(id)a0 originalText:(id)a1 asrHypothesis:(id)a2;
- (id)_initWithLocale:(id)a0 originalText:(id)a1 asrHypothesis:(id)a2;

@end
