@class NSString;

@interface VUILaunchConfig : NSObject

@property (nonatomic) BOOL useConfigCacheIgnoreExpiry;
@property (nonatomic) double extendedCacheExpireDuration;
@property (nonatomic) long long layoutReuseIdleTimeToLive;
@property (nonatomic) BOOL collectionUseIdForReuseIdEnabled;
@property (nonatomic) BOOL gridViewUseItemIdAsReuseId;
@property (nonatomic) BOOL memoryImageCacheEnabled;
@property (nonatomic) BOOL deferRichTextViewUpdate;
@property (nonatomic) long long imageInMemoryCacheSizeLimitInBytes;
@property (nonatomic) BOOL useSharedURLSession;
@property (nonatomic) BOOL prewarmUTSConnection;
@property (nonatomic) BOOL alwaysPrefetchAppConfiguration;
@property (nonatomic) BOOL prefetchLastSelectedTab;
@property (nonatomic) double prefetchedTabExpirationDuration;
@property (nonatomic) BOOL prewarmImageConnection;
@property (nonatomic) BOOL minimalSessionImageLoading;
@property (nonatomic) BOOL prewarmJetpackLoading;
@property (retain, nonatomic) NSString *prewarmImageUrl;
@property (nonatomic) BOOL checkRemoteServerReachability;
@property (nonatomic) double remoteServerReachabilityTimeoutDuration;
@property (retain, nonatomic) NSString *prewarmUTSUrl;

- (id)init;
- (void).cxx_destruct;

@end
