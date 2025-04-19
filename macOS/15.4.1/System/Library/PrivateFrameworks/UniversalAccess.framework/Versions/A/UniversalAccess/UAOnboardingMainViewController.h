@class NSDictionary, UAOnboardingFeatureClosedCaptions, UAOnboardingFeatureHoverText, UAOnboardingFeatureCursorSize, NSMutableArray, NSString, UAOnboardingFeatureVoiceControl, UAOnboardingFeatureReduceMotion, UAOnboardingFeatureZoom, UAOnboardingFeatureFlashForAlerts, UAOnboardingFeatureIncreaseContrast, UAOnboardingFeatureAXKeyboard, UAOnboardingFeatureVoiceOver, OBTemplateView, UAOnboardingWelcomeViewController, UAOnboardingFeatureTypingFeedback, UAOnboardingViewController, UAOnboardingAccessibilitySettingsManager, UAOnboardingFeatureAppearance, UAOnboardingFeatureWelcome, UAOnboardingFeatureSpeakSelection, UAOnboardingFeatureReduceTransparency;
@protocol AccessibilityBuddyDelegate, MBSecondPartyHost;

@interface UAOnboardingMainViewController : UAOnboardingViewController <WelcomeViewControllerDelegate>

@property (retain, nonatomic) UAOnboardingViewController *_currentViewController;
@property (retain, nonatomic) NSString *_currentCategory;
@property (retain, nonatomic) NSMutableArray *_completedCategories;
@property (retain, nonatomic) UAOnboardingFeatureWelcome *_welcomeFeature;
@property (retain, nonatomic) UAOnboardingFeatureVoiceOver *_voiceOverFeature;
@property (retain, nonatomic) UAOnboardingFeatureZoom *_zoomFeature;
@property (retain, nonatomic) UAOnboardingFeatureSpeakSelection *_speakSelectionFeature;
@property (retain, nonatomic) UAOnboardingFeatureHoverText *_hoverTextFeature;
@property (retain, nonatomic) UAOnboardingFeatureCursorSize *_cursorSizeFeature;
@property (retain, nonatomic) UAOnboardingFeatureClosedCaptions *_closedCaptionsFeature;
@property (retain, nonatomic) UAOnboardingFeatureReduceTransparency *_reduceTransparencyFeature;
@property (retain, nonatomic) UAOnboardingFeatureIncreaseContrast *_increaseContrastFeature;
@property (retain, nonatomic) UAOnboardingFeatureAppearance *_appearanceFeature;
@property (retain, nonatomic) UAOnboardingFeatureReduceMotion *_reduceMotionFeature;
@property (retain, nonatomic) UAOnboardingFeatureFlashForAlerts *_flashForAlertsFeature;
@property (retain, nonatomic) UAOnboardingFeatureVoiceControl *_voiceControlFeature;
@property (retain, nonatomic) UAOnboardingFeatureAXKeyboard *_AXKeyboardFeature;
@property (retain, nonatomic) UAOnboardingFeatureTypingFeedback *_typingFeedbackFeature;
@property (retain, nonatomic) UAOnboardingWelcomeViewController *_welcome;
@property (retain, nonatomic) NSDictionary *_accessibilityOnboardingFlow;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain, nonatomic) UAOnboardingAccessibilitySettingsManager *_settingsManager;
@property (nonatomic) BOOL _isFirstTimeSeeingWelcomePane;
@property (weak) id<AccessibilityBuddyDelegate> delegate;
@property (weak, nonatomic) id<MBSecondPartyHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (void)_setup;
- (void)UAOnboardingWelcomeCognitiveButtonPressed:(id)a0;
- (void)UAOnboardingWelcomeHearingButtonPressed:(id)a0;
- (void)UAOnboardingWelcomeMotorButtonPressed:(id)a0;
- (void)UAOnboardingWelcomeVisionButtonPressed:(id)a0;
- (struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })getCurrentSettings;
- (id)nextFeatureForCategory:(id)a0;
- (void)nextScreen;
- (id)previousFeatureForCategory:(id)a0;
- (void)previousScreen;
- (void)setupScreenWithFeature:(id)a0;
- (void)setupScreenWithViewController:(id)a0;

@end
