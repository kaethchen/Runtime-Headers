@class CKStoreAccount, NSString, CKStoreClient, ASKCommerceAccountObserverProxy, CKAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ASKStorefrontChangeProvider : NSObject <CKAccountObserver>

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (readonly, nonatomic) CKAccountStore *accountStore;
@property (readonly, nonatomic) ASKCommerceAccountObserverProxy *changeObserver;
@property (retain, nonatomic) CKStoreAccount *activeAccount;
@property (copy, nonatomic) NSString *currentStorefront;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
