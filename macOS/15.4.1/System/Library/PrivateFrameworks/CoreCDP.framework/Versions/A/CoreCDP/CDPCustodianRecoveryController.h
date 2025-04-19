@class NSString, AACustodianController, CDPContext;

@interface CDPCustodianRecoveryController : NSObject {
    CDPContext *_context;
    NSString *_recoverySession;
    AACustodianController *_custodianController;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_fetchRecoveryInfoWithCompletion:(id /* block */)a0;
- (void)startRecoverySessionWithCompletion:(id /* block */)a0;
- (void)validateRecoveryCode:(id)a0 withCompletion:(id /* block */)a1;

@end
