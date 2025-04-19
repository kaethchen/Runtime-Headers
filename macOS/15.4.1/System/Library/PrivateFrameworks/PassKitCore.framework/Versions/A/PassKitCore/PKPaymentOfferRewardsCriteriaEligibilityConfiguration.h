@class NSDecimalNumber, NSString;

@interface PKPaymentOfferRewardsCriteriaEligibilityConfiguration : NSObject <PKPaymentOfferCriteriaEligibilityConfiguration>

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1 options:(unsigned long long)a2;

@end
