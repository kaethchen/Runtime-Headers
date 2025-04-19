@class NSView, NSLayoutConstraint, SFAuthorizationPluginView, LUI2View;

@interface LUI2AuthorizationPluginViewController : LUI2PasswordViewController

@property (retain) LUI2View *containerView;
@property (retain) NSLayoutConstraint *containerViewWidthConstraint;
@property (retain) NSLayoutConstraint *containerViewHeightConstraint;
@property int viewTypeInternal;
@property (retain) NSView *authPluginView;
@property (readonly) SFAuthorizationPluginView *authorizationPluginView;
@property int viewType;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)viewDidLoad;
- (void)setButton:(int)a0 enabled:(BOOL)a1;
- (void)updateView;
- (void)_updateView;
- (id)initWithAuthorizationPluginView:(id)a0;
- (id)viewForPopover;

@end
