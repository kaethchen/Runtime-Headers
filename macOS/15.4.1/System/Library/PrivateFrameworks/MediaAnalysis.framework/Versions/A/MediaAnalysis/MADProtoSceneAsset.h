@class NSString, VCPProtoBounds, NSData, NSMutableArray;

@interface MADProtoSceneAsset : PBCodable <MADProtoAnalysisPhotosConversionProtocol, NSCopying> {
    struct { unsigned char imageEmbeddingVersion : 1; } _has;
}

@property (retain, nonatomic) NSString *assetCloudIdentifier;
@property (nonatomic) double assetAdjustmentTimestamp;
@property (nonatomic) int algorithmVersion;
@property (nonatomic) double adjustmentVersion;
@property (retain, nonatomic) NSMutableArray *sceneClassifications;
@property (nonatomic) float overallAestheticScore;
@property (nonatomic) float wellFramedSubjectScore;
@property (nonatomic) float wellChosenSubjectScore;
@property (nonatomic) float tastefullyBlurredScore;
@property (nonatomic) float sharplyFocusedSubjectScore;
@property (nonatomic) float wellTimedShotScore;
@property (nonatomic) float pleasantLightingScore;
@property (nonatomic) float pleasantReflectionsScore;
@property (nonatomic) float harmoniousColorScore;
@property (nonatomic) float livelyColorScore;
@property (nonatomic) float pleasantSymmetryScore;
@property (nonatomic) float pleasantPatternScore;
@property (nonatomic) float immersivenessScore;
@property (nonatomic) float pleasantPerspectiveScore;
@property (nonatomic) float pleasantPostProcessingScore;
@property (nonatomic) float noiseScore;
@property (nonatomic) float failureScore;
@property (nonatomic) float pleasantCompositionScore;
@property (nonatomic) float interestingSubjectScore;
@property (nonatomic) float intrusiveObjectPresenceScore;
@property (nonatomic) float pleasantCameraTiltScore;
@property (nonatomic) float lowLight;
@property (retain, nonatomic) VCPProtoBounds *preferredCropRect;
@property (retain, nonatomic) VCPProtoBounds *acceptableCropRect;
@property (retain, nonatomic) NSMutableArray *objectSaliencyRects;
@property (retain, nonatomic) NSData *sceneprintData;
@property (nonatomic) float wallpaperScore;
@property (retain, nonatomic) NSData *colorNormalizationData;
@property (nonatomic) float blurrinessScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) int probableRotationDirection;
@property (nonatomic) float probableRotationDirectionConfidence;
@property (readonly, nonatomic) BOOL hasDuplicateMatchingData;
@property (retain, nonatomic) NSData *duplicateMatchingData;
@property (readonly, nonatomic) BOOL hasDuplicateMatchingAlternateData;
@property (retain, nonatomic) NSData *duplicateMatchingAlternateData;
@property (nonatomic) float iconicScore;
@property (nonatomic) BOOL hasImageEmbeddingVersion;
@property (nonatomic) int imageEmbeddingVersion;
@property (retain, nonatomic) NSMutableArray *imageEmbeddingResults;

+ (Class)imageEmbeddingResultsType;
+ (Class)objectSaliencyRectsType;
+ (id)protoFromPhotosAsset:(id)a0;
+ (Class)sceneClassificationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addImageEmbeddingResults:(id)a0;
- (void)addObjectSaliencyRects:(id)a0;
- (void)addSceneClassifications:(id)a0;
- (void)clearImageEmbeddingResults;
- (void)clearObjectSaliencyRects;
- (void)clearSceneClassifications;
- (id)imageEmbeddingResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)imageEmbeddingResultsCount;
- (id)imageEmbeddingVSKAssetWithLocalIdentifier:(id)a0;
- (id)objectSaliencyRectsAtIndex:(unsigned long long)a0;
- (unsigned long long)objectSaliencyRectsCount;
- (void)persistToPhotosAsset:(id)a0;
- (id)sceneClassificationsAtIndex:(unsigned long long)a0;
- (unsigned long long)sceneClassificationsCount;
- (void)setImageEmbeddingResultsFromVSKAsset:(id)a0 imageEmbeddingVersion:(short)a1;

@end
