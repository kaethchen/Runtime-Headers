@class NSDictionary, NSArray, CSUSystemSearchTextEncoderV1Configuration;

@interface CSUSystemSearchTextEncoderV1 : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _tokenEmbeddingNet;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _textEncoderNet;
    struct unique_ptr<csu::SentencePieceVocabulary, std::default_delete<csu::SentencePieceVocabulary>> { struct __compressed_pair<csu::SentencePieceVocabulary *, std::default_delete<csu::SentencePieceVocabulary>> { struct SentencePieceVocabulary *__value_; } __ptr_; } _vocabulary;
}

@property (retain, nonatomic) NSDictionary *additionalLayers;
@property (retain) NSArray *tokenSegments;
@property (readonly, nonatomic) CSUSystemSearchTextEncoderV1Configuration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (void)_unsafeRunOnInput:(id)a0 completion:(id /* block */)a1;
- (void)_unsafeRunOnInputText:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkIfEmbeddingInDstBufferIsContiguous:(const void *)a0;
- (BOOL)checkIfEmbeddingInSrcBufferIsContiguous:(id)a0;
- (struct EspressoTensor { void /* function */ **x0; int x1; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; } x2; struct shared_ptr<ik::TensorStorage> { struct TensorStorage *x0; struct __shared_weak_count *x1; } x3; })getTokenEmbeddingsforChunks:(struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x0; void *x1; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x0; } x2; })a0 error:(id *)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })getTokensOnText:(id)a0 withBOS:(BOOL)a1 withEOS:(BOOL)a2 withError:(id *)a3;
- (void)runOnInput:(id)a0 completion:(id /* block */)a1;
- (void)runOnInputText:(id)a0 completion:(id /* block */)a1;

@end
