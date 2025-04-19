@class GraphAPIBinding, NSString, EXSProtocolSubscription, NSCondition;

@interface EXSGraphSyncProtocol : EXSSyncProtocol <EXSNetworkControllerDelegate, EXSProtocolSubscriptionDelegate>

@property BOOL networkAvailable;
@property BOOL shouldHaveSubscription;
@property (retain, nonatomic) GraphAPIBinding *bindingForData;
@property (retain, nonatomic) NSCondition *networkAvailableCondition;
@property (retain, nonatomic) EXSProtocolSubscription *protocolSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (long long)folderItemTypeFromFolderClass:(id)a0;
+ (id)itemPropertiesFromTask:(id)a0;

- (void).cxx_destruct;
- (void)accountChanged;
- (void)shutdown;
- (void)_startPolling;
- (id)hostnames;
- (void)subscription:(id)a0 failedWithError:(id)a1;
- (void)startup;
- (void)stopPushChannel;
- (void)syncItemsForTaskFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2 forcingResync:(BOOL)a3;
- (void)didUnsubscribe:(id)a0;
- (void)refreshBindings;
- (id)_convertEWSId:(id)a0;
- (BOOL)_executeGraphAPIOperation:(id)a0 withChangeItem:(id)a1 error:(id *)a2;
- (id)_newScheduleCriteria;
- (void)_stopPolling;
- (id)buildChangeItemsForTaskFolderUpdates:(id)a0;
- (id)buildChangeItemsForTaskItemUpdates:(id)a0 parentFolder:(id)a1;
- (BOOL)canBatchChangeItemsForPush;
- (BOOL)canStoreChangeTokens;
- (id)changeSourceID;
- (id)createChangeItemForFolderItem:(id)a0 changeType:(long long)a1;
- (id)createChangeItemForItem:(id)a0 folderId:(id)a1 changeType:(long long)a2 changeSource:(id)a3;
- (void)didSubscribe:(id)a0;
- (id)ewsHostnames;
- (void)hostnameIsNotReachable:(id)a0;
- (void)hostnameIsReachable:(id)a0;
- (id)initWithAccount:(id)a0 dataManager:(id)a1 dispatchWorkloop:(id)a2;
- (id)lastProcessedChangeToken;
- (void)locateDefaultTaskFolders;
- (void)locateImportantFolders;
- (void)needsFolderHierarchySyncForExternalFolderIDs:(id)a0 dispatchGroup:(id)a1;
- (void)needsItemSyncForExternalFolderIDs:(id)a0 dispatchGroup:(id)a1;
- (BOOL)pushChangeItems:(id)a0 withTrackingToken:(id)a1;
- (BOOL)pushFolderCreated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushFolderDeleted:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushFolderUpdated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushItemCreated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushItemDeleted:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushItemUpdated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (void)repushFolders:(id)a0 completionHandler:(id /* block */)a1;
- (id)sendGraphRequest:(id)a0 error:(id *)a1;
- (void)startBindings;
- (void)startPushChannel;
- (void)startPushOrPolling;
- (void)stopBindings;
- (void)stopPushAndPolling;
- (void)subscription:(id)a0 foldersChanged:(BOOL)a1 folderEvents:(id)a2 itemEvents:(id)a3;
- (void)syncAllFolderItems;
- (void)syncAllItemsForFolders:(id)a0 forcingResync:(BOOL)a1;
- (void)syncFolderHierarchyForFolderIDs:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)syncFolderHierarchyForFolderIDs:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2 forceResync:(BOOL)a3;
- (void)syncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)syncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)syncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2 forcingResync:(BOOL)a3;
- (id)syncProtocolIdentifier;
- (void)systemWasWokenFromSleep;

@end
