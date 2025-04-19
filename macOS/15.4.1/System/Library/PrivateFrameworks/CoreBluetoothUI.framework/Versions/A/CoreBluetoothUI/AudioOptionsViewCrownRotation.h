@class NSPopUpButton;

@interface AudioOptionsViewCrownRotation : AudioOptionsViewController

@property NSPopUpButton *crownRotationDirectionButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)keyForRotation:(unsigned char)a0;
- (id)clickOptions;
- (void)handleMenu:(id)a0;
- (void)setupPopUp:(id)a0;
- (id)viewsToAlign;

@end
