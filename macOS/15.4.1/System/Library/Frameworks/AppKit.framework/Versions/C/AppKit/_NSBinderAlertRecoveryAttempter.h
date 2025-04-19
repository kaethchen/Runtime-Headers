@interface _NSBinderAlertRecoveryAttempter : NSObject {
    unsigned long long _recoveryOptionIndex;
}

- (id)init;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (unsigned long long)recoveryOptionIndex;

@end
