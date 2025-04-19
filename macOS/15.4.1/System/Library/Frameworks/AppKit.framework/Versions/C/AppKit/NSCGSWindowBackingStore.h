@class NSCGSWindowBuffer;

@interface NSCGSWindowBackingStore : NSObject

@property (readonly) NSCGSWindowBuffer *backBuffer;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) double scale;
@property (copy) struct CGColorSpace { } *colorSpace;
@property unsigned int depth;
@property (getter=isOpaque) BOOL opaque;
@property BOOL keepsExcessAllocation;

- (void)defineBackBufferInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)defineBackBufferInRegion:(struct CGSRegionObject { } *)a0;
- (void)dirtyBackBufferInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dirtyBackBufferInRegion:(struct CGSRegionObject { } *)a0;
- (void)flushBackBufferInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flushBackBufferInRegion:(struct CGSRegionObject { } *)a0;
- (struct CGImage { } *)imageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateAlphaShape;
- (void)lockBackBuffer;
- (struct CGContext { } *)makeDrawingContext;
- (void)unlockBackBuffer;

@end
