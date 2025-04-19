@class NSString, NSAttributedString, NSLayoutConstraint;

@interface ICLabel : NSTextField

@property (retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double spacing;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) double lineHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)textDidChange:(id)a0;
- (void)updatePreferredMaxLayoutWidth:(id)a0;
- (void)updateText;
- (void)updateHeightConstraint;

@end
