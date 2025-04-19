@class NSArray, PKIdentityDocumentMetadata, PKAddSecureElementPassConfiguration, PKAddShareablePassConfiguration, NSString;

@interface PKAddIdentityDocumentConfiguration : PKAddSecureElementPassConfiguration <PKPushablePassConfigurationProvider>

@property (readonly, nonatomic) PKIdentityDocumentMetadata *metadata;
@property (readonly, nonatomic) NSArray *metadataProviders;
@property (nonatomic) BOOL requiresNonceValidityChecks;
@property (readonly, nonatomic) PKAddSecureElementPassConfiguration *secureElementPassConfiguration;
@property (readonly, weak, nonatomic) PKAddShareablePassConfiguration *shareablePassConfiguration;
@property (readonly, weak, nonatomic) PKAddIdentityDocumentConfiguration *identityDocumentConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (void)configurationForMetadata:(id)a0 completion:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadata:(id)a0;
- (void)_extendableDescription:(id)a0;
- (BOOL)hasRequiredDataForProvisioning;

@end
