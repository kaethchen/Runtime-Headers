@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addResultRecords:(id)a0;
- (void)clearAllResultsSynchronously;
- (void)clearRecentlyBreachedResultRecords;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (id)recentlyBreachedResultRecords;
- (id)resultRecordsForQueries:(id)a0;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (void)_saveResultsToPersistentStore;

@end
