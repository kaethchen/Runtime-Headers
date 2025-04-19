@class PHResourceChooserList, NSString, PHResourceChooserListResourceInfo, PHImageRequestBehaviorSpec;
@protocol PHResourceChooserAsset;

@interface PHImageResourceChooser : NSObject {
    id<PHResourceChooserAsset> _asset;
    PHResourceChooserList *_list;
    double _requiredScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _normalizedCropRect;
    PHResourceChooserListResourceInfo *_fallbackInfo;
    BOOL _didCheckForLocalVideoKeyFrame;
    BOOL _hasLocalVideoKeyFrameInNonHintResources;
    BOOL _needsReset;
}

@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedCropRect;
@property (nonatomic) double fallbackRequestedScaleIfPreferredResourceNotLocallyAvailable;
@property (nonatomic) BOOL allowHints;
@property (nonatomic) BOOL allowChoosingNonLocalVideoKeyFrameResource;
@property (nonatomic) BOOL isCloudSharedMode;
@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec;
@property (copy, nonatomic) id /* block */ resourceHandler;
@property (weak, nonatomic) id context;
@property (retain, nonatomic) NSString *loggingPrefix;

+ (void)initialize;
+ (id)_bagFromInfo:(id)a0 asset:(id)a1 behaviorSpec:(id)a2 requiredScale:(double)a3 bagVendor:(id)a4 assetIDContainerVendor:(id)a5;
+ (unsigned long long)_chooserSourceOptionsFromBehaviorSpec:(id)a0 allowHints:(BOOL)a1;
+ (id)_resourceVersionsFromImageRequestVersion:(long long)a0 assetHasAdjustments:(BOOL)a1;

- (void).cxx_destruct;
- (void)reset;
- (void)_reset;
- (id)_requestInfo;
- (Class)_policyHandlerClassForCurrentPolicy;
- (BOOL)_resourceInfoPassesTestForImageDerivativeOfVideo:(id)a0;
- (void)_updateCachedGeometry;
- (id)initWithAsset:(id)a0 resourceHandler:(id /* block */)a1;
- (id)initWithChooserList:(id)a0 asset:(id)a1 resourceHandler:(id /* block */)a2;
- (void)moveFirst;
- (void)presentNextQualifyingResource;

@end
