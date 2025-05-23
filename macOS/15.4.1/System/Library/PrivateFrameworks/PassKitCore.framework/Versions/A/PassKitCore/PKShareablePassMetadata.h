@class PKAddPassMetadataPreview, NSString, PKShareablePassMetadataPreview, PKPushProvisioningTarget;

@interface PKShareablePassMetadata : NSObject <PKPushablePassMetadataProvider, NSSecureCoding, NSCopying> {
    PKPushProvisioningTarget *_provisioningTarget;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSString *templateIdentifier;
@property (readonly, nonatomic) NSString *cardTemplateIdentifier;
@property (readonly, nonatomic) NSString *cardConfigurationIdentifier;
@property (nonatomic) BOOL requiresUnifiedAccessCapableDevice;
@property (retain, nonatomic) NSString *serverEnvironmentIdentifier;
@property (readonly, nonatomic) PKShareablePassMetadataPreview *preview;
@property (readonly, nonatomic) struct CGImage { } *passThumbnailImage;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) NSString *accountHash;
@property (retain, nonatomic) NSString *relyingPartyIdentifier;
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
- (id)initWithPushProvisioningTarget:(id)a0;
- (id)_initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2 passThumbnailImage:(struct CGImage { } *)a3 ownerDisplayName:(id)a4 localizedDescription:(id)a5 accountHash:(id)a6 templateIdentifier:(id)a7 relyingPartyIdentifier:(id)a8 requiresUnifiedAccessCapableDevice:(BOOL)a9 passPreviewMetadata:(id)a10;
- (id)_initWithPushProvisioningTarget:(id)a0 passThumbnailImage:(struct CGImage { } *)a1 ownerDisplayName:(id)a2 localizedDescription:(id)a3 passPreviewMetadata:(id)a4;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2 passThumbnailImage:(struct CGImage { } *)a3 ownerDisplayName:(id)a4 localizedDescription:(id)a5;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardConfigurationIdentifier:(id)a2 preview:(id)a3;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 cardTemplateIdentifier:(id)a2 preview:(id)a3;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 passThumbnailImage:(struct CGImage { } *)a2 ownerDisplayName:(id)a3 localizedDescription:(id)a4 accountHash:(id)a5 templateIdentifier:(id)a6 relyingPartyIdentifier:(id)a7 requiresUnifiedAccessCapableDevice:(BOOL)a8;

@end
