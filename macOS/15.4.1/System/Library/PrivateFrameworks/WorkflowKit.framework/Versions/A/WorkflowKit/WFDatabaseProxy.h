@class NSXPCConnection;

@interface WFDatabaseProxy : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_lock_databaseProxyHostConnection;
}

@property (class, readonly, nonatomic) WFDatabaseProxy *defaultDatabase;

- (id)init;
- (void).cxx_destruct;
- (id)database;
- (id)sortedWorkflowsWithQuery:(id)a0 error:(id *)a1;
- (id)collectionWithIdentifier:(id)a0 error:(id *)a1;
- (id)configuredTriggersForWorkflowID:(id)a0 error:(id *)a1;
- (id)sortedVisibleFoldersWithError:(id *)a0;
- (BOOL)isReference:(id)a0 allowedToRunOnDomain:(id)a1;
- (id)logRunOfWorkflow:(id)a0 withSource:(id)a1 triggerID:(id)a2;
- (void)quarantineWorkflowWithReference:(id)a0;
- (id)referenceForWorkflowID:(id)a0;
- (void)saveOutputActionSmartPromtDataForWorkflowReference:(id)a0 error:(id *)a1;
- (BOOL)saveSmartPromptStateData:(id)a0 actionUUID:(id)a1 reference:(id)a2 error:(id *)a3;
- (void)setOutcome:(long long)a0 forRunEvent:(id)a1;
- (void)setTrustedToRunScripts:(BOOL)a0 forReference:(id)a1 onDomain:(id)a2;
- (void)storeQuarantineHashForWorkflowWithReference:(id)a0 quarantineHash:(id)a1;
- (id)uniqueVisibleReferenceForWorkflowName:(id)a0;
- (id)approvalResultForContentAttributionSet:(id)a0 contentDestination:(id)a1 actionUUID:(id)a2 actionIdentifier:(id)a3 actionIndex:(unsigned long long)a4 reference:(id)a5 allowedOnceStates:(id)a6 error:(id *)a7;
- (id)createWorkflowWithWorkflowRecord:(id)a0 nameCollisionBehavior:(unsigned long long)a1 error:(id *)a2;
- (id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)a0 actionUUID:(id)a1 actionIdentifier:(id)a2 actionIndex:(unsigned long long)a3 count:(unsigned long long)a4 reference:(id)a5 error:(id *)a6;
- (id)databaseProxyHostConnection;
- (id)folderForWorkflowReference:(id)a0 error:(id *)a1;
- (id)serializedParametersForAppEntityIdentifier:(id)a0 error:(id *)a1;
- (id)sortedVisibleWorkflowsByNameWithError:(id *)a0;
- (id)sortedVisibleWorkflowsInCollection:(id)a0 error:(id *)a1;
- (void)updateAppDescriptor:(id)a0 atKey:(id)a1 actionUUID:(id)a2 actionIndex:(id)a3 actionIdentifier:(id)a4 workflowID:(id)a5 error:(id *)a6;
- (id)workflowRecordForDescriptor:(id)a0 error:(id *)a1;

@end
