@class LUI2TextFieldBackgroundView, LUI2TextField;

@interface LUI2TextFieldViewController : LUI2ViewController

@property (retain) LUI2TextFieldBackgroundView *backgroundView;
@property (readonly) LUI2TextField *textField;
@property long long blendingMode;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)viewDidLoad;

@end
