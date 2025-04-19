@class CSUSceneNetV5Configuration;

@interface CSUSceneNetV5 : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__value_; } __ptr_; } _transferSession;
    struct unique_ptr<ImageDescriptorProcessorHyperplaneLSH, std::default_delete<ImageDescriptorProcessorHyperplaneLSH>> { struct __compressed_pair<ImageDescriptorProcessorHyperplaneLSH *, std::default_delete<ImageDescriptorProcessorHyperplaneLSH>> { struct ImageDescriptorProcessorHyperplaneLSH *__value_; } __ptr_; } _fingerprinter;
}

@property (readonly, nonatomic) CSUSceneNetV5Configuration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (id)hashesFromFingerprintEmbedding:(id)a0;
- (id)allAestheticsAttributeScores:(id)a0;
- (id)allAestheticsGlobalScores:(id)a0;
- (id)detectionResultFromScoreHeatMap:(id)a0 coordinateOffsetMap:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)enumerateEntityNetClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateHierarchicalSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateLeafSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)loadResources:(id *)a0;
- (struct __CVBuffer { } *)pixelBufferForSaliencyMap:(id)a0 error:(id *)a1;
- (void)runOnInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (BOOL)enumerateHierarchicalSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (void)_unsafeRunOnInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (id)allAestheticsAttributeScores:(id)a0 error:(id *)a1;
- (id)allAestheticsGlobalScores:(id)a0 error:(id *)a1;
- (id)allEntityNetClassificationLikelihoods:(id)a0;
- (id)allEntityNetClassificationLikelihoods:(id)a0 error:(id *)a1;
- (id)allSceneClassificationLikelihoods:(id)a0;
- (id)allSceneClassificationLikelihoods:(id)a0 error:(id *)a1;
- (id)base64HashesFromFingerprintEmbedding:(id)a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })computeAllSceneClassificationLikelihoods:(id)a0;
- (id)detectionResultFromScoreHeatMap:(id)a0 coordinateOffsetMap:(id)a1;
- (BOOL)enumerateAestheticsAttributeScores:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAestheticsAttributeScores:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateAestheticsGlobalScores:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAestheticsGlobalScores:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateEntityNetClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateLeafSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateSceneClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
