@interface CVNLPTokenIDConverter : NSObject {
    struct shared_ptr<cvnlp::AbstractVocabulary> { struct AbstractVocabulary *__ptr_; struct __shared_weak_count *__cntrl_; } _vocabTokenizer;
}

@property (readonly) unsigned int bosTokenID;
@property (readonly) unsigned int eosTokenID;
@property (readonly) unsigned int unkTokenID;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerateTokenIDsForText:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)enumerateTokensForText:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithLanguageModel:(void *)a0;
- (id)initWithResource:(id)a0 andTokenType:(int)a1;

@end
