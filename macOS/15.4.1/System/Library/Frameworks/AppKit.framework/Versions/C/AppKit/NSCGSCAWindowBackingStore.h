@class CALayer, NSCGSWindowBuffer, NSCGSWindow;

@interface NSCGSCAWindowBackingStore : NSCGSWindowBackingStore {
    NSCGSWindow *_window;
    CALayer *_backingStoreLayer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _backBufferMutex;
    NSCGSWindowBuffer *_backBuffer;
    struct CABackingStore { } *_backing;
    struct CGColorSpace { } *_colorSpace;
    unsigned int _depth;
    unsigned char _opaque : 1;
    unsigned char _flushOnUnlock : 1;
    unsigned char _updating : 1;
}

@property (readonly) struct CABackingStore { } *CABackingStore;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)depth;
- (void)setDepth:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (id)backBuffer;
- (struct CGColorSpace { } *)colorSpace;
- (void)defineBackBufferInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)defineBackBufferInRegion:(struct CGSRegionObject { } *)a0;
- (void)dirtyBackBufferInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dirtyBackBufferInRegion:(struct CGSRegionObject { } *)a0;
- (void)flushBackBufferInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)flushBackBufferInRegion:(struct CGSRegionObject { } *)a0;
- (struct CGImage { } *)imageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithWindow:(id)a0 backingStoreLayer:(id)a1;
- (void)invalidateAlphaShape;
- (BOOL)isOpaque;
- (BOOL)keepsExcessAllocation;
- (void)lockBackBuffer;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (void)setKeepsExcessAllocation:(BOOL)a0;
- (void)setOpaque:(BOOL)a0;
- (void)unlockBackBuffer;

@end
