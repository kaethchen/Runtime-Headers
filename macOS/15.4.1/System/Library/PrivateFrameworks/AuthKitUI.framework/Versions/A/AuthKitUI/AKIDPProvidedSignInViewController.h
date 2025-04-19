@class NSTextField, NSImageView, NSView, WKWebView, AKIDPHandler, NSButton, NSString;

@interface AKIDPProvidedSignInViewController : NSViewController <AKIDPPresentationController, AKInAssistantNavigationHandler>

@property (retain, nonatomic) AKIDPHandler *idpHandler;
@property (weak, nonatomic) NSView *containerView;
@property (weak, nonatomic) NSTextField *titleTextField;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSImageView *imageView;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)cleanUp;
- (void)alternateNavigationButtonClicked:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithIDPHandler:(id)a0;
- (void)leftNavigationButtonClicked:(id)a0;
- (void)rightNavigationButtonClicked:(id)a0;

@end
