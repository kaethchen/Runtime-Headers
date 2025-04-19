@interface VCPTextTokenizerT5 : VCPTextTokenizer {
    struct unique_ptr<sentencepiece::SentencePieceProcessor, std::default_delete<sentencepiece::SentencePieceProcessor>> { struct __compressed_pair<sentencepiece::SentencePieceProcessor *, std::default_delete<sentencepiece::SentencePieceProcessor>> { struct SentencePieceProcessor *__value_; } __ptr_; } _processor;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)encode:(id)a0;

@end
