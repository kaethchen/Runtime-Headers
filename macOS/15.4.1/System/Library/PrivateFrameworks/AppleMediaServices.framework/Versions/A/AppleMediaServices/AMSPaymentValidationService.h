@interface AMSPaymentValidationService : NSObject

+ (BOOL)_isEntitledForDirectAccess;
+ (id)paymentHardwareStatusHeaders;
+ (id)performPaymentHardwareStatusWithService:(id)a0;

@end
