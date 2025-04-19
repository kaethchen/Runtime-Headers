@class NSMutableDictionary;

@interface ICQCloudStorageSummaryCache : NSObject {
    NSMutableDictionary *_summaryCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    id _quotaChangeNotificationObserver;
    id _quotaInfoChangeNotificationObserver;
    id _cloudSubscriptionFeaturesObserver;
    BOOL _hasDisplayedDetailsPage;
}

@property (nonatomic) BOOL hasDisplayedDetailsPage;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanupCacheForPrimaryAccount;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_startObservingQuotaChangeNotifications;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (void)setStorageSummary:(id)a0 forAltDSID:(id)a1;
- (id)storageSummaryForAltDSID:(id)a0;

@end
