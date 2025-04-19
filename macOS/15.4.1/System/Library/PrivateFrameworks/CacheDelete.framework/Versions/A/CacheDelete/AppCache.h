@class NSDate, NSString, TestTelemetry, NSMutableSet, NSURL, NSNumber, CacheDeleteVolume;

@interface AppCache : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *bundleIdentifiers;
@property (retain, nonatomic) NSMutableSet *groupContainerIdentifiers;
@property (readonly, nonatomic) CacheDeleteVolume *cdVol;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly) BOOL isDataseparated;
@property (readonly) BOOL isPlaceholder;
@property (readonly) BOOL isPlugin;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *userManagedAssetsURL;
@property (retain, nonatomic) NSNumber *lastKnownCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownGroupCacheSize;
@property (retain, nonatomic) NSNumber *lastKnownTmpSize;
@property (retain, nonatomic) NSNumber *lastKnownFreespace;
@property (retain, nonatomic) NSDate *lastUsed;
@property double timestamp;
@property (retain, nonatomic) TestTelemetry *telemetry;

+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 groupIdentifiers:(id)a2 dataContainerURL:(id)a3 userManagedAssetsURL:(id)a4 personaUniqueString:(id)a5 cacheDeleteVolume:(id)a6 isDataseparated:(BOOL)a7 isPlaceholder:(BOOL)a8 isPlugin:(BOOL)a9 telemetry:(id)a10;
+ (id)appCacheWithRecords:(id)a0 identifier:(id)a1 groupIdentifiers:(id)a2 dataContainerURL:(id)a3 userManagedAssetsURL:(id)a4 personaUniqueString:(id)a5 isDataseparated:(BOOL)a6 isPlaceholder:(BOOL)a7 isPlugin:(BOOL)a8 telemetry:(id)a9;
+ (void)enumerateAppCachesOnVolume:(id)a0 options:(int)a1 telemetry:(id)a2 block:(id /* block */)a3;
+ (void)enumerateGroupCachesOnVolume:(id)a0 block:(id /* block */)a1;
+ (void)enumerateWithContainerQuery:(id)a0 container_class:(unsigned long long)a1 options:(int)a2 telemetry:(id)a3 block:(id /* block */)a4;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)validate;
- (id)cachePath;
- (int)urgency;
- (BOOL)moveCacheAside:(id)a0;
- (id)tmpPath;
- (void)addBundleRecord:(id)a0;
- (void)addBundleRecords:(id)a0;
- (unsigned long long)caches:(BOOL)a0 purge:(BOOL)a1;
- (unsigned long long)clearCaches:(BOOL)a0;
- (id)initWithBundleRecords:(id)a0 identifier:(id)a1 groupIdentifiers:(id)a2 dataContainerURL:(id)a3 userManagedAssetsURL:(id)a4 personaUniqueString:(id)a5 cacheDeleteVolume:(id)a6 isDataseparated:(BOOL)a7 isPlaceholder:(BOOL)a8 isPlugin:(BOOL)a9 telemetry:(id)a10;
- (long long)three_days_ago;
- (unsigned long long)tmp:(BOOL)a0 purge:(BOOL)a1 all:(BOOL)a2;

@end
