@class NSURL;

@interface PKOrderWindowController : PKWindowController {
    NSURL *_orderURL;
    id /* block */ _completion;
}

@property BOOL didAddOrder;

- (void).cxx_destruct;
- (id)windowTitle;
- (struct CGSize { double x0; double x1; })windowSize;
- (void)closeAndFadeOut;
- (struct CGSize { double x0; double x1; })childViewControllerPreferredContentSize;
- (id)createChildViewController;
- (void)handleOrderAdded;
- (void)handleOrderImportWithResult:(unsigned long long)a0 error:(id)a1;
- (id)initWithOrderURL:(id)a0 completion:(id /* block */)a1;

@end
