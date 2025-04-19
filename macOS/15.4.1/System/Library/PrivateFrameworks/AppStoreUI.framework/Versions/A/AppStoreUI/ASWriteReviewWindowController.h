@class ASTransitionViewController, ASWriteReviewConfiguration;

@interface ASWriteReviewWindowController : NSWindowController

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (readonly, nonatomic) ASTransitionViewController *transitionViewController;
@property (retain, nonatomic) ASWriteReviewWindowController *writeReviewWindowControllerLifecycle;
@property (copy, nonatomic) id /* block */ completion;

+ (id)configureOrCreateWindow:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)showWindow:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)completeWithResult:(unsigned long long)a0 error:(id)a1;
- (void)configureWindowController;
- (id)createRateViewController;
- (id)createThanksViewController;
- (id)initWithConfiguration:(id)a0 window:(id)a1;
- (void)showReviewComposerInWindow:(id)a0;
- (void)transitionToViewController:(id)a0;

@end
