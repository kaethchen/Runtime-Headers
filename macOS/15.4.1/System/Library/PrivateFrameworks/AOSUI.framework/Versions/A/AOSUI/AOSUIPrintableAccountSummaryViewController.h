@class NSButton, NSWindow, NSTextField;

@interface AOSUIPrintableAccountSummaryViewController : NSViewController

@property (weak) NSTextField *titleTextField;
@property (weak) NSTextField *detailTextField;
@property (weak) NSButton *printButton;
@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)_setupView;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)printButtonPressed:(id)a0;

@end
