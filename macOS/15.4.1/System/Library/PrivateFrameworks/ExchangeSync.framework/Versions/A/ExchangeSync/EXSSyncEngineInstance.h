@class EXSAccount, NSArray, EXSSyncProtocol, NSMutableDictionary, EXSDataManager, NSObject, NSString;
@protocol OS_dispatch_queue, EXSSyncEngineDelegate;

@interface EXSSyncEngineInstance : NSObject <EXSSyncProtocolDelegate, EXSDataConsumerInstanceDelegate>

@property (retain, nonatomic) EXSAccount *account;
@property (retain, nonatomic) EXSDataManager *dataManager;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkloop;
@property (weak, nonatomic) NSArray *dataConsumerPlugins;
@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncEngineInstanceQueue;
@property (retain, nonatomic) EXSSyncProtocol *syncProtocol;
@property (retain, nonatomic) NSArray *dataConsumerInstances;
@property (weak, nonatomic) id<EXSSyncEngineDelegate> engineDelegate;
@property BOOL networkIsReachable;
@property (retain, nonatomic) NSMutableDictionary *pendingDataclassChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (void)shutdown;
- (BOOL)startup:(BOOL)a0;
- (void)handleAccountChange:(id)a0;
- (void)downloadAttachmentWithRequestID:(id)a0 attachmentUUID:(id)a1 responseManager:(id)a2;
- (void)immediatelySync;
- (void)fireNetworkReachabilityChanged:(BOOL)a0;
- (BOOL)_accountNeedsCalendarDataMigration:(long long)a0;
- (BOOL)_accountNeedsDelegatePermissionCheck:(BOOL)a0;
- (void)_createAndRegisterSyncProtocol;
- (void)_startupDataConsumers:(long long)a0;
- (void)_startupEXSSyncEngineInstance;
- (void)_startupEXSSyncEngineInstanceAfterMigration;
- (void)_startupSyncProtocol;
- (void)accountWithACAccountIdentifier:(id)a0 hasChangeForACAccountDataclass:(id)a1;
- (id)associatedDelegateSourceIdentifiers;
- (void)changeItemPostedNotificationHandler:(id)a0;
- (void)dataConsumerInstance:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)dataConsumerInstance:(id)a0 needsFoldersRepushed:(id)a1;
- (void)dataConsumerInstance:(id)a0 requestAutomaticDownloadOfAttachmentWithUUID:(id)a1;
- (void)dataConsumerInstanceHasFolderChanges:(id)a0;
- (void)dataConsumerInstanceHasMigratedData:(id)a0 withLastChangeID:(long long)a1;
- (void)dataConsumerInstanceNeedsSync:(id)a0;
- (void)dispatchOnWorkQueue:(id /* block */)a0;
- (void)handleAccountChange:(id)a0 withGroup:(id)a1;
- (id)initWithAccount:(id)a0 syncEngine:(id)a1 dataConsumerPlugins:(id)a2 dispatchWorkloop:(id)a3;
- (void)mailModifiedEWSInvitation:(id)a0;
- (id)newDataConsumerInstanceForPlugin:(id)a0;
- (id)perConsumerResponsesToAccountChangeAction:(id)a0;
- (void)startUpMigratedDelegateInstance:(id)a0;
- (BOOL)startupWithPermissionCheck:(BOOL)a0 migratedData:(BOOL *)a1;
- (void)syncProtocol:(id)a0 hasItemChangesInFolder:(id)a1;
- (void)syncProtocol:(id)a0 hasUpdateForAttachmentWithExternalID:(id)a1;
- (void)syncProtocolHasFolderChanges:(id)a0;

@end
