@class MADImageEmbeddingRequest, VCPMADServiceImageAsset, NSString;

@interface VCPMADImageEmbeddingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADImageEmbeddingRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    NSString *_signpostPayload;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end
