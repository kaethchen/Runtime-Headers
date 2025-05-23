@class NSString, NSDictionary;

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {
    NSDictionary *_configuration;
    NSString *_v0_expressMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic, getter=isUserChoice) BOOL userChoice;
@property (nonatomic) BOOL forceModernEncoding;
@property (readonly, nonatomic) NSDictionary *subcredentialCredentialIdentifiers;

+ (BOOL)extractApplicationIdentifier:(id *)a0 subcredentialIdentifier:(id *)a1 fromIdentifiers:(id)a2;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)enumerateCredentialsUsingBlock:(id /* block */)a0;
- (id)initWithExpressPassInformation:(id)a0;
- (id)_initForPaymentPass:(id)a0 configuration:(id)a1;
- (id)criteriaForApplication:(id)a0;
- (id)criteriaForPaymentApplicationIdentifier:(id)a0;
- (void)enumerateCredentialsWithHandler:(id /* block */)a0;
- (void)enumerateCriteriaWithHandler:(id /* block */)a0;
- (id)expressMode;
- (id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)a0 paymentPass:(id)a1 withTechologyTest:(id /* block */)a2;
- (id)initForExpressMode:(id)a0 withPassUniqueIdentifier:(id)a1 paymentApplicationIdentifier:(id)a2;
- (id)initForPaymentPass:(id)a0 withTechologyTest:(id /* block */)a1;
- (id)paymentApplicationIdentifier;
- (id)paymentApplicationIdentifiers;
- (id)subcredentialCredentialIdentifiers;

@end
