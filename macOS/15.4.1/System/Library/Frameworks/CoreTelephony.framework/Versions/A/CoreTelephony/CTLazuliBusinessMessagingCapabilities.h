@interface CTLazuliBusinessMessagingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long userPreferenceForSwitch;
@property (nonatomic) BOOL supported;
@property (nonatomic) BOOL enabledByDefault;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct BusinessMessagingCapabilities { int x0; BOOL x1; BOOL x2; } *)a0;
- (BOOL)isEqualToCTLazuliBusinessMessagingCapabilities:(id)a0;

@end
