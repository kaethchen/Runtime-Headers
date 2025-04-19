@class NSString, NSSet;

@interface PKPaymentOfferCriteriaIneligibleDetails : NSObject

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, copy, nonatomic) NSString *overrideDisplayString;
@property (readonly, copy, nonatomic) NSString *preferredLanguage;
@property (readonly, copy, nonatomic) NSSet *supportedCurrencyCodes;
@property (readonly, nonatomic) BOOL isWebPaymentRequest;
@property (readonly, nonatomic) NSSet *minimumAmounts;
@property (readonly, nonatomic) NSSet *maximumAmounts;

+ (id)ineligibleDetailsWithReason:(unsigned long long)a0 preferredLanguage:(id)a1 criteria:(id)a2 isWebPaymentRequest:(BOOL)a3;
+ (id)ineligibleDetailsWithReason:(unsigned long long)a0 preferredLanguage:(id)a1 overrideDisplayString:(id)a2 criteria:(id)a3 isWebPaymentRequest:(BOOL)a4;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEligible;
- (id)analyticsValue;
- (id)initWithIneligibleDetailsWithReason:(unsigned long long)a0 overrideDisplayString:(id)a1 preferredLanguage:(id)a2 criteria:(id)a3 isWebPaymentRequest:(BOOL)a4;

@end
