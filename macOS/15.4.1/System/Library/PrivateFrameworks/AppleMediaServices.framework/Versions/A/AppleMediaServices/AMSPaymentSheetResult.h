@class NSString, AMSBiometricsSignatureResult;

@interface AMSPaymentSheetResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *delegateAuthenticateToken;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
