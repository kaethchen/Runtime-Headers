@protocol NUScalePolicy;

@interface PXEditAssetDiagnosticsOptions : NSObject

@property (retain, nonatomic) id<NUScalePolicy> scalePolicyForRenders;
@property (nonatomic) BOOL includeOriginalRender;

- (id)init;
- (void).cxx_destruct;

@end
