@interface _UXSourceSplitViewShadowView : NSView

@property (nonatomic) double shadowRevealAmount;
@property (nonatomic) unsigned long long shadowEdge;

- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)makeShadowImage;

@end
