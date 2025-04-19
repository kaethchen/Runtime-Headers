@class NSData, NSDate;

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet

@property (class, readonly, nonatomic) float defaultAudioScore;

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } bestKeyFrameTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } bestVideoTimeRange;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } animatedStickerTimeRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bestPlaybackRect;
@property (readonly, nonatomic) NSDate *mediaAnalysisTimeStamp;
@property (readonly, nonatomic) unsigned long long mediaAnalysisVersion;
@property (readonly, nonatomic) short mediaAnalysisImageVersion;
@property (readonly, nonatomic) short imageCaptionVersion;
@property (readonly, nonatomic) short videoCaptionVersion;
@property (readonly, nonatomic) short imageEmbeddingVersion;
@property (readonly, nonatomic) short videoEmbeddingVersion;
@property (readonly, nonatomic) float blurrinessScore;
@property (readonly, nonatomic) float exposureScore;
@property (readonly, nonatomic) float wallpaperScore;
@property (readonly, nonatomic) float autoplaySuggestionScore;
@property (readonly, nonatomic) float videoStickerSuggestionScore;
@property (readonly, nonatomic) float videoScore;
@property (readonly, nonatomic) float activityScore;
@property (readonly, nonatomic) float audioScore;
@property (readonly, nonatomic) float settlingEffectScore;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) short audioClassification;
@property (readonly, nonatomic) short probableRotationDirection;
@property (readonly, nonatomic) float probableRotationDirectionConfidence;
@property (readonly, nonatomic) NSData *colorNormalizationData;
@property (readonly, nonatomic) short screenTimeDeviceImageSensitivity;
@property (readonly, nonatomic) unsigned short syndicationProcessingValue;
@property (readonly, nonatomic) unsigned long long syndicationProcessingVersion;
@property (readonly, nonatomic) short privateEncryptedComputeAnalysisVersion;
@property (readonly, nonatomic) NSDate *privateEncryptedComputeAnalysisTimestamp;
@property (readonly, nonatomic) short privateEncryptedComputeLocationAnalysisVersion;
@property (readonly, nonatomic) short localAnalysisMajorVersion;
@property (readonly, nonatomic) short assetAnalysisStage;
@property (readonly, nonatomic) short localAnalysisStage;
@property (readonly, nonatomic) short cloudAnalysisMajorVersion;
@property (readonly, nonatomic) short cloudAnalysisStage;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)additionalPropertiesToFetchOnPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
