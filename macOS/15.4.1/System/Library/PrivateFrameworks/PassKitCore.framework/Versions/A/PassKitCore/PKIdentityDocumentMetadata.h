@class NSString, PKPushProvisioningTarget, PKAddPassMetadataPreview;

@interface PKIdentityDocumentMetadata : NSObject <PKPushablePassMetadataProvider, NSCopying, NSSecureCoding> {
    PKPushProvisioningTarget *_provisioningTarget;
    PKAddPassMetadataPreview *_underlyingPreview;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSString *cardTemplateIdentifier;
@property (readonly, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *serverEnvironmentIdentifier;
@property (retain, nonatomic) PKPushProvisioningTarget *provisioningTarget;
@property (retain, nonatomic) PKAddPassMetadataPreview *underlyingPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasRequiredDataForProvisioning;
- (void)_extendableDescription:(id)a0;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardConfigurationIdentifier:(id)a2 cardTemplateIdentifier:(id)a3 requiresSimultaneousRequestRouting:(BOOL)a4 preview:(id)a5;
- (id)initWithPushProvisioningTarget:(id)a0 preview:(id)a1;

@end
