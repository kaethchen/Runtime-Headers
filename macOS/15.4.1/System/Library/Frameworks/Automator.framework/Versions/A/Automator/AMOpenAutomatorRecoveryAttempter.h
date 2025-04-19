@interface AMOpenAutomatorRecoveryAttempter : NSObject

@property (nonatomic) unsigned long long _recoveryOptionIndex;

+ (id)openAutomatorRecoveryAttempterWithRecoveryOptionIndex:(unsigned long long)a0;

- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (void)_openAutomatorApp;
- (id)initWithRecoveryOptionIndex:(unsigned long long)a0;

@end
