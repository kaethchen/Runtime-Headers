@class NSAttributedString, NSString, NSView, NSLayoutConstraint, NSButton, NSStackView;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView

@property (nonatomic) NSButton *button;
@property (nonatomic) NSStackView *stackView;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSAttributedString *attributedButtonTitle;
@property (nonatomic) id buttonTarget;
@property (nonatomic) SEL buttonAction;
@property (nonatomic, getter=isButtonHidden) BOOL buttonHidden;
@property (nonatomic) NSView *backgroundPlatterView;

+ (double)defaultHeight;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0 buttonTitle:(id)a1;
+ (double)widthForTitle:(id)a0;
+ (double)widthForTitle:(id)a0 buttonTitle:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setButtonTitle:(id)a0;
- (void)awakeFromNib;
- (void)buttonPressed:(id)a0;
- (id)buttonTitle;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
