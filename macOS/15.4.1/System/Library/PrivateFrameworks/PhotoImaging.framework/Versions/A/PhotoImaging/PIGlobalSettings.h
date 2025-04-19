@class NSString;

@interface PIGlobalSettings : NSObject

@property (nonatomic) BOOL falseColorHDR;
@property (nonatomic) BOOL forceGlassesMatteOff;
@property (nonatomic) BOOL forceSpillMatteOff;
@property (nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures;
@property (nonatomic) BOOL portraitDisableFuzzball;
@property (nonatomic) BOOL portraitForceLightMapLinear;
@property (nonatomic) BOOL segmentationDebugRoundTripProxyImage;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) BOOL forceEnableSegmentation;
@property (nonatomic) BOOL disableHeadroom;
@property (nonatomic) long long segmentationInfillAlgorithm;
@property (nonatomic) double segmentationInfillDilationPercent;
@property (nonatomic) BOOL segmentationDebugTintLayers;
@property (nonatomic) BOOL segmentationDisableCaching;
@property (nonatomic) BOOL segmentationDebugPreviewDisableClock;
@property (nonatomic) BOOL segmentationDebugPreviewHighQuality;
@property (nonatomic) double segmentationManualGatingLenience;
@property (copy, nonatomic) NSString *styleRecipeConfigDirectoryPath;
@property (nonatomic) long long parallaxStyleKeyLevelOverride;
@property (nonatomic) BOOL parallaxStyleAvoidColorWashBrownOverride;
@property (nonatomic) BOOL useStyleRecipeConfigDirectory;
@property (nonatomic) BOOL parallaxStyleEnableGreenScreen;
@property (copy, nonatomic) NSString *parallaxLayoutConfigurationOverride;
@property (nonatomic) BOOL parallaxWallpaperDisableUpgrade;
@property (nonatomic) BOOL cinematicAllowYUVSourceInput;
@property (nonatomic) BOOL cinematicAllowRGB10Packed;
@property (nonatomic) BOOL rawApplyBoostFirst;
@property (nonatomic) BOOL disableMADForSettlingEffect;
@property (nonatomic) BOOL posterDisableCropVariant;
@property (nonatomic) BOOL forceEnableSettlingEffect;
@property (nonatomic) float settlingEffectMinimumMotionScore;
@property (nonatomic) BOOL debugUseStyleEngine;
@property (nonatomic) BOOL semanticStyleDisableStyleEngine;
@property (nonatomic) double inpaintGainMapMixFactor;
@property (nonatomic) BOOL inpaintOrientInputImages;
@property (copy, nonatomic) NSString *inpaintDumpPath;
@property (nonatomic) BOOL inpaintOverlaysMasks;
@property (nonatomic) BOOL inpaintOverlaysMaskBounds;
@property (nonatomic) BOOL inpaintDumpsOriginalMasks;
@property (nonatomic) BOOL inpaintDumpsProcessedMasks;
@property (nonatomic) double inpaintPixellationIntersectionAreaToMaskAreaThreshold;
@property (nonatomic) double inpaintPixellationIntersectionAreaToFaceAreaThreshold;
@property (nonatomic) BOOL objectRemovalRegionOverride;
@property (nonatomic) double inpaintMaxAreaPercentage;
@property (nonatomic) BOOL inpaintFillsMaskHoles;
@property (nonatomic) BOOL sensitivityCheckDumpsImages;

+ (id)globalSettings;
+ (id)IPXEditSettings;
+ (id)PUEditSettings;
+ (id)editSettings;

@end
