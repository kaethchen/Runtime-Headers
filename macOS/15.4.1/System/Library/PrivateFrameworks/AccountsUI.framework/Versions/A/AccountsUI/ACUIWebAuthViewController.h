@class NSTextField, NSBox, NSImageView, NSProgressIndicator, NSLayoutConstraint, NSStackView, SLWebAuthController;
@protocol ACUIWebAuthDelegate;

@interface ACUIWebAuthViewController : ACUIViewController {
    SLWebAuthController *_webAuthController;
}

@property (retain) NSBox *webViewContainer;
@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *continueTextField;
@property (retain) NSLayoutConstraint *webContainerViewHeightConstraint;
@property (retain) NSImageView *imageView;
@property (retain) NSStackView *verticalStack;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (weak) id<ACUIWebAuthDelegate> delegate;

+ (BOOL)supportsAccount:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)cancelAuthorization;
- (void)_setContinueTextFieldHidden:(BOOL)a0;
- (void)_webLoginFailureWithError:(id)a0;
- (void)_webLoginSucceeded;
- (void)helpButton:(id)a0;
- (void)startAuthorization;

@end
