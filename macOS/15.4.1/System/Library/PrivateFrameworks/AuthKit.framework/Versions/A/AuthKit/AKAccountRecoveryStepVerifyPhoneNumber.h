@class NSString;

@interface AKAccountRecoveryStepVerifyPhoneNumber : NSObject <AKAccountRecoveryStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_promptForPhoneNumberWithModel:(id)a0;
- (void)_beginVerifyPhoneNumberWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (id)_matchingAttributesWithPhoneNumber:(id)a0 linkRowElements:(id)a1;
- (void)_processPhoneNumber:(id)a0 response:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void)_sendSMSCodeWithModel:(id)a0 completion:(id /* block */)a1;
- (void)_verifyPhoneNumberWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)canProcessResponse:(id)a0;
- (void)processResponse:(id)a0 model:(id)a1 withCompletion:(id /* block */)a2;

@end
