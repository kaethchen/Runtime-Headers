@class NSString, NSArray, TUDispatcher, CHManager, NSOperationQueue, NSPredicate, TUFeatureFlags, NSMutableSet, TUCallProviderManager;
@protocol TUCallHistoryControllerDataSource;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>

@property (class, readonly, nonatomic) TUCallHistoryController *sharedController;

@property (readonly, nonatomic) TUFeatureFlags *featureFlags;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) TUDispatcher *dispatcher;
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher;
@property (retain, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders;
@property (readonly, nonatomic) BOOL shouldUpdateMetadataCache;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions;
@property (readonly, nonatomic) id<TUCallHistoryControllerDataSource> dataSource;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (nonatomic) NSPredicate *preFetchingPredicate;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 shouldUpdateMetadataCache:(BOOL)a2;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)a0;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)boostQualityOfService;
- (long long)callHistoryControllerCallHistoryFetchLimit;
- (void)callHistoryDatabaseChanged:(id)a0;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (void)cancelSearchFetchOperations;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)a0;
- (void)deleteRecentCalls:(id)a0;
- (void)dispatcherDidFinishBoost:(id)a0;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 dataSource:(id)a2 shouldUpdateMetadataCache:(BOOL)a3;
- (void)loadDispatchQueue;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (void)markRecentVideoCallsAsRead;
- (id)recentCallsWithPredicate:(id)a0;
- (void)reloadWithOptions:(unsigned long long)a0;

@end
