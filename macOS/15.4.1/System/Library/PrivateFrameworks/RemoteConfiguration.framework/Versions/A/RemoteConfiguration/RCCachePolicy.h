@interface RCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long requestCachePolicy;

+ (id)defaultCachePolicy;
+ (id)ignoreCachePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
