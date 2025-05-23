@class NSLocale;

@interface CVNLPDecodingLanguageModel : CVNLPInformationStream {
    int _lmSPIType;
    void *_tokenizer;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) void *languageModel;

+ (id)_decodingLanguageModelForLocale:(id)a0 modelType:(int)a1 decodingWeight:(id)a2 lowerBoundLogProbability:(id)a3 type:(int)a4;
+ (unsigned int)_normalizedLMTokenIDForWord:(id)a0 withTokenID:(unsigned int)a1 sourceLanguageModel:(id)a2 outScore:(double *)a3;
+ (id)decodingCVNLPLanguageModelForLocale:(id)a0 modelType:(int)a1 decodingWeight:(id)a2;
+ (id)decodingLMLanguageModelForLocale:(id)a0 modelType:(int)a1 decodingWeight:(id)a2;
+ (id)pathForLanguageModelForLocale:(id)a0 modelType:(int)a1 resourceType:(int)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithLanguageModel:(void *)a0 locale:(id)a1 decodingWeight:(id)a2 lowerBoundLogProbability:(id)a3 type:(int)a4;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })characterTokenIDsForString:(id)a0;
- (id)initWithCVNLPLanguageModel:(struct CVNLPLanguageModel { } *)a0 locale:(id)a1 decodingWeight:(id)a2;
- (id)initWithCVNLPLanguageModel:(struct CVNLPLanguageModel { } *)a0 locale:(id)a1 decodingWeight:(id)a2 lowerBoundLogProbability:(id)a3;
- (id)initWithLMLanguageModel:(void *)a0 locale:(id)a1 decodingWeight:(id)a2;
- (id)initWithLMLanguageModel:(void *)a0 locale:(id)a1 decodingWeight:(id)a2 lowerBoundLogProbability:(id)a3;
- (id)initWithLanguageModel:(void *)a0;
- (id)initWithLanguageModel:(void *)a0 locale:(id)a1;
- (int)lmSPIType;
- (long long)requiredContextLengthForStringLength:(long long)a0;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })wordTokenIDsForString:(id)a0 outTokenRanges:(id *)a1;

@end
