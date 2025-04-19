@class NSArray;

@interface _AMiPhotoItemsRowTemplateFactory : _AMRowTemplateFactory

@property (class, readonly, nonatomic) _AMiPhotoItemsRowTemplateFactory *sharedInstance;
@property (class, readonly, nonatomic) NSArray *validKeyPathsForPredicate;

- (id)_filterIPhotoPhotoBatchItems:(id)a0 withILMBPredicate:(id)a1;
- (id)_filterIPhotoPhotoBatchItems:(id)a0 withSpotlightPredicate:(id)a1 error:(id *)a2;
- (id)_iLMBiPhotoPhotoPredicateForPersistentPredicate:(id)a0;
- (id)_prepareBatchFromPhotos:(id)a0;
- (id)_segregateDomainsInPredicate:(id)a0;
- (id)_spotlightIPhotoPhotoPredicateForPersistentPredicate:(id)a0;
- (id)apertureRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)commonParentOfPaths:(id)a0;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)a0 withItemType:(id)a1;
- (id)filterPhotos:(id)a0 matchingPredicate:(id)a1 error:(id *)a2;
- (id)photosInBatch:(id)a0 matchingPredicateDictionary:(id)a1 error:(id *)a2;
- (id)pixelRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)rowTemplatesForIPhotoAlbums;
- (id)rowTemplatesForIPhotoPhotos;
- (id)rowTemplatesForItemType:(id)a0;
- (id)shutterSpeedRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)stringRowTemplatesForAnyItemInCollectionWithName:(id)a0 andKeyPath:(id)a1;

@end
