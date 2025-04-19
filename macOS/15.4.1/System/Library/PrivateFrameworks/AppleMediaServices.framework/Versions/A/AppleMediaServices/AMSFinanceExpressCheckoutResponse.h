@interface AMSFinanceExpressCheckoutResponse : AMSFinancePaymentSheetResponse

+ (BOOL)_isExpressCheckoutEnabledForBag:(id)a0;
+ (BOOL)_isExpressCheckoutRecordUserChoiceEnabledForBag:(id)a0;
+ (BOOL)isEligibleForBag:(id)a0;
+ (BOOL)isExpressCheckoutPayload:(id)a0;
+ (BOOL)isExpressCheckoutShouldCheckForWalletBiometricsForBag:(id)a0;

- (id)initWithResponseDictionary:(id)a0 taskInfo:(id)a1;

@end
