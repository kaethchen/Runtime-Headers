@class NSColor, NSString;

@interface ASCBorderView : ASCUIView

@property (retain, nonatomic) NSColor *color;
@property (nonatomic) double width;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)updateBorderColor;

@end
