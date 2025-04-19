@class NSArray, NSString, PHFetchOptions, PHPhotoLibrary;

@interface PHRecentContentSyndicationCollectionsResult : PHFetchResult {
    PHFetchOptions *_fetchOptions;
    PHPhotoLibrary *_photoLibrary;
    long long _maxNumberOfStacks;
    long long _maxNumberOfAssetsPerStack;
}

@property (readonly) NSArray *objects;
@property (readonly) NSString *identifier;

+ (id)pointerComparableIdentifiersFromIdentifiers:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)fetchRequest;
- (id)fetchedObjects;
- (id)photoLibrary;
- (BOOL)_hasReachedGroupCapacity;
- (id)_transientCollectionForAssetOID:(id)a0;
- (id)_transientCollectionForIdentifier:(id)a0;
- (id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)a0 currentIdentifiers:(id)a1 inFetchResultBeforeChanges:(id)a2;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (long long)collectionFetchType;
- (id)copyWithOptions:(id)a0;
- (id)fetchSortDescriptors;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchOptions:(id)a2 maxNumberOfStacks:(long long)a3 maxNumberOfAssetsPerStack:(long long)a4 fetchType:(id)a5 fetchPropertySets:(id)a6 identifier:(id)a7 registerIfNeeded:(BOOL)a8;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
