@class NSURL;

@interface AMRemoveQuarantineRecoveryAttempter : NSObject

@property (nonatomic) unsigned long long _recoveryOptionIndex;
@property (retain, nonatomic) NSURL *_url;

+ (id)removeQuarantineRecoveryAttempterWithRecoveryOptionIndex:(unsigned long long)a0 url:(id)a1;

- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (BOOL)_removeQuarantine;
- (id)initWithRecoveryOptionIndex:(unsigned long long)a0 url:(id)a1;

@end
