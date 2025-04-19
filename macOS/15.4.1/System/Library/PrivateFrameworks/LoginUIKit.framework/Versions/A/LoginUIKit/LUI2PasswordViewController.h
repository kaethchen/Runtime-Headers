@class NSView, NSString, NSStackView, NSVisualEffectView, LUI2SecureTextFieldViewController, LUI2TextFieldBackgroundView, NSLayoutConstraint, NSObject, NSControl;
@protocol OS_dispatch_queue;

@interface LUI2PasswordViewController : LUI2ViewController <LUI2SecureTextFieldViewControllerDelegate, NSStackViewDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) LUI2TextFieldBackgroundView *backgroundView;
@property (retain) NSVisualEffectView *backBackgroundView;
@property (retain) NSVisualEffectView *helpBackgroundView;
@property (retain) NSVisualEffectView *loginBackgroundView;
@property (retain) NSStackView *stackView;
@property (retain) NSView *leftSpacer;
@property (retain) NSView *rightSpacer;
@property NSLayoutConstraint *backgroundWidthConstraint;
@property (readonly) LUI2SecureTextFieldViewController *secureTextFieldViewController;
@property (readonly) NSControl *backButton;
@property (readonly) NSControl *helpButton;
@property (readonly) NSControl *loginButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)stackView:(id)a0 didReattachViews:(id)a1;
- (void)stackView:(id)a0 willDetachViews:(id)a1;
- (void)viewDidLoad;
- (void)_sleepWakeNotificationReceived:(id)a0;
- (void)_backgroundPressed:(id)a0;
- (void)_configureForSFAuthorizationPluginView;
- (void)_updateBlendingMode:(id)a0;
- (void)increaseContrast:(BOOL)a0;
- (void)secureTextFieldTextDidChange:(id)a0;
- (void)shake;
- (void)updateTextLegibilityIfNeededWithImage:(id)a0 displayID:(unsigned int)a1 withCompletionHandler:(id /* block */)a2;
- (id)viewForPopover;

@end
