@class NFLazy, NSString, NSDate, FCKeyValueStore, NSSet, NSMutableDictionary, NSDictionary, FCAsyncSerialQueue, NSObject, FCPurchaseLookUpEntriesManager, FCEntitlementService, FCCloudContext;
@protocol OS_dispatch_queue, FCEntitlementsOverrideProviderType;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, FCAppActivityObserving, FCPurchaseProviderType> {
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_webAccessEntriesByTagID;
    FCCloudContext *_cloudContext;
    NFLazy *_session;
    FCKeyValueStore *_localStore;
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_entitlementQueue;
    FCEntitlementService *_entitlementService;
}

@property (readonly, nonatomic) NSString *lastSignedInItunesAccountName;
@property (readonly, nonatomic) NSSet *purchasesDiscoveredTagIDs;
@property (readonly, nonatomic) NSDictionary *purchaseLookUpEntriesByTagID;
@property (readonly, nonatomic) NSMutableDictionary *webAccessEntriesByTagID;
@property (readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property (readonly, nonatomic) NSSet *allPurchaseIDs;
@property (readonly, nonatomic) NSSet *allTagIDs;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPaidSubscriber;
- (BOOL)isPaidSubscriberFromAppStore;
- (BOOL)isPaidSubscriberFromNews;
- (BOOL)isTagPurchased:(id)a0;
- (void)activityObservingApplicationDidEnterBackground;
- (void)addAppStorePurchaseWithTagID:(id)a0 purchaseID:(id)a1;
- (void)addToWebAccessOptedInListWithTagID:(id)a0;
- (void)clearAllAppStorePurchases;
- (id)expiredPurchaseChannelIDs;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (BOOL)hasPurchaseTypeAppStore;
- (BOOL)hasRenewalNoticeShownForTagID:(id)a0;
- (id)initWithCloudContext:(id)a0 entitlementService:(id)a1;
- (BOOL)isPaidSubscriberFromWeb;
- (BOOL)isTagIDPurchased:(id)a0;
- (void)performEntitlementCheckWithIgnoreCache:(BOOL)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (id)purchaseLookUpEntryForTagID:(id)a0;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)a0;
- (void)removeFromPurchasesDiscoveredList:(id)a0 completion:(id /* block */)a1;
- (void)removeWebPurchaseForTagID:(id)a0 userInitiated:(BOOL)a1;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)a0;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)a0 iTunesAccountDSID:(id)a1 isUserSignedIntoiTunes:(BOOL)a2 isBundleSubscriber:(BOOL)a3 completion:(id /* block */)a4;
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)a0 iTunesAccountDSID:(id)a1 isUserSignedIntoiTunes:(BOOL)a2 isBundleSubscriber:(BOOL)a3 completion:(id /* block */)a4;
- (void)silentExpireInAppSubscriptions;
- (void)submitWebAccessWithTagID:(id)a0 purchaseID:(id)a1 emailAddress:(id)a2 purchaseReceipt:(id)a3 serialCompletion:(id /* block */)a4 completion:(id /* block */)a5;
- (id)subscriptionNotSupportedChannelIDs;
- (void)updatePurchaseEntryToExpired:(id)a0;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)a0;
- (void)userInfo:(id)a0 didChangeAccessTokenForTagID:(id)a1;
- (void)userInfo:(id)a0 didRemoveAccessTokenForTagID:(id)a1 userInitiated:(BOOL)a2;
- (void)verifyAccessTokenWithTagID:(id)a0 accessToken:(id)a1 consumedArticleCount:(unsigned long long)a2 serialCompletion:(id /* block */)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;
- (id)webAccessOptedInTagIDs;

@end
