@class NSArray, PKExternalProvisioningPolicy;

@interface PKExternalProvisioningOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKExternalProvisioningPolicy *policy;
@property (nonatomic) unsigned long long authorizationType;
@property (retain, nonatomic) NSArray *devices;

+ (id)mockOptions;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToExternalProvisioningOptions:(id)a0;

@end
