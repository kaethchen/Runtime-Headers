@class NSArray, NSMutableDictionary, PLManagedObject, NSManagedObjectContext;

@interface PLSearchIndexingLazyFetchHelper : NSObject {
    PLManagedObject *_object;
    long long _libraryIdentifier;
    NSManagedObjectContext *_moc;
    NSArray *_allDetectedFaces;
    NSArray *_allSceneClasifications;
    NSArray *_memoriesBeingCuratedAssets;
    NSArray *_albumsEligibleForSearchIndexing;
    NSArray *_momentSearchEntities;
    NSMutableDictionary *_relationsByPersonUUID;
}

- (void).cxx_destruct;
- (id)allSceneClassifications;
- (id)albumsEligibleForSearchIndexing;
- (id)allDetectedFaces;
- (void)enumerateMomentSearchEntitiesWithBlock:(id /* block */)a0;
- (void)enumerateSearchEntityRelationsForPerson:(id)a0 block:(id /* block */)a1;
- (id)initWithObject:(id)a0 libraryIdentifier:(long long)a1 managedObjectContext:(id)a2;
- (id)memoriesEligibleForSearchIndexing;

@end
