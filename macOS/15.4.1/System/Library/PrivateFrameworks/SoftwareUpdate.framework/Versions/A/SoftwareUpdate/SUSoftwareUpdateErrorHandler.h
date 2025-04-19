@interface SUSoftwareUpdateErrorHandler : NSObject {
    long long _code;
    id /* block */ _action;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)initWithErrorCode:(long long)a0 action:(id /* block */)a1;

@end
