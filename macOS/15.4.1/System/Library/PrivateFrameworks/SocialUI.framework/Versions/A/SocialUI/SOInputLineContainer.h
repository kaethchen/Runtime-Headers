@interface SOInputLineContainer : NSView

@property (class, readonly) double inputLineBorderWidth;

@property (nonatomic) BOOL drawBorder;

- (id)initWithCoder:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_commonInitInputLineContainer;

@end
