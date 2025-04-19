@class NSString;

@interface AKAccountRecoveryStepVerifyAppleID : NSObject <AKAccountRecoveryStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_beginVerifyAppleIDWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (id)_promptForUsernameWithModel:(id)a0;
- (void)_verifyAppleIDWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)canProcessResponse:(id)a0;
- (void)processResponse:(id)a0 model:(id)a1 withCompletion:(id /* block */)a2;

@end
