@class EWSStreamingSubscription, NSArray, NSString, ACAccount, NSObject, EWSExchangeServiceBinding;
@protocol OS_dispatch_queue;

@interface EXSEWSProtocolSubscription : EXSProtocolSubscription <EWSStreamingSubscriptionDelegate>

@property (weak, nonatomic) ACAccount *acAccount;
@property (retain, nonatomic) EWSExchangeServiceBinding *bindingForSubscription;
@property (retain, nonatomic) EWSStreamingSubscription *subscription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *subscriptionQueue;
@property (nonatomic) BOOL isDelegateAccount;
@property (copy) NSArray *folderIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)subscribe;
- (void)unsubscribe;
- (void)subscription:(id)a0 failedWithError:(id)a1;
- (void)subscription:(id)a0 receivedEvents:(id)a1;
- (void)subscription:(id)a0 receivedResponse:(id)a1;
- (void)subscriptionDidSubscribe:(id)a0;
- (void)subscriptionDidUnsubscribe:(id)a0;
- (void)updateFolderIDsForSubscription:(id)a0;
- (void)activateSubscription;
- (void)deactivateSubscription;
- (id)initSubscriptionWithAccount:(id)a0 delegate:(id)a1 folderIDs:(id)a2 isDelegateAccount:(BOOL)a3;
- (BOOL)shouldListenToAllStreamingSubscriptionResponses;
- (BOOL)shouldSyncUponReceivingResponse:(id)a0;

@end
