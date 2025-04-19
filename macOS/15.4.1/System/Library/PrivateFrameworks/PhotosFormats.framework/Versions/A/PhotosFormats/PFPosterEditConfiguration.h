@class NSString, PFParallaxLayerStyle;

@interface PFPosterEditConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PFParallaxLayerStyle *style;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedLandscapeVisibleFrame;
@property (nonatomic) BOOL isPerspectiveZoomEnabled;
@property (nonatomic) BOOL isDepthEnabled;
@property (nonatomic) BOOL isDepthAvailable;
@property (nonatomic) BOOL isLandscapeDepthEnabled;
@property (nonatomic) BOOL isSettlingEffectEnabled;
@property (nonatomic) BOOL isSettlingEffectAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)analyticsPayload;

@end
