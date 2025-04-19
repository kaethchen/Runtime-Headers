@class NSTextField, _WKApplicationManifest, NSImage, BrowserDocument, TextFieldWithEnforcedPrefixFormatter, NSButton, NSObject;
@protocol OS_dispatch_queue;

@interface WebAppInstallationViewController : NSViewController {
    NSObject<OS_dispatch_queue> *_internalQueue;
    BrowserDocument *_browserDocument;
    _WKApplicationManifest *_manifest;
    NSImage *_monogramIcon;
    TextFieldWithEnforcedPrefixFormatter *_prefixFormatter;
    long long _addMethod;
}

@property (weak) NSButton *iconButton;
@property (weak) NSTextField *nameTextField;
@property (weak) NSTextField *urlTextField;
@property (weak) NSTextField *descriptionTextField;
@property (weak) NSButton *addButton;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (double)_backingScaleFactor;
- (void)cancelButtonClicked:(id)a0;
- (id)initWithBrowserDocument:(id)a0 sender:(id)a1;
- (void)_requestMobileUserAgentTouchIconFallbackWithURL:(id)a0 largerThanSize:(struct CGSize { double x0; double x1; })a1;
- (void)_beginFadingView:(id)a0;
- (void)_generateWebAppWithName:(id)a0 startURL:(id)a1;
- (void)_loadWebAppManifest;
- (void)_presentErrorAlertForName:(id)a0 withError:(id)a1;
- (void)_presentReplacementAlertForName:(id)a0 atURL:(id)a1;
- (void)_reloadIconAnimated:(BOOL)a0;
- (void)addButtonClicked:(id)a0;
- (void)iconButtonClicked:(id)a0;

@end
