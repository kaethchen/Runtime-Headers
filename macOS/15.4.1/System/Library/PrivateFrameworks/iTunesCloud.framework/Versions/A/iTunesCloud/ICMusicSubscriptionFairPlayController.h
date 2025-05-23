@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionFairPlayController : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;
    NSMutableDictionary *_subscriptionKeyBagStatusCache;
}

@property (class, readonly, nonatomic) ICMusicSubscriptionFairPlayController *sharedController;

- (void).cxx_destruct;
- (id)_init;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)a0;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)a0 transactionType:(unsigned int)a1 machineIDData:(id)a2 completionHandler:(id /* block */)a3;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)a0 transactionType:(unsigned int)a1 certificateData:(id)a2 assetIDData:(id)a3 completionHandler:(id /* block */)a4;
- (id)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)a0 error:(id *)a1;
- (void)getKeyStatusListWithCompletionHandler:(id /* block */)a0;
- (void)importSubscriptionKeyBagData:(id)a0 completionHandler:(id /* block */)a1;
- (void)importSubscriptionKeyBagData:(id)a0 leaseInfoData:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopSubscriptionLeaseWithCompletion:(id /* block */)a0;

@end
