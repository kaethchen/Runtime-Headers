@class EXSDataConsumerPlugin, NSString, EXSAccount, EXSDataManager, NSObject;
@protocol OS_os_log, EXSDataConsumer, EXSDataConsumerInstanceDelegate, OS_dispatch_queue;

@interface EXSDataConsumerInstance : NSObject <EXSDataConsumerDelegate>

@property (retain, nonatomic) id<EXSDataConsumer> dataConsumer;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *logCategory;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkloop;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property BOOL isRunning;
@property (readonly, weak, nonatomic) EXSDataConsumerPlugin *plugin;
@property (readonly, weak, nonatomic) EXSAccount *account;
@property (readonly, weak, nonatomic) EXSDataManager *dataManager;
@property (readonly) BOOL supportsAttachments;
@property (weak, nonatomic) NSObject<EXSDataConsumerInstanceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)shutdown;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)startup:(long long)a0;
- (void)_accountChanged:(long long)a0;
- (void)dataConsumerRequiresFullResync:(id)a0;
- (void)_accountAdded:(long long)a0;
- (void)accountAdded;
- (void)accountDisabledForDataClass;
- (void)accountEnabledForDataClass;
- (void)accountEnabledForDataClass:(long long)a0;
- (void)accountMetadataChanged;
- (void)accountRemoved;
- (void)checkSourceIntegrity;
- (BOOL)consumerInterestedInEnabledDataClasses:(id)a0;
- (void)dataConsumer:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)dataConsumer:(id)a0 requestAutomaticDownloadOfAttachmentWithUUID:(id)a1;
- (void)dataConsumerHasAction:(id)a0 action:(id /* block */)a1 executeAfter:(unsigned long long)a2;
- (void)dataConsumerHasAsyncBatchOfChanges:(id)a0 currentToken:(id)a1;
- (void)dataConsumerHasFolderChanges:(id)a0;
- (void)dataConsumerHasMigratedData:(id)a0 withLastChangeID:(long long)a1;
- (void)dataConsumerNeedsSync:(id)a0;
- (void)dispatchAfter:(unsigned long long)a0 onWorkQueue:(id /* block */)a1;
- (void)dispatchOnWorkQueue:(id /* block */)a0;
- (id)initWithHandler:(id)a0 forAccount:(id)a1 withDataManager:(id)a2 dispatchWorkloop:(id)a3;
- (id)newEXSDataConsumer;
- (void)processAttachmentChangeForAttachmentWithExternalID:(id)a0;
- (void)processChangesSinceLastSync;
- (void)processOutstandingChangeItems;
- (BOOL)shouldDownloadAttachmentWithUUID:(id)a0;
- (void)shutdownInstance;
- (void)startupInstance:(long long)a0;
- (void)syncStateDidChange:(id)a0;
- (BOOL)waitForConsumerToBeReady;

@end
