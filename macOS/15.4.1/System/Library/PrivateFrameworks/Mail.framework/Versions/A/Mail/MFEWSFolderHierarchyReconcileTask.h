@class NSMutableSet, NSString, MFEWSSyncFolderHierarchyTaskOperation, MFEWSPruneFolderHierarchyTaskOperation, MFEWSPersistFolderHierarchyTaskOperation, NSMutableArray;

@interface MFEWSFolderHierarchyReconcileTask : MFEWSTask <MFEWSSyncFolderHierarchyTaskOperationDelegate, MFEWSPersistFolderHierarchyTaskOperationDelegate> {
    MFEWSSyncFolderHierarchyTaskOperation *_syncFolderHierarchyTaskOperation;
    MFEWSPersistFolderHierarchyTaskOperation *_persistFolderHierarchyTaskOperation;
    NSMutableArray *_pendingBatchesToPersist;
    NSMutableSet *_foundFolderIdStrings;
}

@property (copy, nonatomic) NSString *syncStateToReconcile;
@property (retain, nonatomic) MFEWSSyncFolderHierarchyTaskOperation *syncFolderHierarchyTaskOperation;
@property (retain, nonatomic) MFEWSPersistFolderHierarchyTaskOperation *persistFolderHierarchyTaskOperation;
@property (retain, nonatomic) MFEWSPruneFolderHierarchyTaskOperation *pruneFolderHierarchyTaskOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)operationFinished:(id)a0;
- (id)initWithInitialSyncState:(id)a0 accountName:(id)a1;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)persistFolderHierarchyOperation:(id)a0 completedBatch:(id)a1;
- (void)recalculatePriorities;
- (void)syncFolderHierarchyTaskOperation:(id)a0 completedBatch:(id)a1;

@end
