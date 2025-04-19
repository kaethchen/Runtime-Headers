@class PHPhotoLibrary, PHUserFeedbackDataCache;

@interface PHUserFeedbackCalculator : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHUserFeedbackDataCache *dataCache;

+ (id)descriptionForScore:(double)a0;
+ (BOOL)_isUserFeedbackFeatureFlagEnabled;
+ (id)fetchSongIdentifiersWithNegativeFeedbackWithPhotoLibrary:(id)a0;
+ (BOOL)score:(double)a0 meetsScoreThreshold:(double)a1;
+ (id)songIdentifiersWithNegativeFeedbackForMemory:(id)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)personUUIDsWithNegativeFeedback;
- (double)_adjustScore:(double)a0 shouldDowngrade:(BOOL)a1;
- (BOOL)_anyPersonUUIDs:(id)a0 matchesWithImportantPersonType:(unsigned long long)a1;
- (BOOL)_hasNegativeFeedback:(id)a0;
- (double)_scoreForKeyAssetWithPersonUUIDs:(id)a0;
- (double)_scoreForPersonsInAssetsForUUIDs:(id)a0 keyAssetUUID:(id)a1 personsUUIDsByAssetUUIDs:(id)a2;
- (id)_uniqueFeedbackTypesForPersonUUIDs:(id)a0;
- (id)initWithDataCache:(id)a0;
- (id)memoryFeaturesWithNegativeFeedbackForMemoryFeatures:(id)a0;
- (id)personUUIDsWithUserFeedbackFilterBlock:(id /* block */)a0;
- (double)scoreForAssetUUIDs:(id)a0 keyAssetUUID:(id)a1 personsUUIDsByAssetUUIDs:(id)a2 memoryFeatures:(id)a3;
- (double)scoreForAssetUUIDs:(id)a0 personsUUIDsByAssetUUIDs:(id)a1;
- (double)scoreForKeyAssetUUID:(id)a0 personsUUIDsInKeyAsset:(id)a1 memoryFeatures:(id)a2;
- (id)userFeedbackTypeByPersonUUIDForPersonUUIDs:(id)a0;
- (unsigned long long)userFeedbackTypeForPersonUUID:(id)a0;

@end
