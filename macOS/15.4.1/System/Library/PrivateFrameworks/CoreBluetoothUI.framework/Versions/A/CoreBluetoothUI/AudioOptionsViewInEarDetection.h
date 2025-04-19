@class NSButton;

@interface AudioOptionsViewInEarDetection : AudioOptionsViewController

@property NSButton *inEarDetectionEnabledCB;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (void)handleInEarDetection:(id)a0;
- (id)viewsToAlign;

@end
