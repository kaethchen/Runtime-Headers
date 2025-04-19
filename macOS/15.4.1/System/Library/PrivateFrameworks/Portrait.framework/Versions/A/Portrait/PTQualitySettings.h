@class NSString;

@interface PTQualitySettings : NSObject {
    NSString *_description;
}

@property int quality;
@property int numberOfPatternCircles;
@property BOOL rayMarch;
@property (readonly) BOOL doDisparityUpsampling;
@property float disparityUpsampleFactor;
@property float disparityGuidedFilterEpsilon;
@property BOOL doCenterDisparity;
@property BOOL doFocusEdgeMask;
@property BOOL doFirstLevelGaussianDownsample;
@property BOOL doMacroApertureLimit;
@property float circleOfConfusionLimitForeground;
@property float circleOfConfusionLimitBackground;
@property BOOL portraitPreviewDeadzone;
@property float renderDownscale;
@property BOOL doIntermediate2XUpscale;
@property unsigned long long intermediatePixelFormat;
@property BOOL useExportQualityNoise;

+ (id)createWithQuality:(int)a0 options:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)updateDescription;

@end
