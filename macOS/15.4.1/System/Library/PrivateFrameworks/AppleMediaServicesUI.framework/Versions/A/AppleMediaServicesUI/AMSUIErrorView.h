@class NSTextField, NSString, AMSUICommonStackView, NSButton;

@interface AMSUIErrorView : AMSUICommonView

@property (retain) AMSUICommonStackView *stackView;
@property (retain) NSTextField *titleLabel;
@property (retain) NSTextField *messageLabel;
@property (retain) NSButton *button;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

+ (id)_sanitizeTitle:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleButtonTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;

@end
