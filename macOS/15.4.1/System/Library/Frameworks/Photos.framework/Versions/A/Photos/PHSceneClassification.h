@interface PHSceneClassification : NSObject

@property (nonatomic) long long packedBoundingBoxRect;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long classificationType;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) unsigned long long extendedSceneIdentifier;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

+ (id)_fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0 includeTemporalClassifications:(BOOL)a1 sceneClassificationTypePredicate:(id)a2;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0 includeTemporalClassifications:(BOOL)a1;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0 sceneClassificationType:(long long)a1;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)a0 sceneClassificationType:(long long)a1 includeTemporalClassifications:(BOOL)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)setSceneIdentifier:(unsigned int)a0;
- (BOOL)_validateStartTime:(double)a0 duration:(double)a1 classificationType:(long long)a2;
- (id)initWithExtendedSceneIdentifier:(unsigned long long)a0 confidence:(double)a1 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startTime:(double)a3 duration:(double)a4 classificationType:(long long)a5;
- (id)initWithExtendedSceneIdentifier:(unsigned long long)a0 confidence:(double)a1 classificationType:(long long)a2;
- (BOOL)isEqualToSceneClassification:(id)a0;

@end
