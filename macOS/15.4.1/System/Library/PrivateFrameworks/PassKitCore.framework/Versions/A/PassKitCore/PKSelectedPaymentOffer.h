@class NSString, NSDictionary, PKPaymentPass;

@interface PKSelectedPaymentOffer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *selectedOfferIdentifier;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *criteriaIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 selectedOfferIdentifier:(id)a1 paymentPass:(id)a2 criteriaIdentifier:(id)a3 sessionIdentifier:(id)a4 serviceProviderData:(id)a5;
- (id)passUniqueID;

@end
