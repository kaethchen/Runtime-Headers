@class NSString, NSURL;

@interface PKPaymentOfferActionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSString *provisioningCredentialIdentifier;
@property (readonly, nonatomic) NSURL *provisioningCardIconURL;

+ (id)paymentOfferActionResultFromQueryItems:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 provisioningCredentialIdentifier:(id)a1 provisioningCardIconURL:(id)a2;

@end
