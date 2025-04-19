@class LUI2Button, NSMenu, NSString;

@interface LUI2UserMenuViewController : LUI2ViewController

@property (retain) LUI2Button *userButton;
@property (retain) NSMenu *userMenuInternal;
@property NSString *userName;
@property (retain) NSMenu *userMenu;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_attributedStringFromString:(id)a0 withColor:(id)a1;
- (void)_userMenuPressed:(id)a0;

@end
