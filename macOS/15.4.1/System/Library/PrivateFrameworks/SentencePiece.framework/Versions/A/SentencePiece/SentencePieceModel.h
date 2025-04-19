@interface SentencePieceModel : NSObject {
    struct shared_ptr<sentencepiece::SentencePieceProcessor> { struct SentencePieceProcessor *__ptr_; struct __shared_weak_count *__cntrl_; } _processor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelPath:(id)a0;
- (id)encodeAsIDsFrom:(id)a0;
- (id)decodeFromIDs:(id)a0;
- (id)decodeFromTokens:(id)a0;
- (id)encodeAsTokensFrom:(id)a0;

@end
