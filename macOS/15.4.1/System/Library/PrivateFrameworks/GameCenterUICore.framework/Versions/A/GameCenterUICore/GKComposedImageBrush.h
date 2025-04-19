@class NSImage;

@interface GKComposedImageBrush : GKImageBrush

@property (retain, nonatomic) NSImage *maskImage;
@property (retain, nonatomic) NSImage *backgroundImage;
@property (retain, nonatomic) NSImage *overlayImage;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } maskInsets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 input:(id)a2;
- (double)scaleForInput:(id)a0;

@end
