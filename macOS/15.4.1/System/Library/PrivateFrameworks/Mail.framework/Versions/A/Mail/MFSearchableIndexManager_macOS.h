@class EDSearchableIndexScheduler, EDSearchableIndexPersistence, EDSearchableIndex;

@interface MFSearchableIndexManager_macOS : EDSearchableIndexManager {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _indexLock;
}

@property (retain, nonatomic) EDSearchableIndex *index;
@property (retain, nonatomic) EDSearchableIndexPersistence *persistence;
@property (retain, nonatomic) EDSearchableIndexScheduler *scheduler;

+ (void)addSearchQueryCancelable:(id)a0;
+ (void)removeSearchQueryCancelable:(id)a0;
+ (id)searchableIndexBundleID;
+ (id)searchableIndexName;
+ (BOOL)shouldCancelSearchQuery;

- (void).cxx_destruct;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0 budgetConfiguration:(id)a1;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1 richLinkPersistence:(id)a2 hookResponder:(id)a3;

@end
