@class NSString, PKPaymentOfferInstallmentAssessment;

@interface PKPaymentOfferAssessmentCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) PKPaymentOfferInstallmentAssessment *installmentAssessment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)populateChallenge:(id)a0 verifier:(id)a1;
- (void)populatePreferredLanguage:(id)a0;
- (id)selectedPaymentOfferWithCriteriaIdentifier:(id)a0 paymentPass:(id)a1 sessionIdentifier:(id)a2 previousSelectedOfferIdentifier:(id)a3 preconfiguredOfferState:(unsigned long long)a4 updateReason:(unsigned long long)a5;

@end
