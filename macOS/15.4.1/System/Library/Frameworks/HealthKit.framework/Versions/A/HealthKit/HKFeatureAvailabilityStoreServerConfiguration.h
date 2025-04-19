@class NSString;

@interface HKFeatureAvailabilityStoreServerConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0;

@end
