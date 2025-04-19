@class NSString, PKEncryptedPushProvisioningTarget, NSData;

@interface PKPaymentShareableCredential : PKPaymentCredential

@property (readonly, nonatomic) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSData *passThumbnailImageData;
@property (nonatomic) long long source;
@property (readonly, nonatomic, getter=isBackgroundProvisioning) BOOL backgroundProvisioning;
@property (retain, nonatomic) NSData *externalizedAuth;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProvisioningSharingIdentifier:(id)a0 isBackgroundProvisioning:(BOOL)a1;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)initWithEncryptedProvisioningTarget:(id)a0 provisioningSharingIdentifier:(id)a1 passThumbnailImageData:(id)a2;
- (id)initWithEncryptedProvisioningTarget:(id)a0 provisioningSharingIdentifier:(id)a1 passThumbnailImageData:(id)a2 isBackgroundProvisioning:(BOOL)a3;
- (BOOL)supportsSuperEasyProvisioning;

@end
