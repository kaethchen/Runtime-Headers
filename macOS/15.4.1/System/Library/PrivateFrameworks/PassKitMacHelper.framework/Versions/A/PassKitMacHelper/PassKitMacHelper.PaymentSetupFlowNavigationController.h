@interface PassKitMacHelper.PaymentSetupFlowNavigationController : NSViewController <PKMacSetupAssistantViewTemplateProviding> {
    void /* unknown type, empty encoding */ templateManager;
    void /* unknown type, empty encoding */ presentationMode;
    void /* unknown type, empty encoding */ activeViewController;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ configuredWindow;
    void /* unknown type, empty encoding */ onWindowAvailable;
    void /* unknown type, empty encoding */ flowDelegate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)presentViewControllerAsModalWindow:(id)a0;
- (void)presentViewControllerAsSheet:(id)a0;
- (id)templateView;
- (void)viewWillDisappear;

@end
