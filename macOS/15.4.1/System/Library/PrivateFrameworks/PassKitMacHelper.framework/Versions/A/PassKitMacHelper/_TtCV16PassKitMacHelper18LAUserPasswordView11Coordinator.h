@interface _TtCV16PassKitMacHelper18LAUserPasswordView11Coordinator : NSObject <LAUIUserPasswordFieldRemoteProtocol> {
    void /* unknown type, empty encoding */ externalizeContextAction;
    void /* unknown type, empty encoding */ incorrectPasswordFeedback;
}

- (id)init;
- (void).cxx_destruct;
- (void)didSubmitWrongPassword:(BOOL)a0;
- (void)didVerifyPassword;
- (void)externalizedContextInReply:(id /* block */)a0;
- (void)passwordFieldDidResignFirstResponder;
- (void)requestCancelAuthentication;

@end
