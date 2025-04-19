@class NSString, NSURL, PKAutomaticReloadPaymentSummaryItem;

@interface PKAutomaticReloadPaymentRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKAutomaticReloadPaymentSummaryItem *automaticReloadBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;

+ (long long)version;
+ (id)automaticReloadPaymentRequestWithProtobuf:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (id)protobuf;
- (id)initWithPaymentDescription:(id)a0 automaticReloadBilling:(id)a1 managementURL:(id)a2;
- (BOOL)isEqualToAutomaticReloadPaymentRequest:(id)a0;
- (void)sanitize;

@end
