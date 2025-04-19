@class NSTextField, NSProgressIndicator, NSString, NSAttributedString, NSDictionary, NSMutableArray, NSImageView, NSButton, NSBox;

@interface _UXContentUnavailableView : UXView

@property (retain, nonatomic) NSBox *containerView;
@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSMutableArray *containerViewContraints;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (nonatomic) unsigned long long vibrantOptions;
@property (retain, nonatomic) NSButton *actionButton;
@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (readonly, nonatomic) NSDictionary *messageTextAttributes;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) unsigned long long progressIndicatorStyle;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (id)_tintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)_textColor;
- (BOOL)_hasVibrantText;
- (void)_actionButtonPressed:(id)a0;
- (double)_buttonAlpha;
- (BOOL)_hasVibrantButton;
- (double)_labelAlpha;
- (id)_vibrantBaseColor;
- (id)titleTextAttributes;
- (id)_textFieldWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;
- (void)_updateProgressLayout;
- (void)_updateTextField:(id)a0 withText:(id)a1 attributedText:(id)a2;

@end
