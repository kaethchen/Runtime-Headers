@class NSObject, EXSAccount, EXSDataManager;
@protocol OS_dispatch_queue, EXSSyncProtocolDelegate;

@interface EXSSyncProtocol : NSObject <EXSChangeItemPushing>

@property (nonatomic) BOOL pendingResync;
@property (retain, nonatomic) EXSAccount *account;
@property (retain, nonatomic) EXSDataManager *dataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property BOOL isRunning;
@property (weak) id<EXSSyncProtocolDelegate> delegate;

- (void).cxx_destruct;
- (void)accountChanged;
- (void)shutdown;
- (void)startup;
- (void)downloadAttachmentWithRequestID:(id)a0 attachmentUUID:(id)a1 responseManager:(id)a2;
- (void)fireNetworkReachabilityChanged:(BOOL)a0;
- (BOOL)sendGetGrantedDelegatesRequest:(id)a0;
- (void)beginPushingChangesToServer;
- (BOOL)canBatchChangeItemsForPush;
- (BOOL)canStoreChangeTokens;
- (id)changeSourceID;
- (void)dispatchAfter:(unsigned long long)a0 onWorkQueue:(id /* block */)a1;
- (void)dispatchWithGroup:(id)a0 onWorkQueue:(id /* block */)a1;
- (void)endPushingChangesToServer;
- (void)fireAttachmentChangeWithExternalID:(id)a0;
- (void)fireHasFolderChanges;
- (void)fireHasItemChangesForFolder:(id)a0;
- (void)firePushChannelStarted;
- (void)firePushChannelStopped;
- (long long)getDelegateFolderPermissionsForEmailSynchronously:(id)a0 error:(id *)a1;
- (id)initWithAccount:(id)a0 dataManager:(id)a1 dispatchWorkloop:(id)a2;
- (BOOL)instanceIsRunning;
- (id)lastProcessedChangeToken;
- (void)locateDeletedItemFolderIDAfterMigration;
- (void)locateImportantFolders;
- (void)needsFolderHierarchyResyncWithDispatchGroup:(id)a0;
- (void)needsFolderHierarchySyncForExternalFolderIDs:(id)a0 dispatchGroup:(id)a1;
- (void)needsItemResyncForFolder:(id)a0 dispatchGroup:(id)a1;
- (void)needsItemSyncForExternalFolderIDs:(id)a0 dispatchGroup:(id)a1;
- (void)processCalendarAvailabilityWithRequestComponents:(id)a0;
- (void)processGetDelegateFolderPermissionsWithDispatchGroup:(id)a0 forEmail:(id)a1 completion:(id /* block */)a2;
- (void)processGetGrantedDelegateRequest:(id)a0;
- (void)processGetGrantedDelegateWithDispatchGroup:(id)a0 request:(id)a1;
- (void)processGrantedDelegateRequest:(id)a0;
- (void)processGrantedDelegateWithDispatchGroup:(id)a0 request:(id)a1;
- (void)processMigratedChangeItems:(long long)a0;
- (void)processOutstandingChangeItems;
- (void)processOutstandingChangeItemsWithDispatchGroup:(id)a0;
- (void)processSearchDirectoryRequest:(id)a0;
- (void)processSearchDirectoryWithDispatchGroup:(id)a0 request:(id)a1;
- (BOOL)pushChangeItems:(id)a0 withTrackingToken:(id)a1;
- (void)repushFolders:(id)a0 completionHandler:(id /* block */)a1;
- (void)resyncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)resyncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)sendAvailabilityRequestWithComponents:(id)a0;
- (BOOL)sendGrantedDelegateRequest:(id)a0;
- (BOOL)sendSearchDirectoryRequest:(id)a0;
- (void)syncAllFolderItems;
- (void)syncAllFolderItemsForDataclasses:(long long)a0;
- (void)syncAllFolderItemsForDataclasses:(long long)a0 withDispatchGroup:(id)a1;
- (void)syncFolderHierarchyForFolderIDs:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)syncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)syncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;

@end
