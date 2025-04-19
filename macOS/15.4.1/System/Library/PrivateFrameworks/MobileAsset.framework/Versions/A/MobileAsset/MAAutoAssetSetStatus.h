@class NSDate, NSString, NSArray, NSURL, MAAutoAssetSetNotifications, NSError, NSDictionary, MAAutoAssetSetProgress, MAAutoAssetSetPolicy;

@interface MAAutoAssetSetStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *configuredAssetEntries;
@property (retain, nonatomic) NSArray *atomicInstancesDownloaded;
@property (retain, nonatomic) NSString *catalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *catalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *catalogLastTimeChecked;
@property (retain, nonatomic) NSDate *catalogPostedDate;
@property (retain, nonatomic) NSString *newerAtomicInstanceDiscovered;
@property (retain, nonatomic) NSArray *newerDiscoveredAtomicEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (nonatomic) BOOL latestDownloadedAtomicInstanceFromPreSUStaging;
@property (retain, nonatomic) NSArray *latestDowloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSString *previouslyVendedLockedAtomicInstance;
@property (retain, nonatomic) NSDictionary *allDownloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSString *downloadedCatalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *downloadedCatalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *downloadedCatalogLastTimeChecked;
@property (retain, nonatomic) NSDate *downloadedCatalogPostedDate;
@property (retain, nonatomic) MAAutoAssetSetNotifications *currentNotifications;
@property (retain, nonatomic) MAAutoAssetSetPolicy *currentNeedPolicy;
@property (retain, nonatomic) MAAutoAssetSetPolicy *schedulerPolicy;
@property (retain, nonatomic) MAAutoAssetSetPolicy *stagerPolicy;
@property (nonatomic) BOOL haveReceivedLookupResponse;
@property (nonatomic) BOOL vendingAtomicInstanceForConfiguredEntries;
@property (nonatomic) BOOL downloadUserInitiated;
@property (retain) MAAutoAssetSetProgress *downloadProgress;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (retain, nonatomic) NSDictionary *currentLockUsage;
@property (retain, nonatomic) NSDictionary *selectorsForStaging;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *newerVersionError;
@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;

+ (id)_shortTermLockFilenameNormalizedComponent:(id)a0;
+ (id)newCurrentLockUsageDetailed:(id)a0;
+ (id)newCurrentLockUsageSummary:(id)a0;
+ (id)newSelectorsForStagingSummary:(id)a0;
+ (id)shortTermLockFilename:(id)a0 forAssetSetIdentifier:(id)a1 forSetAtomicInstance:(id)a2;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withAtomicInstancesDownloaded:(id)a2 withNewerAtomicInstanceDiscovered:(id)a3 withNewerDiscoveredAtomicEntries:(id)a4 withLatestDownloadedAtomicInstance:(id)a5 withLatestDowloadedAtomicInstanceEntries:(id)a6 withAllDownloadedAtomicInstanceEntries:(id)a7 withCurrentNotifications:(id)a8 withCurrentNeedPolicy:(id)a9 withSchedulerPolicy:(id)a10 withStagerPolicy:(id)a11 withDownloadUserInitiated:(BOOL)a12 withDownloadProgress:(id)a13 withDownloadedNetworkBytes:(long long)a14 withDownloadedFilesystemBytes:(long long)a15 withCurrentLockUsage:(id)a16 withSelectorsForStaging:(id)a17 withAvailableForUseError:(id)a18 withNewerVersionError:(id)a19;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withCurrentNotifications:(id)a12 withCurrentNeedPolicy:(id)a13 withSchedulerPolicy:(id)a14 withStagerPolicy:(id)a15 withDownloadUserInitiated:(BOOL)a16 withDownloadProgress:(id)a17 withDownloadedNetworkBytes:(long long)a18 withDownloadedFilesystemBytes:(long long)a19 withCurrentLockUsage:(id)a20 withSelectorsForStaging:(id)a21 withAvailableForUseError:(id)a22 withNewerVersionError:(id)a23;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withDownloadedCatalogCachedAssetSetID:(id)a12 withDownloadedCatalogDownloadedFromLive:(id)a13 withDownloadedCatalogLastTimeChecked:(id)a14 withDownloadedCatalogPostedDate:(id)a15 withCurrentNotifications:(id)a16 withCurrentNeedPolicy:(id)a17 withSchedulerPolicy:(id)a18 withStagerPolicy:(id)a19 havingReceivedLookupResponse:(BOOL)a20 vendingAtomicInstanceForConfiguredEntries:(BOOL)a21 withDownloadUserInitiated:(BOOL)a22 withDownloadProgress:(id)a23 withDownloadedNetworkBytes:(long long)a24 withDownloadedFilesystemBytes:(long long)a25 withCurrentLockUsage:(id)a26 withSelectorsForStaging:(id)a27 withAvailableForUseError:(id)a28 withNewerVersionError:(id)a29;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withDownloadedCatalogCachedAssetSetID:(id)a12 withDownloadedCatalogDownloadedFromLive:(id)a13 withDownloadedCatalogLastTimeChecked:(id)a14 withDownloadedCatalogPostedDate:(id)a15 withCurrentNotifications:(id)a16 withCurrentNeedPolicy:(id)a17 withSchedulerPolicy:(id)a18 withStagerPolicy:(id)a19 havingReceivedLookupResponse:(BOOL)a20 withDownloadUserInitiated:(BOOL)a21 withDownloadProgress:(id)a22 withDownloadedNetworkBytes:(long long)a23 withDownloadedFilesystemBytes:(long long)a24 withCurrentLockUsage:(id)a25 withSelectorsForStaging:(id)a26 withAvailableForUseError:(id)a27 withNewerVersionError:(id)a28;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withDownloadedCatalogCachedAssetSetID:(id)a12 withDownloadedCatalogDownloadedFromLive:(id)a13 withDownloadedCatalogLastTimeChecked:(id)a14 withDownloadedCatalogPostedDate:(id)a15 withCurrentNotifications:(id)a16 withCurrentNeedPolicy:(id)a17 withSchedulerPolicy:(id)a18 withStagerPolicy:(id)a19 withDownloadUserInitiated:(BOOL)a20 withDownloadProgress:(id)a21 withDownloadedNetworkBytes:(long long)a22 withDownloadedFilesystemBytes:(long long)a23 withCurrentLockUsage:(id)a24 withSelectorsForStaging:(id)a25 withAvailableForUseError:(id)a26 withNewerVersionError:(id)a27;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withPreviouslyVendedLockedAtomicInstance:(id)a12 withDownloadedCatalogCachedAssetSetID:(id)a13 withDownloadedCatalogDownloadedFromLive:(id)a14 withDownloadedCatalogLastTimeChecked:(id)a15 withDownloadedCatalogPostedDate:(id)a16 withCurrentNotifications:(id)a17 withCurrentNeedPolicy:(id)a18 withSchedulerPolicy:(id)a19 withStagerPolicy:(id)a20 havingReceivedLookupResponse:(BOOL)a21 vendingAtomicInstanceForConfiguredEntries:(BOOL)a22 withDownloadUserInitiated:(BOOL)a23 withDownloadProgress:(id)a24 withDownloadedNetworkBytes:(long long)a25 withDownloadedFilesystemBytes:(long long)a26 withCurrentLockUsage:(id)a27 withSelectorsForStaging:(id)a28 withAvailableForUseError:(id)a29 withNewerVersionError:(id)a30;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDownloadedAtomicInstanceFromPreSUStaging:(BOOL)a11 withLatestDowloadedAtomicInstanceEntries:(id)a12 withDownloadedCatalogCachedAssetSetID:(id)a13 withDownloadedCatalogDownloadedFromLive:(id)a14 withDownloadedCatalogLastTimeChecked:(id)a15 withDownloadedCatalogPostedDate:(id)a16 withCurrentNotifications:(id)a17 withCurrentNeedPolicy:(id)a18 withSchedulerPolicy:(id)a19 withStagerPolicy:(id)a20 havingReceivedLookupResponse:(BOOL)a21 vendingAtomicInstanceForConfiguredEntries:(BOOL)a22 withDownloadUserInitiated:(BOOL)a23 withDownloadProgress:(id)a24 withDownloadedNetworkBytes:(long long)a25 withDownloadedFilesystemBytes:(long long)a26 withCurrentLockUsage:(id)a27 withSelectorsForStaging:(id)a28 withAvailableForUseError:(id)a29 withNewerVersionError:(id)a30;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDownloadedAtomicInstanceFromPreSUStaging:(BOOL)a11 withLatestDowloadedAtomicInstanceEntries:(id)a12 withPreviouslyVendedLockedAtomicInstance:(id)a13 withDownloadedCatalogCachedAssetSetID:(id)a14 withDownloadedCatalogDownloadedFromLive:(id)a15 withDownloadedCatalogLastTimeChecked:(id)a16 withDownloadedCatalogPostedDate:(id)a17 withCurrentNotifications:(id)a18 withCurrentNeedPolicy:(id)a19 withSchedulerPolicy:(id)a20 withStagerPolicy:(id)a21 havingReceivedLookupResponse:(BOOL)a22 vendingAtomicInstanceForConfiguredEntries:(BOOL)a23 withDownloadUserInitiated:(BOOL)a24 withDownloadProgress:(id)a25 withDownloadedNetworkBytes:(long long)a26 withDownloadedFilesystemBytes:(long long)a27 withCurrentLockUsage:(id)a28 withSelectorsForStaging:(id)a29 withAvailableForUseError:(id)a30 withNewerVersionError:(id)a31;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withNewerAtomicInstanceDiscovered:(id)a4 withNewerDiscoveredAtomicEntries:(id)a5 withLatestDownloadedAtomicInstance:(id)a6 withLatestDowloadedAtomicInstanceEntries:(id)a7 withAllDownloadedAtomicInstanceEntries:(id)a8 withCurrentNotifications:(id)a9 withCurrentNeedPolicy:(id)a10 withSchedulerPolicy:(id)a11 withStagerPolicy:(id)a12 withDownloadUserInitiated:(BOOL)a13 withDownloadProgress:(id)a14 withDownloadedNetworkBytes:(long long)a15 withDownloadedFilesystemBytes:(long long)a16 withCurrentLockUsage:(id)a17 withSelectorsForStaging:(id)a18 withAvailableForUseError:(id)a19 withNewerVersionError:(id)a20;

@end
