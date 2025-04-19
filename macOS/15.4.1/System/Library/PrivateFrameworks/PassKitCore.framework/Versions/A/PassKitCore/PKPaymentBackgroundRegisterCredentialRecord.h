@class NSString, NSData;

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord

@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSData *responseData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0;

@end
