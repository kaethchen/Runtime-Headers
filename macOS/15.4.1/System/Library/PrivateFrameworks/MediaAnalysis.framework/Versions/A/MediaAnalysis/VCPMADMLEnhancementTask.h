@class NSString, MADMLEnhancementRequest, CNNMLEnhancerEspresso, VCPMADServiceImageAsset;

@interface VCPMADMLEnhancementTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADMLEnhancementRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    CNNMLEnhancerEspresso *_enhancer;
    NSString *_modelName;
    NSString *_modelVersion;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    NSString *_signpostPayload;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _outputPixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (int)createModel;
- (BOOL)autoCancellable;
- (int)convertPixelFormat:(struct __CVBuffer **)a0;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end
