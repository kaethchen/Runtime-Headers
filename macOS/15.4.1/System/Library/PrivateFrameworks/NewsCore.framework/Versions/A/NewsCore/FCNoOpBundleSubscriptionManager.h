@class FCBundleSubscription;
@protocol FCEntitlementsOverrideProviderType;

@interface FCNoOpBundleSubscriptionManager : NSObject <FCBundleSubscriptionManagerType>

@property (readonly, nonatomic) FCBundleSubscription *cachedSubscription;
@property (readonly, nonatomic) FCBundleSubscription *validatedCachedSubscription;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)bundleSubscriptionLookupEntry;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)silentExpireBundleSubscription;

@end
