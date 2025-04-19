@class NSString, PKAddPassMetadataPreview;

@interface PKJapanIndividualNumberCardMetadata : PKIdentityDocumentMetadata <PKProvisioningSupportDataProvider>

@property (copy, nonatomic) NSString *authenticationPassword;
@property (copy, nonatomic) NSString *signingPassword;
@property (retain, nonatomic) PKAddPassMetadataPreview *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasRequiredDataForProvisioning;
- (void)_extendableDescription:(id)a0;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardConfigurationIdentifier:(id)a2 preview:(id)a3;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardTemplateIdentifier:(id)a2 preview:(id)a3;
- (id)supportDataRepresentationWithSID:(id)a0;

@end
