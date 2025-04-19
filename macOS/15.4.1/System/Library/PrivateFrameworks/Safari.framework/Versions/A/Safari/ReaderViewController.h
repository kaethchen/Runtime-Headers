@class WBSReaderFontManager, NSString, NSArray, WBSReaderConfigurationManager, BrowserViewController, _WKRemoteObjectInterface, ReaderWKView, ReaderAppearanceViewController, WBSReaderFont, ReaderNavigationDelegate, ReaderUIDelegate;

@interface ReaderViewController : WebViewController <ReaderAppearanceViewControllerDelegate> {
    _WKRemoteObjectInterface *_readerViewControllerMessageReceiverInterface;
    WBSReaderFontManager *_fontManager;
    ReaderAppearanceViewController *_readerAppearanceViewController;
    ReaderNavigationDelegate *_navigationDelegate;
    ReaderUIDelegate *_UIDelegate;
    BOOL _isObservingKeyValueChanges;
}

@property (readonly, nonatomic) ReaderWKView *readerView;
@property (readonly, nonatomic) void *readerController;
@property (readonly, nonatomic) BrowserViewController *originalArticleViewController;
@property (readonly, copy, nonatomic) NSArray *availableFonts;
@property (readonly, copy, nonatomic) NSArray *possibleFonts;
@property (readonly, nonatomic) WBSReaderFont *font;
@property (readonly, nonatomic) long long theme;
@property (readonly, nonatomic) WBSReaderConfigurationManager *configurationManager;
@property (nonatomic) unsigned long long zoomIndex;
@property (readonly, nonatomic) BOOL isPresentingAppearanceCustomizationPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)close;
- (void)invalidate;
- (void)setConfiguration:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isLocked;
- (void)setFont:(id)a0;
- (void)viewDidAppear;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidLoad;
- (BOOL)canMakeTextSmaller;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)goBack;
- (void)goForward;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0;
- (BOOL)canMakeTextBigger;
- (void)updateLanguageTag:(id)a0;
- (void)resetZoom;
- (void)zoomOut;
- (void)_applyConfigurationAndSendNotification:(BOOL)a0;
- (void)_clearWebKitDelegates;
- (void)_commonInitializationWithReaderController:(void *)a0;
- (void)_configurationDidChange:(id)a0;
- (id)_createWebViewWithConfiguration:(id)a0;
- (void)_installWebKitDelegates;
- (void)_resetConfigurationManager;
- (void)_startObservingWKWebViewKeyValueChanges;
- (void)_stopObservingWKWebViewKeyValueChanges;
- (long long)_systemAppearance;
- (id)availableFontsForReaderAppearanceViewController:(id)a0;
- (BOOL)bannerContainerViewShouldUseWhiteBackgroundColor:(id)a0;
- (BOOL)canResetZoom;
- (id)currentFontForReaderAppearanceViewController:(id)a0;
- (long long)currentThemeForReaderAppearanceViewController:(id)a0;
- (void)dismissAppearanceCustomizationPopover;
- (id)initWithReaderController:(void *)a0 configuration:(id)a1 browsingMode:(unsigned long long)a2;
- (id)possibleFontsForReaderAppearanceViewController:(id)a0;
- (void)presentAppearanceCustomizationPopoverFromView:(id)a0;
- (BOOL)readerAppearanceViewController:(id)a0 canPerformFontSizeAdjustment:(long long)a1;
- (void)readerAppearanceViewController:(id)a0 performFontSizeAdjustment:(long long)a1;
- (void)readerAppearanceViewController:(id)a0 switchToFont:(id)a1;
- (void)readerAppearanceViewController:(id)a0 switchToTheme:(long long)a1;
- (void)reloadAndReapplyConfiguration;
- (void)requestDeactivationFromUserAction;
- (void)zoomIn;

@end
