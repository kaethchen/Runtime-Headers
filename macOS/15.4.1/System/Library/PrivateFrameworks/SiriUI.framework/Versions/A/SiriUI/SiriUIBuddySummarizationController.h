@class SiriUIBuddyController, NSString, NSView, NSArray, NSImage, OBTemplateView, NSAttributedString;
@protocol UNNotificationOnboardingViewModel, UNNotificationOnboardingController;

@interface SiriUIBuddySummarizationController : NSViewController <UNNotificationOnboardingControllerDelegate, SiriUIBuddySubviewController> {
    OBTemplateView<UNNotificationOnboardingController> *_summarizationOBTemplateView;
    long long _state;
    long long _userChoice;
    NSString *_customizationPageNextButtonTitile;
}

@property (weak) id<UNNotificationOnboardingViewModel> notificationOnboardingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) SiriUIBuddyController *parentController;
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

+ (BOOL)_appCategorizationFeatureEnabled;
+ (BOOL)shouldShowDuringGMOnboarding;

- (void).cxx_destruct;
- (void)loadView;
- (void)_loadSummarizationCustomizationView;
- (void)_loadSummarizationIntroView;
- (void)_userEnabledSummarization:(BOOL)a0;
- (id)initWithParentController:(id)a0 saeEnabled:(BOOL)a1;
- (void)onboardingController:(id)a0 canProceed:(BOOL)a1 nextButtonText:(id)a2;
- (void)onboardingController:(id)a0 requestsPushingTo:(id)a1;
- (void)saveSummarizationState;
- (void)willExitPane;

@end
