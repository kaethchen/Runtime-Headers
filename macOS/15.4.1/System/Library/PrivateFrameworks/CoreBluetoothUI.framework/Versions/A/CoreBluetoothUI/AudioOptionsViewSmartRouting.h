@class NSPopUpButton;

@interface AudioOptionsViewSmartRouting : AudioOptionsViewController

@property NSPopUpButton *smartRoutingButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)clickOptions;
- (void)handleMenu:(id)a0;
- (id)keyForSmartRoutingStatus:(int)a0;
- (void)setupPopUp:(id)a0;
- (id)viewsToAlign;

@end
