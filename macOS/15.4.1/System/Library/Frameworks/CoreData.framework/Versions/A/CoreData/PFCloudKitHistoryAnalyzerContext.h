@class NSSet, NSMutableDictionary, NSMutableSet, NSSQLCore, NSManagedObjectContext;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
    NSManagedObjectContext *_managedObjectContext;
    NSSet *_configuredEntityNames;
    NSMutableSet *_resetChangedObjectIDs;
    NSMutableDictionary *_entityIDToChangedPrimaryKeySet;
    NSSQLCore *_store;
}

- (void)dealloc;
- (BOOL)reset:(id *)a0;
- (id)fetchSortedStates:(id *)a0;
- (BOOL)finishProcessing:(id *)a0;
- (id)initWithOptions:(id)a0 managedObjectContext:(id)a1 store:(id)a2;
- (id)newAnalyzerStateForChange:(id)a0 error:(id *)a1;
- (BOOL)processChange:(id)a0 error:(id *)a1;
- (BOOL)resetStateForObjectID:(id)a0 error:(id *)a1;

@end
