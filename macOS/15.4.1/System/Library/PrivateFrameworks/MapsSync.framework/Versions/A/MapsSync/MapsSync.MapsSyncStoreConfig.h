@class _TtC8MapsSync19MapsSyncStoreConfig;

@interface MapsSync.MapsSyncStoreConfig : NSObject

@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncStoreConfig *defaultStoreConfig;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ primary;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cache;

+ (id)withConfigWithPrimary:(long long)a0 cache:(long long)a1;

- (id)init;

@end
