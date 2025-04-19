@class LUI2SecureTextField, NSButton, NSString, LUI2TextFieldBackgroundView, NSStackView;
@protocol LUI2SecureTextFieldViewControllerDelegate;

@interface LUI2SecureTextFieldViewController : LUI2ViewController <NSTextFieldDelegate>

@property (retain) LUI2TextFieldBackgroundView *backgroundView;
@property (retain) NSStackView *stackView;
@property (readonly) LUI2SecureTextField *secureTextField;
@property (readonly) NSButton *hintButton;
@property id<LUI2SecureTextFieldViewControllerDelegate> delegate;
@property long long blendingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (id)_hintButtonImage;

@end
