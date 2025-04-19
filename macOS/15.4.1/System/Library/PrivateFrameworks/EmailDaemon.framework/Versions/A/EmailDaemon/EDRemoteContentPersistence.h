@class NSString, NSBackgroundActivityScheduler, EDPersistenceDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface EDRemoteContentPersistence : NSObject <EFContentProtectionObserver, EDPersistenceDatabaseSchemaProvider, EDPersistenceDatabaseProtectedSchemaProvider> {
    long long _currentRowCount;
    long long _protectedRowCount;
}

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, nonatomic) BOOL useAdditionalTable;
@property (readonly, nonatomic) NSBackgroundActivityScheduler *analyticsScheduler;
@property (nonatomic) unsigned long long maximumRemoteContentLinks;
@property (nonatomic) unsigned long long pruneThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_remoteContentLinksTableSchemaWithName:(id)a0;
+ (id)protectedTablesAndForeignKeysToResolve:(id *)a0;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (BOOL)addRemoteContentLinks:(id)a0 newLinks:(id *)a1;
- (BOOL)_addRemoteContentLinks:(id)a0 withDate:(id)a1 toTable:(id)a2 withConnection:(id)a3 newLinks:(id *)a4;
- (unsigned long long)_currentRowCount;
- (void)_decrementCurrentRowCountBy:(unsigned long long)a0;
- (void)_decrementProtectedRowCountBy:(unsigned long long)a0;
- (id)_getRemoteContentURLInfoForTable:(id)a0 orderedBy:(long long)a1 inReverseOrder:(BOOL)a2 limit:(long long)a3 connection:(id)a4 error:(id *)a5;
- (void)_incrementCurrentRowCountBy:(unsigned long long)a0;
- (void)_incrementProtectedRowCountBy:(unsigned long long)a0;
- (void)_initializeCurrentRowCount;
- (void)_initializeProtectedRowCount;
- (unsigned long long)_protectedRowCount;
- (void)_refillFromAdditionalTable;
- (long long)_rowCountForTable:(id)a0;
- (unsigned long long)countOfLinksLastSeenSince:(id)a0;
- (unsigned long long)countOfUnrequestedLinks;
- (id)getRemoteContentURLInfoOrderedBy:(long long)a0 inReverseOrder:(BOOL)a1 limit:(long long)a2 error:(id *)a3;
- (id)initWithDatabase:(id)a0 useAdditionalTable:(BOOL)a1;
- (BOOL)pruneAllRemoteContentLinksWithMinimumCount:(unsigned long long)a0;
- (id)remoteContentLinksBelowCount:(unsigned long long)a0 limit:(unsigned long long)a1;
- (void)test_tearDown;
- (BOOL)updateRequestCountForRemoteContentLinks:(id)a0 updateLastSeen:(BOOL)a1;

@end
