@class NSString, WBSCloudBookmarksMigrationCoordinator;

@interface CloudBookmarksMigrationCoordinationConsul : NSObject <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> {
    BOOL _didDeferMigrationCoordinationRequest;
    WBSCloudBookmarksMigrationCoordinator *_migrationCoordinator;
}

@property (nonatomic) long long localMigrationState;
@property (readonly, nonatomic) BOOL canForceStartMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)getLocalMigrationStateForMigrationCoordinator:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createMigrationCoordinatorIfNeeded;
- (id)_migrationEligibilityLogsDirectoryURL;
- (void)_syncAgentDidFinish:(id)a0;
- (void)forceStartMigration;
- (void)startCoordinatingMigrationIfNeeded;

@end
