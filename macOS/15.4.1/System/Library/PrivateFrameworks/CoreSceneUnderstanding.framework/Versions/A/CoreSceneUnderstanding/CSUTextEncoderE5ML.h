@class NSArray, NSDictionary, CSUTextEncoderE5MLConfiguration, CSUCoreMLInference, NSString;

@interface CSUTextEncoderE5ML : NSObject {
    CSUCoreMLInference *_tokenEmbedder;
    CSUCoreMLInference *_textEncoder;
    struct unique_ptr<csu::SentencePieceVocabulary, std::default_delete<csu::SentencePieceVocabulary>> { struct __compressed_pair<csu::SentencePieceVocabulary *, std::default_delete<csu::SentencePieceVocabulary>> { struct SentencePieceVocabulary *__value_; } __ptr_; } _vocabulary;
    NSString *_assetVersionNumber;
}

@property (retain, nonatomic) NSDictionary *additionalLayers;
@property (retain) NSArray *tokenSegments;
@property (readonly, nonatomic) CSUTextEncoderE5MLConfiguration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (void)_unsafeRunOnInput:(id)a0 completion:(id /* block */)a1;
- (void)_unsafeRunOnInputText:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkIfEmbeddingInDstBufferIsContiguous:(const void *)a0;
- (BOOL)checkIfEmbeddingInSrcBufferIsContiguous:(id)a0;
- (id)getTokenEmbeddingsforChunks:(struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x0; void *x1; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x0; } x2; })a0 error:(id *)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })getTokensOnText:(id)a0 withBOS:(BOOL)a1 withEOS:(BOOL)a2 withError:(id *)a3;
- (BOOL)loadModelCatalogResourcesWithAssetLock:(id)a0 Error:(id *)a1;
- (BOOL)loadResourcesInternal:(id *)a0;
- (BOOL)reLoadResources:(id *)a0;
- (void)runOnInput:(id)a0 completion:(id /* block */)a1;
- (void)runOnInputText:(id)a0 completion:(id /* block */)a1;

@end
