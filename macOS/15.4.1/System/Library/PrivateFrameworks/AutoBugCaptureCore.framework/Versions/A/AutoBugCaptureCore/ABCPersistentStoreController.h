@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;

@interface ABCPersistentStoreController : NSObject {
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
}

@property (readonly, nonatomic) AnalyticsWorkspace *workspace;
@property (weak, nonatomic) id<ABCPersistentStoreControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)save;
- (void)save:(BOOL)a0;
- (id)workspace;
- (void)shutdown;
- (id)initWithDirectory:(id)a0;
- (id)initWithName:(id)a0 inDirectory:(id)a1;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)a0 reply:(id /* block */)a1;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (id)caseStorageAnalytics;
- (id)caseSummaryAnalytics;
- (id)caseUsageAnalytics;
- (void)cleanupDiagnosticCaseStorage;
- (void)cleanupDiagnosticCaseSummary;
- (void)cleanupDiagnosticCaseUsage;
- (void)cleanupUploadRecord;
- (id)prepareDataDirectoryWithName:(id)a0 containerPath:(id)a1;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)a0;
- (void)removeAllCaseStorages;
- (void)removeCaseStorageWithID:(id)a0;
- (void)removeCaseStoragesWithCaseIDs:(id)a0;
- (void)removeCaseStoragesWithUUIDs:(id)a0;
- (id)uploadRecordAnalytics;

@end
