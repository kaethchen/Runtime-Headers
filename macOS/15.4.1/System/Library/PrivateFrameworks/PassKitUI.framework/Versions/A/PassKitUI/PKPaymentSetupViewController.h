@class NSString, PKPaymentProvisioningController, NSViewController, PKPaymentSetupAssistantProvisioningContext;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupViewController : NSViewController {
    NSViewController *_rootViewController;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    PKPaymentSetupAssistantProvisioningContext *_setupAssistantContext;
}

@property (nonatomic) BOOL isProcessingRequest;
@property BOOL nextButtonEnabled;
@property BOOL backButtonEnabled;
@property (retain) NSString *currentTitle;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) long long context;
@property (weak, nonatomic) id<PKPaymentSetupDelegate> setupDelegate;

- (void).cxx_destruct;
- (id)templateView;
- (void)handleCancel:(id)a0;
- (void)_configureRootViewController;
- (void)handleBack:(id)a0;
- (void)handleNext:(id)a0;
- (id)initWithPreflightedProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (id)initWithProvisioningController:(id)a0 didPreflight:(BOOL)a1 context:(long long)a2 setupAssistantContext:(id)a3 setupDelegate:(id)a4;
- (void)skipWelcomeScreen;
- (void)startSetupFlow;
- (void)startSetupFlowWithSelectedProvisioningContext:(id)a0;

@end
