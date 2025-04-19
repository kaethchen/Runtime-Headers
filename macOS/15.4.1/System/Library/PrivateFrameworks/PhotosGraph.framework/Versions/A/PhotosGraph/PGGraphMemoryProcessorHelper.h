@interface PGGraphMemoryProcessorHelper : NSObject

+ (id)_fetchLocalMemoriesWithFetchOptions:(id)a0;
+ (id)_localMemoryByUniqueIdentifierInPhotoLibrary:(id)a0 withAdditionalPredicate:(id)a1;
+ (id)localMemoryByUniqueIdentifierForMemoryUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)localMemoryByUniqueIdentifierInPhotoLibrary:(id)a0;
+ (id)localMemoryByUniqueIdentifierWithGraphMemoryIdentifiers:(id)a0 inPhotoLibrary:(id)a1;
+ (void)resetLocalMemoryLastEnrichmentDateOfMemoriesWithLocalMemories:(id)a0 inPhotoLibrary:(id)a1;
+ (void)resetLocalMemoryLastEnrichmentDateOfMemoriesWithUniqueIdentifiers:(id)a0 localMemoryByUniqueIdentifierCache:(id)a1 inPhotoLibrary:(id)a2;

@end
