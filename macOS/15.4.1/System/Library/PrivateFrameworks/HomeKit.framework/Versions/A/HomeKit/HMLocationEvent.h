@class HMFLocationAuthorization, CLRegion;

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMFLocationAuthorization *authorization;
@property (nonatomic) long long locationAuthorization;
@property (retain, nonatomic) CLRegion *region;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;
- (void)updateRegion:(id)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 eventTrigger:(id)a1;
- (void)_handleLocationAuthorizationUpdatedNotification:(id)a0;
- (void)_retrieveLocationEvent;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_updateFromDictionary:(id)a0;
- (id)initWithDict:(id)a0 region:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;

@end
