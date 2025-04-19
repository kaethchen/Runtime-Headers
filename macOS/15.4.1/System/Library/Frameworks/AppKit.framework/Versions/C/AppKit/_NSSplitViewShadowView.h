@interface _NSSplitViewShadowView : NSView {
    double _shadowRevealAmount;
}

@property double shadowRevealAmount;
@property unsigned long long shadowEdge;

- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)getShadowImage;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (BOOL)shouldBeArchived;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
