@class NSButton;

@interface AudioOptionsViewMagneticEarbudsControl : AudioOptionsViewController

@property NSButton *autoAnswerCB;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (void)handleAutoAnswer:(id)a0;
- (id)viewsToAlign;

@end
