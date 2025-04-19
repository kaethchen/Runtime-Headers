@class NSString, VCPMADServiceImageAsset, MADImagePersonalizationGatingRequest;

@interface MADImagePersonalizationGatingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADImagePersonalizationGatingRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    BOOL _canceled;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 signpostPayload:(id)a2;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 faces:(id)a2;
- (float)resourceRequirement;

@end
