@class PKPaymentSetupAssistantContext;

@interface PKPaymentSetupAssistantController : PKPaymentSetupAssistantCoreController

@property (retain, nonatomic) PKPaymentSetupAssistantContext *setupAssistantContext;

- (void).cxx_destruct;
- (id)initWithSetupAssistantContext:(id)a0;
- (void)_setupAssistantViewControllerWithCompletion:(id /* block */)a0;
- (void)prepareForPresentationWithCompletion:(id /* block */)a0;

@end
