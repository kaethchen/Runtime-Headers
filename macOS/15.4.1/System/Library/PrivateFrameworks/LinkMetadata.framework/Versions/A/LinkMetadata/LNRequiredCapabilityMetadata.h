@class NSString;

@interface LNRequiredCapabilityMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL value;
@property (readonly, nonatomic, getter=isMobileGestaltCapability) BOOL mobileGestaltCapability;
@property (readonly, nonatomic, getter=isFeatureFlagCapability) BOOL featureFlagCapability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 key:(id)a1 value:(BOOL)a2;

@end
