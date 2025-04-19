@class NSString, PKPaymentRemoteCredential, PKPaymentPass;

@interface PKPrecursorPassCredential : PKPaymentCredential {
    PKPaymentRemoteCredential *_remoteCredential;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *serialNumber;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;
- (id)initWithRemoteCredential:(id)a0;
- (BOOL)supportsSuperEasyProvisioning;

@end
