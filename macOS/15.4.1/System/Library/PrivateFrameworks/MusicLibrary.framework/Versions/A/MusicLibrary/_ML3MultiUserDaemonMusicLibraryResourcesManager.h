@class NSString, NSOperationQueue, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, MLMediaLibraryAccountChangeObserver, _MSVAccountInformationProviding;

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (retain, nonatomic) id<_MSVAccountInformationProviding> accountInfo;
@property (weak, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (copy, nonatomic) NSString *currentActiveAccountDSID;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)_notifyClients:(id)a0;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (id)_blockingCurrentActiveAccountDSID;
- (id)_libraryContainerPathForDSID:(id)a0;
- (void)_processAccountChangeNotification;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)a0 newDatabasePath:(id)a1;
- (id)databasePathForDSID:(id)a0;
- (id)initWithAccountInfo:(id)a0 accountChangeObserver:(id)a1;
- (id)libraryContainerPath;
- (id)musicAssetsContainerPath;
- (BOOL)shouldExecuteAccountChangeOperation:(id)a0 reason:(id *)a1;

@end
