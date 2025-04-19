@interface NSSnappingInfo : NSObject {
    struct CGSnappingInfo { } *_snappingInfo;
}

@property (readonly) struct CGSnappingInfo { } *CGSnappingInfo;

+ (id)snappingInfoWithWindowNumber:(long long)a0;

- (void)dealloc;
- (struct CGPoint { double x0; double x1; })currentVelocity;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastSnappedRect;
- (void)addMovementWithMouseLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (id)initWithWindowNumber:(long long)a0;
- (void)resetMovement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sizeSnapRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snappedEdges:(unsigned long long)a1;
- (void)snapFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forResizingWithNewFramePointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 rectEdge:(unsigned int)a2;
- (void)snapOriginWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFramePointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (unsigned long long)snappedEdges;

@end
