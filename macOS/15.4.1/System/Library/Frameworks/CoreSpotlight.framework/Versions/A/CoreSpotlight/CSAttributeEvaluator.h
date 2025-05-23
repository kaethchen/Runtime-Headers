@class NSArray, NSString;

@interface CSAttributeEvaluator : NSObject

@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL fuzzyMatching;
@property (nonatomic) unsigned long long matcherCount;
@property (nonatomic) const void **matchers;
@property (nonatomic) unsigned long long queryTermCount;
@property (nonatomic) unsigned long long matchersPerTerm;
@property (nonatomic) void *tokenizer;
@property (retain, nonatomic) NSArray *tokenizedQueryTerms;
@property (readonly, nonatomic) NSArray *queryTerms;
@property (readonly, nonatomic) NSString *queryString;
@property (nonatomic) long long queryID;
@property (nonatomic) BOOL matchOncePerTerm;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL isCJK;
@property (nonatomic) long long countQPUSpecialToken;
@property (retain, nonatomic) NSArray *itemQPQUOutputTokenInfo;

+ (void)enumerateTokensForString:(id)a0 locale:(id)a1 options:(unsigned long long)a2 withHandler:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)evaluateAttribute:(id)a0 ignoreSubtokens:(BOOL)a1 skipTranscriptions:(BOOL)a2 withFuzzyHandler:(id /* block */)a3;
- (unsigned long long)evaluateAttribute:(id)a0 ignoreSubtokens:(BOOL)a1 skipTranscriptions:(BOOL)a2 withHandler:(id /* block */)a3;
- (unsigned long long)evaluateAttribute:(id)a0 ignoreSubtokens:(BOOL)a1 strongCompounds:(BOOL)a2 skipTranscriptions:(BOOL)a3 withFuzzyHandler:(id /* block */)a4;
- (unsigned long long)evaluateAttribute:(id)a0 ignoreSubtokens:(BOOL)a1 strongCompounds:(BOOL)a2 skipTranscriptions:(BOOL)a3 withHandler:(id /* block */)a4;
- (unsigned long long)evaluateAttribute:(id)a0 ignoreSubtokens:(BOOL)a1 strongCompounds:(BOOL)a2 withHandler:(id /* block */)a3;
- (unsigned long long)evaluateAttribute:(id)a0 ignoreSubtokens:(BOOL)a1 withHandler:(id /* block */)a2;
- (id)initWithQuery:(id)a0 language:(id)a1 fuzzyThreshold:(unsigned char)a2 options:(unsigned long long)a3;
- (id)initWithQuery:(id)a0 language:(id)a1 isCJK:(BOOL)a2 fuzzyThreshold:(unsigned char)a3 options:(unsigned long long)a4;
- (BOOL)processPropertyToken:(const unsigned short *)a0 length:(long long)a1 tokenType:(int)a2 range:(struct { long long x0; long long x1; })a3 index:(long long)a4 evaluationHandler:(id /* block */)a5;
- (void)processTranscriptionTokens:(struct CSAttributeEvaluatorContext { id x0; id /* block */ x1; char *x2; struct *x3; struct *x4; int *x5; long long x6; long long x7; long long x8; long long x9; long long x10; unsigned long long x11; BOOL x12; } *)a0;

@end
