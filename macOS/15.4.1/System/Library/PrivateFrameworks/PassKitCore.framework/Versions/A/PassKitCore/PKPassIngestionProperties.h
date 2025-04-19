@class PKPassProvisioningMetadata;

@interface PKPassIngestionProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPassProvisioningMetadata *provisioningMetadata;
@property (nonatomic) BOOL hasCustomizedSettings;
@property (nonatomic) unsigned long long settings;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
