@class NSSet, NSString, CDPContext;

@interface CPUI_AuthKitAuth_SignInFlowControllerDelegate : NSObject <AASignInFlowControllerDelegate>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (nonatomic) BOOL skipCDPEnablement;
@property (nonatomic) BOOL backgroundDataclassEnablement;
@property (nonatomic) BOOL skipDataclassEnablement;
@property (copy, nonatomic) NSSet *requiredTerms;
@property (copy, nonatomic) NSString *deviceOSVersion;
@property (nonatomic) BOOL newSignInReauth;
@property (nonatomic) BOOL shouldStashLoginResponse;
@property (nonatomic) unsigned long long findMyActivationAction;
@property (nonatomic, getter=isFastSignInEnabled) BOOL fastSignInEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
