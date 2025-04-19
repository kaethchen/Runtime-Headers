@interface AKPopoverColorWell : NSPopoverColorWell

@property double colorWellHeight;

+ (id)_bezelRenderingButton;

- (id)initWithCoder:(id)a0;
- (void)drawColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)mouseDown:(id)a0;
- (id)borderPath;

@end
