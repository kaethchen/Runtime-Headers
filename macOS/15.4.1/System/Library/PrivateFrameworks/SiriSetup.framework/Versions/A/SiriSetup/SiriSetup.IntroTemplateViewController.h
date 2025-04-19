@interface SiriSetup.IntroTemplateViewController : OBTemplateContainerViewController {
    void /* unknown type, empty encoding */ orbView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ siriCheckbox;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)continueClicked;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (void)backClicked;
- (void)checkboxClickedWithSender:(id)a0;

@end
