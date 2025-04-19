@class EWSSubscription, MFEWSAccount, MFEWSAccountSyncActivity, NSString, NSObject, MFEWSLocalActionSyncTask;
@protocol OS_os_log;

@interface MFEWSAccountTaskManager : MCTaskManager <EWSSubscriptionDelegate, MCTaskManager>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) MFEWSAccount *account;
@property (retain, nonatomic) MFEWSAccountSyncActivity *syncActivity;
@property (retain, nonatomic) EWSSubscription *subscription;
@property (retain, nonatomic) MFEWSLocalActionSyncTask *localActionSyncTask;
@property (readonly, copy) NSString *accountName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL hasActivity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)addActivity:(id)a0;
- (void)cleanUp;
- (void)subscription:(id)a0 failedWithError:(id)a1;
- (void)subscription:(id)a0 receivedEvents:(id)a1;
- (void)subscriptionDidSubscribe:(id)a0;
- (void)subscriptionDidUnsubscribe:(id)a0;
- (void)_systemDidWake:(id)a0;
- (void)addLocalAction:(id)a0;
- (void)_populateAccountSyncActivityIfNeeded;
- (void)_populateSubscriptionIfNeeded;
- (void)activity:(id)a0 didEncounterError:(id)a1;
- (void)activityDidFinish:(id)a0;
- (void)checkForNewLocalActions;
- (id)newBodyFetchContext;
- (id)newNetworkHandler;
- (id)newPersistenceHandler;
- (void)recalculateMailboxPriority:(id)a0;
- (void)synchronizeAccountUserInitiated:(BOOL)a0;
- (void)synchronizeMailbox:(id)a0;

@end
