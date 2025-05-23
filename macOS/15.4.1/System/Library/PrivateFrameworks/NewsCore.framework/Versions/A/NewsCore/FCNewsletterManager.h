@class NSHashTable, NSString, NSArray, NSDate, FCCommandQueue, FCNewsletterEndpointConnection, FCUserInfo, FCCKPrivateDatabase, NFPromise;
@protocol FCBundleSubscriptionManagerType, FCNewsAppConfigurationManager, FCAppleAccount;

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver>

@property (nonatomic) long long subscription;
@property (nonatomic) long long includeOptions;
@property (retain, nonatomic) NSArray *cachedNewsletters;
@property (readonly, nonatomic) FCNewsletterEndpointConnection *endpointConnection;
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue;
@property (readonly, nonatomic) id<FCAppleAccount> appleAccount;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfig;
@property (readonly, nonatomic) FCUserInfo *userInfo;
@property (copy, nonatomic) NSString *activeiTunesAccountName;
@property (readonly, nonatomic) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (readonly, nonatomic) FCCKPrivateDatabase *database;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSDate *cacheExpiration;
@property (retain, nonatomic) NFPromise *updateSubscriptionPromise;
@property (retain, nonatomic) NFPromise *getWebTokenPromise;
@property (retain, nonatomic) NSString *cachedVector;
@property (copy) NSString *cachedWebToken;
@property (copy) NSDate *webTokenExpiration;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long activeNewsletter;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL canSubscribe;
@property (readonly, nonatomic) BOOL canUnsubscribe;
@property (readonly, nonatomic) BOOL includeUserVector;
@property (readonly, nonatomic) BOOL includeBundleSubscribedVector;
@property (readonly, nonatomic) BOOL includeSportsVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObservers;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)resetCaches;
- (void)unsubscribe;
- (double)cacheTimeout;
- (void)subscribeTo:(long long)a0;
- (void)activityObservingApplicationDidBecomeActive;
- (void)appleAccountChanged;
- (BOOL)canOptIntoIssues;
- (BOOL)canSubscribeToNewsletter:(long long)a0;
- (void)deletePersonalizationVector;
- (id)forceSubscriptionThen:(id /* block */)a0;
- (id)forceUpdateSubscription;
- (id)getWebToken;
- (long long)includeOptionsForNewsletter:(long long)a0;
- (id)initWithEndpointConnection:(id)a0 endpointCommandQueue:(id)a1 appleAccount:(id)a2 appConfig:(id)a3 userInfo:(id)a4 bundleSubscriptionManager:(id)a5 privateDataContext:(id)a6;
- (BOOL)isEligibleForIssues;
- (BOOL)isOptedIntoIssues;
- (BOOL)isSignedIntoEmailAccount;
- (long long)issueOptinStatus;
- (void)notifyObserversWithPreviousNewsletters:(id)a0 updatedNewsletters:(id)a1;
- (void)notifyObserversWithPreviousSubscription:(long long)a0;
- (void)optIntoSports;
- (void)optOutOfIssues;
- (void)optOutOfSports;
- (void)saveToCloudKitSubscribedChannels:(id)a0;
- (BOOL)shouldSubmitPersonalizationVector;
- (void)submitPersonalizationVector:(id)a0 subscribedBundleChannelIDs:(id)a1;
- (void)subscribeFromPrivacyModalCTA;
- (void)subscribeFromPrivacyModalCTAWithCompletion:(id /* block */)a0;
- (void)subscribeTo:(long long)a0 completion:(id /* block */)a1;
- (void)subscribeTo:(long long)a0 includeOptions:(long long)a1;
- (void)subscribeTo:(long long)a0 includeOptions:(long long)a1 completion:(id /* block */)a2;
- (long long)subscriptionStatusForNewsletter:(long long)a0;
- (void)updateCacheWithNewsletterString:(id)a0 includeArray:(id)a1 newsletters:(id)a2;
- (id)updateSubscription;
- (long long)updatedIncludeOptionsWithNewsletter:(long long)a0 includeOptions:(long long)a1;

@end
