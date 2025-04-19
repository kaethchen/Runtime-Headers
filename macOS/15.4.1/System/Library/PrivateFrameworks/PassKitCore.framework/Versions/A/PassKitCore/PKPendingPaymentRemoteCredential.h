@class NSString, NSURL;

@interface PKPendingPaymentRemoteCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (nonatomic) long long credentialType;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (retain, nonatomic) NSString *cardIdentifier;
@property (retain, nonatomic) NSString *ownershipToken;
@property (retain, nonatomic) NSString *transferableFromDeviceSerialNumber;
@property (retain, nonatomic) NSString *transferableFromDeviceIdentifier;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSURL *passURL;
@property (nonatomic) BOOL supportsSuperEasyProvisioning;
@property (nonatomic) BOOL couldSupportSuperEasyProvisioning;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (BOOL)representsPass:(id)a0;
- (id)initForDatabase;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithRemoteCredential:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
