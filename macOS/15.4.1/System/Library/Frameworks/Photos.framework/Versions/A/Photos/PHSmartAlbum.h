@interface PHSmartAlbum : PHAssetCollection

+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)managedEntityName;

- (BOOL)collectionHasFixedOrder;

@end
