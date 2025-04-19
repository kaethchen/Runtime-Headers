@class NSSet, AASignInFlowController, ACAccount, NSError;

@interface AppleIDSetupDaemon.CloudSignInContext : NSObject <AASignInFlowControllerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ requiredTerms;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ cdpContext;
@property (nonatomic) void /* unknown type, empty encoding */ skipCDPEnablement;
@property (nonatomic) void /* unknown type, empty encoding */ backgroundDataclassEnablement;
@property (nonatomic) void /* unknown type, empty encoding */ skipDataclassEnablement;
@property (nonatomic, copy) NSSet *requiredTerms;
@property (nonatomic) void /* unknown type, empty encoding */ shouldStashLoginResponse;
@property (nonatomic) void /* unknown type, empty encoding */ findMyActivationAction;

- (id)init;
- (void).cxx_destruct;
- (void)signInFlowController:(AASignInFlowController *)a0 enableFindMyWithAction:(unsigned long long)a1 completion:(void (^)(BOOL))a2;
- (void)signInFlowController:(AASignInFlowController *)a0 presentGenericTermsUIForAccount:(ACAccount *)a1 completion:(void (^)(BOOL, ACAccount *, NSError *))a2;
- (void)signInFlowController:(AASignInFlowController *)a0 presentProgressViewForAccount:(ACAccount *)a1 completion:(void (^)(BOOL))a2;

@end
