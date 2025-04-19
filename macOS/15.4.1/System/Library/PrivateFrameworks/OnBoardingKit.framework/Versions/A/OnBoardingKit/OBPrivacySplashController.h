@class OBTemplateContainerViewController, NSString, OBPrivacySplashView, OBPrivacyFlow;

@interface OBPrivacySplashController : NSWindowController <OBPrivacyPresenting> {
    OBPrivacySplashView *splashView;
}

@property (retain, nonatomic) OBPrivacyFlow *flow;
@property (retain) OBTemplateContainerViewController *containerViewController;
@property BOOL showPIIIcon;
@property BOOL suppressPerPageAnalyticsLogging;
@property BOOL allowsOpeningSafari;
@property (nonatomic) BOOL showLinkToPrivacyGateway;
@property BOOL showsLinkToUnifiedAbout;
@property BOOL forceLargeMargins;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property BOOL useModalStyle;
@property (nonatomic) BOOL isCombined;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)splashPageWithBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_defaultButtonTitle;
- (void)scrollToTop;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)imageFromImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)_configurePrivacyLinkButton;
- (void)_initializeFromBundle;
- (void)_showPrivacyGateway:(id)a0;
- (void)addPrivacyFlowGroups:(id)a0;
- (void)addTitle:(id)a0 contentList:(id)a1;
- (void)donePressed:(id)a0;
- (void)endSheet;
- (void)endSheetWithReturnCode:(long long)a0;
- (id)initWithFlow:(id)a0;
- (void)morePressed:(id)a0;
- (void)prepareContentView;
- (void)prepareToPresent;
- (void)setDismissHandlerForDefaultButton:(id /* block */)a0;

@end
