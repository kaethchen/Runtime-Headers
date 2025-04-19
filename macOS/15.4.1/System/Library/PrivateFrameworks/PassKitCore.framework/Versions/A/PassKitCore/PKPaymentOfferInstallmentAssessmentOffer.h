@class NSDate, NSString, NSURL, PKPaymentOfferInstallmentDownpaymentDetails, PKCurrencyAmount, PKPaymentOfferInstallmentInterestDetails, PKPaymentOfferInstallmentFeeDetails, NSDictionary, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferInstallmentAssessmentOffer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *serviceProviderURL;
@property (readonly, copy, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) PKCurrencyAmount *totalCost;
@property (readonly, nonatomic) long long installmentCount;
@property (readonly, nonatomic) unsigned long long installmentPeriod;
@property (readonly, nonatomic) long long installmentInterval;
@property (readonly, nonatomic) PKCurrencyAmount *installmentAmount;
@property (readonly, nonatomic) PKPaymentOfferInstallmentFeeDetails *feeDetails;
@property (readonly, nonatomic) PKPaymentOfferInstallmentInterestDetails *interestDetails;
@property (readonly, nonatomic) PKPaymentOfferInstallmentDownpaymentDetails *downpaymentDetails;
@property (readonly, nonatomic) PKCurrencyAmount *totalInterestAndFeesAmount;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;
@property (readonly, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (copy, nonatomic) NSString *preferredLanguage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
