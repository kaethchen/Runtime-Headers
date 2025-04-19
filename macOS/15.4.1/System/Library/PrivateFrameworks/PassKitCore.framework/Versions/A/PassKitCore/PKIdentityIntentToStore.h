@interface PKIdentityIntentToStore : NSObject <NSCopying>

@property (class, readonly, nonatomic) PKIdentityIntentToStore *willNotStoreIntent;
@property (class, readonly, nonatomic) PKIdentityIntentToStore *mayStoreIntent;

+ (id)mayStoreIntentForDays:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)_init;

@end
