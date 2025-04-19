@class NSString, NSArray, PKPaymentOfferAction, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferInstallmentAssessment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long offerEligibility;
@property (readonly, nonatomic) NSArray *offers;
@property (readonly, nonatomic) PKPaymentOfferAction *action;
@property (readonly, copy, nonatomic) NSString *selectedOfferIdentifier;
@property (readonly, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEligible;
- (id)installmentOfferWithIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0 sessionIdentifier:(id)a1;

@end
