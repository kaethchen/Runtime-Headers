@class NUViewGeometry;

@interface NUClipView : NSClipView

@property (nonatomic) BOOL shouldCenterContent;
@property (retain, nonatomic) NUViewGeometry *geometry;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
