@class NSImageView, NSTextField, NSScrollView, NSView, TFBetaAppLaunchPresenter, NSStackView;
@protocol TFBetaAppLaunchScreenHost;

@interface TFBetaAppLaunchScreenWindowController : NSWindowController <TFBetaAppLaunchPresenterView>

@property (readonly, nonatomic) TFBetaAppLaunchPresenter *presenter;
@property (nonatomic) BOOL hasNextPage;
@property (retain, nonatomic) NSImageView *appImageView;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSScrollView *whatToTestDescription;
@property (retain, nonatomic) NSTextField *appTitle;
@property (retain, nonatomic) NSTextField *appSubTitles;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSView *toolBarView;
@property (weak, nonatomic) id<TFBetaAppLaunchScreenHost> launchScreenHost;

- (void).cxx_destruct;
- (id)_titleTextField;
- (void)_setupWindow;
- (void)dismissAnimated:(BOOL)a0;
- (id)initWithPresenter:(id)a0;
- (void)_hideWelcomeScreen;
- (id)_howToShareTextField;
- (id)_setupAppInfoStackView;
- (void)_setupShareFeedback;
- (void)_setupToolBarStackViewWithActionButtonTitle:(id)a0;
- (void)_setupWelcomeView;
- (id)_setupWhatToTestDescription;
- (id)_shareFeedbackTitleTextField;
- (id)_shareMacImageView;
- (id)_shareShortcutImageView;
- (id)_whatToTestTextField;
- (void)actionButtonWindow:(id)a0;
- (void)linkActionButtonWindow:(id)a0;
- (void)showHowToWithTitle:(id)a0 subtitle:(id)a1 screenshotImageDict:(id)a2 primaryButtonTitle:(id)a3 primaryButtonEvent:(unsigned long long)a4 secondaryButtonTitle:(id)a5 secondaryButtonEvent:(unsigned long long)a6 animated:(BOOL)a7;
- (void)showLoadingAnimated:(BOOL)a0;
- (void)showTestNotesWithTitle:(id)a0 lockup:(id)a1 testNotesTitle:(id)a2 testNotesText:(id)a3 primaryButtonTitle:(id)a4 primaryButtonEvent:(unsigned long long)a5 animated:(BOOL)a6 fetchingOnImageFetcher:(id)a7;

@end
