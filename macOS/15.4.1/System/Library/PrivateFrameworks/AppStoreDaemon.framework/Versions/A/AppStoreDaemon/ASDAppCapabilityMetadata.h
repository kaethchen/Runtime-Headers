@class NSString;

@interface ASDAppCapabilityMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL supportsFeatureA;
@property (nonatomic) BOOL supportsFeatureB;
@property (nonatomic) BOOL supportsFeatureC;

+ (id)metadataWithAction:(long long)a0 bundleID:(id)a1 capabilities:(id)a2;
+ (id)metadataWithAction:(long long)a0 entitlements:(id)a1 infoPlist:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
