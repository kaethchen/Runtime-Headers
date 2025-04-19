@class NSSet, FCBundleSubscription;
@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType;

@interface NewsCore.DropboxBundleSubscriptionManager : NSObject <FCBundleSubscriptionManagerType, FCPaidAccessCheckerType, FCBundleSubscriptionProviderType, FCPurchaseProviderType> {
    void /* unknown type, empty encoding */ todayDropbox;
    void /* unknown type, empty encoding */ lazyDropboxData;
}

@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;
@property (nonatomic, retain) void /* unknown type, empty encoding */ entitlementsOverrideProvider;
@property (nonatomic, readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (nonatomic, readonly) id<FCPurchaseProviderType> purchaseProvider;
@property (nonatomic, readonly) NSSet *purchasedTagIDs;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)bundleSubscriptionLookupEntry;
- (BOOL)canGetAccessToItemPaid:(BOOL)a0 bundlePaid:(BOOL)a1 channel:(id)a2;
- (BOOL)canGetBundleSubscriptionToChannel:(id)a0;
- (BOOL)canGetSubscriptionToChannel:(id)a0;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (BOOL)isPreparedForUse;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)silentExpireBundleSubscription;

@end
