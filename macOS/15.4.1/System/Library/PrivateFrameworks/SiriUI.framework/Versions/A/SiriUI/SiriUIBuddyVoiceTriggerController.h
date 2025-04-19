@class NSView, NSString, NSArray, NSAttributedString, SiriUIBuddyController, SSRVoiceProfile, OBTemplateView, NSImage, VTUITrainingViewController;

@interface SiriUIBuddyVoiceTriggerController : NSViewController <VTUITrainingViewControllerDelegate, SiriUIBuddySubviewController> {
    VTUITrainingViewController *_trainingViewController;
    long long _targetDeviceType;
    BOOL _showingCompactTrigger;
}

@property BOOL trainingStarted;
@property (copy, nonatomic) NSArray *remoteDarwinDeviceIdentifiersForTraining;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfileForTraining;
@property (nonatomic) BOOL voiceTriggerUserEnabled;
@property (weak) SiriUIBuddyController *parentController;
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
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayout;
- (void)trainingViewController:(id)a0 markSATEnrollmentSuccessForVoiceProfile:(id)a1;
- (BOOL)shouldCancelTrainingForLidClose;
- (BOOL)_trainingWithRemoteDarwin;
- (void)cancelTraining;
- (void)didCloseLid;
- (void)didOpenLid;
- (BOOL)hasCompletedTraining;
- (id)initWithParentController:(id)a0 saeEnabled:(BOOL)a1;
- (BOOL)isGMOnboardingFlow;
- (void)setTrainingForVoiceTriggerDevice:(long long)a0 remoteDarwinDeviceIdentifiersForTraining:(id)a1;
- (void)skipVoiceTrigger:(id)a0;
- (void)trainingViewController:(id)a0 addUtterance:(id)a1 toProfile:(id)a2;
- (void)trainingViewController:(id)a0 discardSiriEnrollmentForProfileId:(id)a1 forLanguageCode:(id)a2;
- (void)trainingViewController:(id)a0 finishedTraining:(BOOL)a1;
- (void)trainingViewController:(id)a0 setVoiceTriggerUserEnabled:(BOOL)a1;
- (void)trainingViewControllerDidCompleteOrSkipVoiceTraining:(id)a0;
- (void)trainingViewControllerIsDisplayingTimeoutString:(id)a0;
- (void)trainingViewControllerWillBeginVoiceTraining:(id)a0;
- (id)voiceProfileForTrainingViewController:(id)a0;
- (id)vtHostingView;
- (void)willExitPane;

@end
