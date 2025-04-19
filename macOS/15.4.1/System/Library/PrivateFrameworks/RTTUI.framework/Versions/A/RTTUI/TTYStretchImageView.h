@class NSImage, NSLayoutConstraint;

@interface TTYStretchImageView : NSImageView

@property (retain, nonatomic) NSImage *topLeft;
@property (retain, nonatomic) NSImage *top;
@property (retain, nonatomic) NSImage *topRight;
@property (retain, nonatomic) NSImage *left;
@property (retain, nonatomic) NSImage *center;
@property (retain, nonatomic) NSImage *right;
@property (retain, nonatomic) NSImage *bottomLeft;
@property (retain, nonatomic) NSImage *bottom;
@property (retain, nonatomic) NSImage *bottomRight;
@property (weak, nonatomic) NSLayoutConstraint *widthConstraint;

+ (id)imageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromImage:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 withInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
