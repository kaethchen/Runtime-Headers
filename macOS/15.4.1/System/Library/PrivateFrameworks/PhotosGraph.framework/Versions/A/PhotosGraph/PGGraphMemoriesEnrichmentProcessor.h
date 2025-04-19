@class NSSet, NSObject;
@protocol OS_os_log;

@interface PGGraphMemoriesEnrichmentProcessor : NSObject {
    unsigned long long _numberOfMemoriesToEnrich;
    NSSet *_uniqueMemoryIdentifiersToPrioritize;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)categoriesOfMemoriesToPrioritize;
+ (id)enrichableMemoryNodesInGraph:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNumberOfMemoriesToEnrich:(unsigned long long)a0;
- (id)runWithGraphManager:(id)a0 forMemoryCategory:(unsigned long long)a1 progressReporter:(id)a2 error:(id *)a3;
- (id)runWithGraphManager:(id)a0 forMemoryUUIDs:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)runWithGraphManager:(id)a0 incrementalChange:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (id)_memoryNodesSortedForEnrichment:(id)a0 localMemoryByUniqueIdentifier:(id)a1 graph:(id)a2;
- (unsigned long long)_targetNumberOfMemoriesToEnrichWithPhotoLibrary:(id)a0;
- (void)deleteNoLongerExistingMemoryNodes:(id)a0 fromLocalMemoryByUniqueIdentifier:(id)a1 inPhotoLibrary:(id)a2 progressReporter:(id)a3;
- (id)enrichMemoryNodes:(id)a0 localMemoryByUniqueIdentifier:(id)a1 workingContext:(id)a2 graph:(id)a3 progressReporter:(id)a4;
- (id)enrichedMemoryFromMemoryNode:(id)a0 atCreationDate:(id)a1 configuration:(id)a2 curationContext:(id)a3 enrichedMemoryFactory:(id)a4 graph:(id)a5 progressReporter:(id)a6;
- (void)insertOrUpdateLocalMemoriesForEnrichedMemories:(id)a0 localMemoryByUniqueIdentifier:(id)a1 memoryPersister:(id)a2 progressReporter:(id)a3;
- (id)sortedMemoryNodesToEnrichForIncrementalForMemoryNodes:(id)a0 localMemoryByUniqueIdentifier:(id)a1 graph:(id)a2;
- (id)sortedMemoryNodesToEnrichForMemoryNodes:(id)a0 localMemoryByUniqueIdentifier:(id)a1 graph:(id)a2;
- (id)uniqueMemoryIdentifiersToPrioritizeWithGraph:(id)a0;

@end
