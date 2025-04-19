@interface AMSUIMessageLoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ loadingController;
    void /* unknown type, empty encoding */ presentationContext;
}

+ (id)placeholderStyleLoadingControllerWithMessage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)removeMessage;

@end
