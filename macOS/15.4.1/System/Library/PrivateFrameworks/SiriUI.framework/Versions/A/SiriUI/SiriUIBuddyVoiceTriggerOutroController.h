@class NSView, NSString, NSArray, NSAttributedString, SiriUIBuddyController, _TtC6SiriUI21LoopedVideoPlayerView, OBTemplateView, NSImage;

@interface SiriUIBuddyVoiceTriggerOutroController : NSViewController <SiriUI.LoopedVideoPlayerViewDelegate, SiriUIBuddySubviewController> {
    BOOL _showingCompactTrigger;
    _TtC6SiriUI21LoopedVideoPlayerView *_playerView;
}

@property (weak) SiriUIBuddyController *parentController;
@property BOOL showCompactTriggerDisclosure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) BOOL saeEnabled;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSImage *topImage;
@property (readonly) OBTemplateView *templateView;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) NSString *templateNextButtonTitle;
@property (readonly) NSString *templatePreviousButtonTitle;
@property (readonly) NSAttributedString *templateAttributedBodyText;
@property (readonly) BOOL needsExtraWideContent;
@property (readonly) BOOL isInitialSubState;
@property (readonly) BOOL shouldDisableNextButton;
@property (readonly) id /* block */ templateAlternateActionBlock;
@property (readonly) id /* block */ templatePreviousButtonActionBlock;
@property (readonly) id /* block */ templateNextButtonActionBlock;

- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)_loadVideo;
- (void)addBulletItems;
- (id)initWithParentController:(id)a0 saeEnabled:(BOOL)a1;
- (id)topContentViewNonSAE;
- (id)topContentViewSAE;
- (void)videoDidReload;

@end
