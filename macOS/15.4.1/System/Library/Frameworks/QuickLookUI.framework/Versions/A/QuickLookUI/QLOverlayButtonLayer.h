@class CALayer, NSImage;

@interface QLOverlayButtonLayer : QLOverlayBaseButtonLayer {
    CALayer *_imageLayer;
    NSImage *_image;
}

@property BOOL enabled;
@property (retain) id image;
@property struct CGSize { double width; double height; } imageOffset;

- (id)init;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)_beginMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_enableClickAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_endMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
