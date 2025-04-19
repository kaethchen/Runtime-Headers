@class NSView;

@interface CPKBaseMatrix : NSMatrix {
    struct CGImage { } *_fadeoutMaskImage;
}

@property NSView *clippingView;
@property int fadeoutEdge;
@property struct CGPoint { double x; double y; } clickedMouseLoc;

- (void)dealloc;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (id)AXDescriptionForCell:(id)a0;
- (struct CGImage { } *)_createFadeoutMaskImage:(struct CGSize { double x0; double x1; })a0;
- (BOOL)clickShouldBeIgnored;

@end
