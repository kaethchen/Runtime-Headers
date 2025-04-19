@class NSArray, NSMutableDictionary, NSString, EXSAccountManager, NSObject, EXSDataManager;
@protocol OS_dispatch_workloop;

@interface EXSSyncEngine : NSObject <EXSSyncEngineDelegate>

@property (nonatomic) BOOL shouldStayRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *dispatchWorkloop;
@property (retain, nonatomic) EXSAccountManager *accountManager;
@property (retain, nonatomic) NSArray *dataConsumerPlugins;
@property (retain, nonatomic) NSMutableDictionary *syncEngineInstances;
@property (readonly, nonatomic) EXSDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (void)startup;
- (void)immediatelySync;
- (id)syncEngineInstanceForAccountID:(id)a0;
- (void)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (void)accountShutdown:(id)a0 isRemovedAccount:(BOOL)a1;
- (id)addDelegateForAccountID:(id)a0 delegateEmail:(id)a1 delegateFullname:(id)a2 readOnly:(BOOL)a3;
- (void)cleanupOrphanedDataSourceWithExistingAccounts:(id)a0;
- (BOOL)handleExchangeAccountAction:(id)a0;
- (void)loadDataConsumerPlugins;
- (void)loadDataConsumerPlugins:(id)a0;
- (id)newEXSyncEngineInstanceForAccount:(id)a0;
- (BOOL)removeDelegateFromAccountID:(id)a0 delegateSourceID:(id)a1;
- (void)removeInactiveAccount:(id)a0;
- (void)runMaintenanceActivities;
- (BOOL)startEngineInstanceForAccountAction:(id)a0;
- (BOOL)startupMigratedConsumerDelegate:(id)a0 consumerSourceIdentifier:(id)a1;
- (BOOL)updateDelegates:(id)a0 forParentAccountChange:(long long)a1;
- (BOOL)updateEngineInstanceForAccountAction:(id)a0;

@end
