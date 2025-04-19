@interface DNDSSyncSettings : NSObject <NSMutableCopying, NSCopying>

@property (readonly, nonatomic, getter=isPairSyncEnabled) BOOL pairSyncEnabled;
@property (readonly, nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPairSyncEnabled:(BOOL)a0 cloudSyncEnabled:(BOOL)a1;

@end
