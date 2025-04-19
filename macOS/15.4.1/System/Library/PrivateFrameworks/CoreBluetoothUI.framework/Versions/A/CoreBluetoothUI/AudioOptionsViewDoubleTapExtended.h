@class NSPopUpButton;

@interface AudioOptionsViewDoubleTapExtended : AudioOptionsViewController

@property NSPopUpButton *leftDoubleTapButton;
@property NSPopUpButton *rightDoubleTapButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)clickOptions;
- (void)handleMenu:(id)a0;
- (BOOL)isValidDoubleTapValue:(unsigned short)a0;
- (id)keyForDoubleTap:(unsigned short)a0;
- (void)setupPopUp:(id)a0 withCtrlName:(id)a1;
- (id)viewsToAlign;

@end
