@interface AMSecurityHelperWindowControllerRecoveryAttempter : NSObject

@property (nonatomic) unsigned long long _recoveryOptionIndex;

+ (id)securityHelperWindowControllerWithRecoveryOptionIndex:(unsigned long long)a0;

- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (void)_recoverWithCompletionHandler:(id /* block */)a0;
- (id)initWithRecoveryOptionIndex:(unsigned long long)a0;

@end
