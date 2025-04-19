@interface ToCCIndicator : NSTextField

@property (nonatomic) BOOL isFilter;

+ (id)_iconWithString:(id)a0 filter:(BOOL)a1;
+ (id)iconWithRecipientType:(char)a0 filter:(BOOL)a1;
+ (id)localizedStringForRecipientType:(char)a0;

- (id)initWithCoder:(id)a0;
- (id)backgroundColor;
- (id)attributedStringValue;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)textColor;
- (BOOL)_isInSelectedRow;
- (id)_parentRow;
- (void)_toCCIndicatorCommonInit;

@end
