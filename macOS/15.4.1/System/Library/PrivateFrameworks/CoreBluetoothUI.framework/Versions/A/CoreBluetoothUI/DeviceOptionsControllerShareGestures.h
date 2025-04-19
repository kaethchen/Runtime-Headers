@class NSPopUpButton, NSUserDefaults, NSTextField;

@interface DeviceOptionsControllerShareGestures : AudioOptionsViewController

@property (retain, nonatomic) NSUserDefaults *controllerDefaults;
@property NSTextField *menuLongPressLabel;
@property NSPopUpButton *menuLongPress;
@property NSTextField *shareDoublePressLabel;
@property NSPopUpButton *shareDoublePress;
@property NSTextField *shareLongPressLabel;
@property NSPopUpButton *shareLongPress;
@property NSTextField *tipTextLabel;

+ (BOOL)peerHasViews:(id)a0;
+ (BOOL)peripheralHasViews:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadPrefs;
- (void)handleMenu:(id)a0;
- (id)viewsToAlign;

@end
