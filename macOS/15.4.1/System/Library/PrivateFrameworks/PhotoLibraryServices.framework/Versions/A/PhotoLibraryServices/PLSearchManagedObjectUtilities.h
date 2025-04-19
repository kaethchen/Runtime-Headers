@interface PLSearchManagedObjectUtilities : NSObject

+ (id)bundleIdentifierForManagedObject:(id)a0 wellKnownLibraryIdentifier:(long long)a1;
+ (id)psiObjectForIdentifierRequiringAdditonalWork:(id)a0 entity:(unsigned long long)a1;
+ (id)psiObjectForObject:(id)a0 fetchHelper:(id)a1 partialUpdateMask:(long long)a2 indexingContext:(id)a3;
+ (id)searchableItemForObject:(id)a0 fetchHelper:(id)a1 partialUpdateMask:(long long)a2 libraryIdentifier:(long long)a3 indexingContext:(id)a4 embeddingsFetcher:(id)a5;

@end
