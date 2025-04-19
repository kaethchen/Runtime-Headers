@class NSDecimalNumber, NSString, NSArray;

@interface PKPaymentOfferInstallmentCriteriaEligibilityConfiguration : NSObject <PKPaymentOfferCriteriaEligibilityConfiguration>

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSString *merchantCountryCode;
@property (readonly, copy, nonatomic) NSArray *supportedNetworks;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, nonatomic) long long payLaterSuppressionMode;
@property (readonly, nonatomic) NSString *deviceRegion;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1 merchantCountryCode:(id)a2 deviceRegion:(id)a3 supportedNetworks:(id)a4 merchantCapabilities:(unsigned long long)a5 payLaterSuppressionMode:(long long)a6 options:(unsigned long long)a7;

@end
