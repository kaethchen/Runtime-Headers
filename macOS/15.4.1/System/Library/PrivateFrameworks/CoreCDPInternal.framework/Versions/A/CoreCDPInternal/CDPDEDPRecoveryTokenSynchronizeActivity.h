@interface CDPDEDPRecoveryTokenSynchronizeActivity : NSObject

+ (id)sharedActivity;

- (void)synchronize;
- (void)_synchronizeTokenWithCompletion:(id /* block */)a0;

@end
