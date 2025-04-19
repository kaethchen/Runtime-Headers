@interface ADMIndefiniteGracePeriodHandler : NSObject

+ (void)handleEnablingAutoLoginForUser:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
+ (id)messageStringForIsComputerUnlockEnabled:(BOOL)a0 isApplePayEnabled:(BOOL)a1 isStorePurchaseEnabled:(BOOL)a2;
+ (id)titleStringForIsComputerUnlockEnabled:(BOOL)a0 isApplePayEnabled:(BOOL)a1 isStorePurchaseEnabled:(BOOL)a2;

@end
