@class NSView, NSString, NSArray, NSAttributedString, SiriUIBuddyController, _TtC6SiriUI21LoopedVideoPlayerView, OBTemplatePartBulletList, OBTemplateView, NSImage;

@interface SiriUIBuddyVoiceTriggerIntroController : NSViewController <SiriUI.LoopedVideoPlayerViewDelegate, SiriUIBuddySubviewController> {
    BOOL _showingCompactTrigger;
    _TtC6SiriUI21LoopedVideoPlayerView *_talkPlayerView;
    _TtC6SiriUI21LoopedVideoPlayerView *_typePlayerView;
    _TtC6SiriUI21LoopedVideoPlayerView *_playerView;
    OBTemplatePartBulletList *_bulletList;
}

@property (weak) SiriUIBuddyController *parentController;
@property (nonatomic) BOOL trainingWithRemoteDarwinAvailable;
@property (nonatomic) long long introState;
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
- (id)_bodyText;
- (id)bulletList;
- (void)_loadVideoView:(long long)a0;
- (id)_fontsOfAttributedString:(id)a0;
- (id)_fontsOfAttributedStrings:(id)a0;
- (BOOL)_hasTouchBar;
- (id)_loadVideoOf:(long long)a0;
- (double)_maxCapHeightOfAttributedStrings:(id)a0;
- (void)addBulletItems;
- (void)didCloseLid;
- (void)didOpenLid;
- (id)initWithParentController:(id)a0 saeEnabled:(BOOL)a1;
- (void)skipVoiceTrigger:(id)a0;
- (id)topContentViewNonSAE;
- (id)topContentViewSAE;
- (void)updateViewForClamshellMode:(BOOL)a0 trainingWithRemoteDarwinAvailable:(BOOL)a1;
- (void)videoDidReload;

@end
