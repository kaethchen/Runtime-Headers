@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animated;

+ (id)entitlements;
+ (id)accountChanged;
+ (id)settings;
+ (id)restrictions;
+ (id)purchases;
+ (id)favorites;
+ (id)preferredVideoFormat;
+ (id)playActivity;
+ (id)appRefresh;
+ (id)highlightsChanged;
+ (id)appDidBecomeActive;
+ (id)brandVisibilityChanged;
+ (id)clearPlayHistory;
+ (id)deviceDiscoveryDataAvailable;
+ (id)favoritesInBackground;
+ (id)favoritesSyncCompleted;
+ (id)federatedAppDidInstall;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)pinnedTabsChanged;
+ (id)playHistoryUpdated;
+ (id)postPlay;
+ (id)preferredPlaybackDimensionalityChanged;
+ (id)removeFromPlayHistory;
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;
+ (id)utsk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithEventType:(unsigned long long)a0;

@end
