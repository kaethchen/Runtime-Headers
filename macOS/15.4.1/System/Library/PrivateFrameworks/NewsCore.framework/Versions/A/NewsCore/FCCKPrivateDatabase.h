@class NFLazy, NSData, NSArray, FCCKPrivateDatabaseSchema, NSDate, NSOperationQueue, CKRecord, NSObject;
@protocol OS_dispatch_group, FCCKDatabaseEncryptionDelegate, FCNetworkBehaviorMonitor, OS_dispatch_queue;

@interface FCCKPrivateDatabase : NSObject {
    BOOL _encryptionRequired;
    BOOL _beganInitialStartUp;
    BOOL _finishedInitialStartUp;
    BOOL _activelyStartingUp;
    id<FCCKDatabaseEncryptionDelegate> _encryptionDelegate;
    id<FCNetworkBehaviorMonitor> _networkBehaviorMonitor;
    long long _migratingFromVersion;
    long long _currentVersion;
    NSData *_encryptionKey;
    NSData *_secureEncryptionKey;
    CKRecord *_sentinelRecord;
    NFLazy *_ckProperties;
    FCCKPrivateDatabaseSchema *_schema;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_serialOperationQueue;
    NSOperationQueue *_highPriorityOperationQueue;
    NSOperationQueue *_noPreflightOperationQueue;
    NSArray *_middleware;
    NSArray *_remainingStartUpMiddleware;
    NSArray *_operationMiddleware;
    NSArray *_recordMiddleware;
    NSObject<OS_dispatch_group> *_initialStartUpGroup;
    long long _startUpResult;
    unsigned long long _countOfFailedStartUpAttempts;
    NSDate *_dateOfLastFailedStartUpAttempt;
    NSArray *_zoneRestorationSources;
    NSArray *_zonePruningAssistants;
}

+ (id)testingDatabase;

- (void).cxx_destruct;
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)a0 qualityOfService:(long long)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchChangesForRecordZoneID:(id)a0 changeToken:(id)a1 desiredKeys:(id)a2 fetchAllChanges:(BOOL)a3 qualityOfService:(long long)a4 completionHandler:(id /* block */)a5;

@end
