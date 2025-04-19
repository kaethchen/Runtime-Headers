@class NSAttributedString;

@interface IMKUITextField : NSView

@property (nonatomic) double padding;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSAttributedString *attributedStringValue;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)sizeToFit;
- (BOOL)wantsUpdateLayer;
- (void)centerWithinSuperview;

@end
