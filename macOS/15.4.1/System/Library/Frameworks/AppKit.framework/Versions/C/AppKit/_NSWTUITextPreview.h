@interface _NSWTUITextPreview : NSObject

@property struct CGImage { } *previewImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationFrame;
@property struct CGColor { } *backgroundColor;
@property struct CGPath { } *clippingPath;
@property double scale;

- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 backgroundColor:(struct CGColor { } *)a2 clippingPath:(struct CGPath { } *)a3 scale:(double)a4;

@end
