@class NSString, NSURL;
@protocol FCNetworkBehaviorMonitor, FCNetworkReachabilityType, FCCoreConfigurationManager;

@interface FCCKContentDatabase : NSObject <FCResourceURLGenerating>

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) BOOL isProductionEnvironment;
@property (readonly, nonatomic) id<FCNetworkBehaviorMonitor> networkBehaviorMonitor;
@property (readonly, nonatomic) id<FCNetworkReachabilityType> networkReachability;
@property (readonly, nonatomic) BOOL shouldUseCloudd;
@property (nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs;
@property (nonatomic) BOOL shouldBypassCDNForCKAssetURLs;
@property (nonatomic) double maximumRetryAfterForCK;
@property (readonly, copy, nonatomic) NSURL *baseURLForOrderFeed;
@property (readonly, copy, nonatomic) NSURL *baseURLForMultiFetch;
@property (readonly, copy, nonatomic) NSURL *baseURLForRecordFetch;
@property (readonly, copy, nonatomic) NSURL *baseURLForEdgeCachedOrderFeed;
@property (readonly, copy, nonatomic) NSURL *baseURLForEdgeCachedMultiFetch;

- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (id)generateURLForResourceID:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 productionEnvironment:(BOOL)a1 networkBehaviorMonitor:(id)a2 networkReachability:(id)a3 configurationManager:(id)a4;
- (id)permanentURLForRecordID:(id)a0 field:(long long)a1;
- (id)permanentURLForRecordID:(id)a0 field:(long long)a1 useSecureConnection:(BOOL)a2;
- (void)updateAssetURLHostIfNeededWithComponents:(id)a0;

@end
