@class NSLayoutConstraint, NSTextField;

@interface SafeAutoFillChoicesMenuItemView : NSView

@property (weak, nonatomic) NSTextField *sectionTitleLabel;
@property (weak, nonatomic) NSTextField *contentValueLabel;
@property (weak, nonatomic) NSLayoutConstraint *constraintBetweenLabels;

+ (id)doNotFillText;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
