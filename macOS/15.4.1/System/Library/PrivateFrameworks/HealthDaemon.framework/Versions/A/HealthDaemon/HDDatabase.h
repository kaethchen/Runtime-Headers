@class HKProfileIdentifier, HDContentProtectionManager, HDProfile, NSDate, NSObject, HDDatabaseConfiguration, HDXPCGatedActivity, NSMutableDictionary, HDDatabaseJournal, NSMutableArray, HDAssertionManager, NSConditionLock, NSString, NSDictionary, NSHashTable, NSMutableSet, NSOperationQueue, HKObserverSet, NSLock, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDDatabaseConnectionPoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDDatabaseMigrationTransactionDelegate, HDDatabaseCorruptionEventStoreDelegate, HDHealthDatabase> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    long long _state;
    NSString *_profileDirectoryPath;
    NSUUID *_databaseUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _databaseUUIDLock;
    NSObject<OS_dispatch_queue> *_serialAsynchronousQueue;
    NSLock *_writeLock;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _protectedDataLock;
    HKObserverSet *_protectedDataObservers;
    long long _protectedDataState;
    long long _protectedDataLock_observedContentProtectionState;
    BOOL _isObservingContentProtection;
    NSObject<OS_dispatch_group> *_contentProtectionObservationGroup;
    NSObject<OS_dispatch_source> *_inactivityFlushTimer;
    BOOL _hasFlushedForInactivity;
    NSMutableArray *_firstUnprotectedWriteTransactionBlocks;
    NSMutableArray *_firstProtectedWriteTransactionBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionStartLock;
    NSObject<OS_dispatch_group> *_transactionStartGroup;
    NSMutableArray *_firstUnlockBlocks;
    BOOL _shouldNotifyFirstUnlockObservers;
    NSDate *_protectedDataFlushDeadlineDate;
    NSObject<OS_dispatch_source> *_protectedDataFlushDeadlineTimer;
    BOOL _hasFlushedProtectedData;
    BOOL _disableTakingProtectedDataAssertionsWhenLocked;
    unsigned long long _journalMergeEpoch;
    unsigned long long _mergedJournalEpoch;
    _Atomic BOOL _hasPendingSecondaryJournalMerge;
    _Atomic BOOL _shouldPerformHFDVerificationAfterSecondaryJournalMerge;
    HDXPCGatedActivity *_secondaryJournalMergeActivity;
    _Atomic BOOL _hasCompletedFirstJournalMergeCleanup;
    NSMutableDictionary *_databaseJournalMergeObserverSetByType;
    NSHashTable *_protectedResourceStores;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _protectedResourceAssertionsLock;
    NSMutableDictionary *_protectedResourceAssertionsByIdentifier;
    struct atomic_flag { _Atomic BOOL _Value; } _hasFaultedForCorruptionError;
    NSString *_threadLocalTransactionKey;
    NSString *_threadLocalTransactionContextStackKey;
    HDAssertionManager *_assertionManager;
    NSLock *_schemaMigrationLock;
    NSConditionLock *_activeDatabasesLock;
    NSMutableSet *_activeDatabases;
    NSHashTable *_migratedDatabases;
    NSOperationQueue *_asynchronousOperationQueue;
    NSMutableDictionary *_extendedTransactions;
    NSDictionary *_databasePoolForType;
}

@property (readonly, nonatomic) HDContentProtectionManager *contentProtectionManager;
@property (nonatomic) double offsetTimeInterval;
@property (nonatomic) double protectedDataFlushInterval;
@property (nonatomic) double inactivityFlushInterval;
@property (nonatomic) BOOL didRunPostMigrationUpdates;
@property (nonatomic) long long corruptedMigrationAttemptsCount;
@property (readonly, copy, nonatomic) NSDate *mostRecentObliterationDate;
@property (copy, nonatomic) id /* block */ unitTest_didWaitForJournalMergeHandler;
@property (readonly, nonatomic) HDDatabaseJournal *journal;
@property (readonly, nonatomic) HDDatabaseJournal *cloudSyncJournal;
@property (readonly, nonatomic) HDDatabaseConfiguration *configuration;
@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *profileDirectoryPath;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) BOOL dataProtectedByFirstUnlockAvailable;
@property (readonly, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;
@property (readonly, nonatomic, getter=isInSession) BOOL inSession;

+ (id)allCurrentAndFutureEntityClasses;
+ (id)allEntityClassesWithBehavior:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void)addProtectedDataObserver:(id)a0 queue:(id)a1;
- (id)_journalForType:(long long)a0;
- (id)_newCorruptionEventStore;
- (id)_newDatabaseConnectionWithURL:(id)a0;
- (id)_newTTRPromptControllerWithProfile:(id)a0 domainName:(id)a1 loggingCategory:(id)a2;
- (void)_reportDatabaseMigrationStatus:(long long)a0 component:(long long)a1 schemaVersion:(long long)a2 error:(id)a3;
- (void)_reportSQLiteCorruption:(id)a0 forDatabase:(long long)a1 shouldPrompt:(BOOL)a2;
- (void)addDatabaseJournalMergeObserver:(id)a0 journalType:(long long)a1 queue:(id)a2;
- (BOOL)addJournalEntries:(id)a0 error:(id *)a1;
- (BOOL)addJournalEntry:(id)a0 error:(id *)a1;
- (void)addProtectedDataObserver:(id)a0;
- (void)addProtectedResourceStores:(id)a0;
- (id)allEntityClassesWithProtectionClass:(long long)a0;
- (id)allSeriesEntityClasses;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)beginExtendedTransactionWithContext:(id)a0 transactionTimeout:(double)a1 continuationTimeout:(double)a2 error:(id *)a3;
- (void)checkInDatabase:(id)a0 type:(long long)a1 protectedResources:(id)a2;
- (id)checkOutProtectedDatabase:(id)a0 error:(id *)a1;
- (id)checkOutProtectedResources:(id)a0 error:(id *)a1;
- (id)checkOutUnprotectedDatabase:(id)a0 error:(id *)a1;
- (id)cloneAccessibilityAssertion:(id)a0 ownerIdentifier:(id)a1 error:(id *)a2;
- (void)databaseJournalMergeDidComplete:(id)a0;
- (void)databasePool:(id)a0 didFlushConnections:(id)a1;
- (id)databasePoolForDatabaseType:(long long)a0;
- (id)databaseSizeInBytes;
- (id)databaseSizeInBytesForTypeUnprotected:(BOOL)a0 WAL:(BOOL)a1;
- (id)databaseUUIDWithError:(id *)a0;
- (void)enterStateAddResources;
- (void)enterStateInitialized;
- (void)enterStateRun;
- (id)extendedDatabaseTransactionForIdentifier:(id)a0;
- (void)finalizeExtendedTransactionForIdentifier:(id)a0;
- (id)initWithConfiguration:(id)a0 profile:(id)a1;
- (void)invalidateAndWait;
- (unsigned long long)journalChapterCountForType:(long long)a0;
- (void)migrationTransaction:(id)a0 didCreateDatabasesWithIdentifier:(id)a1;
- (void)migrationTransaction:(id)a0 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(id)a1 protectedIdentifier:(id)a2;
- (id)migrationTransaction:(id)a0 entityClassesWithBehavior:(id)a1;
- (void)migrationTransaction:(id)a0 reportHFDMigrationStatus:(long long)a1 schemaVersion:(long long)a2 error:(id)a3;
- (id)newConnectionForPool:(id)a0 error:(id *)a1;
- (void)obliterateWithReason:(id)a0 preserveCopy:(BOOL)a1;
- (void)performAsynchronously:(id /* block */)a0;
- (void)performAsynchronouslySerial:(id /* block */)a0;
- (BOOL)performHighPriorityTransactionsWithError:(id *)a0 block:(id /* block */)a1;
- (void)performInFirstProtectedWriteTransaction:(id /* block */)a0;
- (void)performInFirstUnprotectedWriteTransaction:(id /* block */)a0;
- (BOOL)performTransactionWithContext:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(id /* block */)a0;
- (void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)performWithJournalType:(long long)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)performWithTransactionContext:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)progressForJournalMergeWithType:(long long)a0;
- (void)removeDatabaseJournalMergeObserver:(id)a0 journalType:(long long)a1;
- (void)removeProtectedDataObserver:(id)a0;
- (id)store:(id)a0 objectForKey:(id)a1;
- (void)store:(id)a0 setObject:(id)a1 forKey:(id)a2;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)a0 shouldPerformTransaction:(BOOL)a1 timeout:(double)a2 error:(id *)a3;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)a0 timeout:(double)a1 error:(id *)a2;
- (void)unitTest_clearFirstJournalMergeCleanupFlag;
- (id)unitTest_currentTransaction;
- (void)unitTest_disableDatabaseAccessibilityAssertions;
- (void)unitTest_enableDatabaseAccessibilityAssertions;
- (void)unitTest_mergeSecondaryJournalsWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)unitTest_setContentProtectionStateAndWait:(long long)a0;

@end
