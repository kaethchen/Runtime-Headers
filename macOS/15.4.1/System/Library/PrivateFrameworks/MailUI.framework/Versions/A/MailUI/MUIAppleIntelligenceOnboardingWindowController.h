@class MUIAppleIntelligenceOnboardingViewController, NSWindow;

@interface MUIAppleIntelligenceOnboardingWindowController : NSWindowController

@property (retain, nonatomic) MUIAppleIntelligenceOnboardingViewController *onboardingViewController;
@property (weak, nonatomic) NSWindow *presentingWindow;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)showOnboarding:(id)a0;
- (void)_mailAppleIntelligenceWelcomeViewControllerDidFinish:(id)a0;

@end
