@class NSMenu, NSPopUpButton;

@interface LUI2PowerViewController : LUI2ViewController

@property (retain) NSMenu *powerMenu;
@property (retain) NSPopUpButton *powerButton;
@property BOOL actionsWillPromptUser;
@property BOOL restartHidden;
@property BOOL shutdownHidden;
@property BOOL sleepHidden;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)viewDidLoad;
- (id)restartMenuItem;
- (id)shutdownMenuItem;
- (id)sleepMenuItem;
- (void)updateMenuTitles;

@end
