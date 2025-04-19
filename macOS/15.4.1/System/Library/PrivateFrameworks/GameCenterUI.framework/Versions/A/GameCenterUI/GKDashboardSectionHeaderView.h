@class NSTextField, NSString, NSLayoutConstraint, NSFont, NSColor;

@interface GKDashboardSectionHeaderView : NSUICollectionReusableView

@property (retain, nonatomic) NSColor *titleColor;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSFont *font;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSLayoutConstraint *leftMarginConstraint;
@property (nonatomic) BOOL onDarkBackground;

+ (double)defaultHeight;
+ (struct CGSize { double x0; double x1; })platformSizeForTitle:(id)a0 withFont:(id)a1;
+ (double)widthForTitle:(id)a0 withFont:(id)a1;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (void)awakeFromNib;
- (id)font;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFont:(id)a0;

@end
