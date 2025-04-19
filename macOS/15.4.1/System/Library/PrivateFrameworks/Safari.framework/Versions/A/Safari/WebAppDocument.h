@class NSString, NSTimer, WKWebView, NSURL, NSMutableDictionary;

@interface WebAppDocument : BrowserDocument <WKNavigationDelegate, WKUIDelegate> {
    NSTimer *_redirectDelayTimer;
    NSURL *_urlWhenRestoringInteractionState;
    NSMutableDictionary *_extensionsPendingRevoke;
}

@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) BOOL skipScopeEnforcement;
@property (nonatomic, getter=isExtensionNavigation) BOOL extensionNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)displayName;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateTitle;
- (void)addWindowController:(id)a0;
- (BOOL)isDocumentEdited;
- (void)makeWindowControllers;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)zoomIn:(id)a0;
- (void)zoomOut:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (BOOL)shouldClose;
- (void)makeTextSmaller:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 runOpenPanelWithParameters:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webViewDidClose:(id)a0;
- (void)goHome:(id)a0;
- (void)makeTextBigger:(id)a0;
- (void)revokeAccessAfterNavigatingBackInScopeForExtension:(id)a0 withOrigins:(id)a1;
- (BOOL)_alwaysShowWindowWithDelay;
- (id)_attributedStringForInsecureText:(id)a0;
- (BOOL)_canOpenURLInWebApp:(id)a0 forNavigationType:(long long)a1;
- (void)_handleWebViewAfterRedirect;
- (id)_initWithURL:(id)a0 forExtensionPageContent:(BOOL)a1 webViewConfiguration:(id)a2 windowFeatures:(id)a3;
- (void)_openURL:(id)a0 withWindowPolicy:(long long)a1;
- (void)_removeTemporaryWebExtensionPermissions;
- (void)_showWindowWithDelay;
- (void)_updateBackForwardButtons;
- (void)_updateWebView;
- (void)_urlHasChanged;
- (void)autoFill:(id)a0;
- (BOOL)canGoHome;
- (void)executeJavaScriptForMenuItem:(id)a0;
- (id)initWithURL:(id)a0 forExtensionPageContent:(BOOL)a1;
- (void)restoreInteractionState:(id)a0 withURL:(id)a1;
- (void)showDownloads:(id)a0;
- (void)showSharingServicePickerAtBottomOfView:(id)a0;
- (void)toggleReader:(id)a0;
- (void)toggleReaderAppearanceCustomizationPopover:(id)a0;
- (void)updateThemeColor;
- (void)zoomToStandardSize:(id)a0;

@end
