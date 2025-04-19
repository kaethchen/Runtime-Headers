@class CSUSceneNetV5CustomClassifierConfiguration;

@interface CSUSceneNetV5CustomClassifier : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__value_; } __ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct __compressed_pair<ik::PixelBufferTransfer *, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__value_; } __ptr_; } _transferSession;
}

@property (readonly, nonatomic) CSUSceneNetV5CustomClassifierConfiguration *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)enumerateClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)loadResourcesAndReturnError:(id *)a0;
- (void)runOnInputScenePrint:(id)a0 completion:(id /* block */)a1;
- (id)allClassificationLikelihoods:(id)a0;
- (id)allClassificationLikelihoods:(id)a0 error:(id *)a1;
- (BOOL)enumerateClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateLabelsFromClassificationLikelihoods:(id)a0 usingBlock:(id /* block */)a1;
- (id)labelsFromClassificationLikelihoods:(id)a0;
- (void)unsafeRunOnInputScenePrint:(id)a0 completion:(id /* block */)a1;

@end
