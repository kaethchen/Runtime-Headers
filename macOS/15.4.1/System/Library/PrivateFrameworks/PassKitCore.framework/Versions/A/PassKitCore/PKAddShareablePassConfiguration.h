@class NSArray, NSString, PKAddSecureElementPassConfiguration, PKAddIdentityDocumentConfiguration;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration <PKPushablePassConfigurationProvider, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long primaryAction;
@property (readonly, nonatomic) NSArray *credentialsMetadata;
@property (readonly, nonatomic) NSString *provisioningPolicyIdentifier;
@property (readonly, nonatomic) NSArray *metadataProviders;
@property (nonatomic) BOOL requiresNonceValidityChecks;
@property (readonly, nonatomic) PKAddSecureElementPassConfiguration *secureElementPassConfiguration;
@property (readonly, weak, nonatomic) PKAddShareablePassConfiguration *shareablePassConfiguration;
@property (readonly, weak, nonatomic) PKAddIdentityDocumentConfiguration *identityDocumentConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)configurationForPassMetadata:(id)a0 primaryAction:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)configurationForPassMetadata:(id)a0 provisioningPolicyIdentifier:(id)a1 primaryAction:(unsigned long long)a2 completion:(id /* block */)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_extendableDescription:(id)a0;
- (id)_primaryActionToString:(unsigned long long)a0;
- (BOOL)hasRequiredDataForProvisioning;
- (id)initWithPrimaryAction:(unsigned long long)a0 credentialsMetadata:(id)a1;

@end
