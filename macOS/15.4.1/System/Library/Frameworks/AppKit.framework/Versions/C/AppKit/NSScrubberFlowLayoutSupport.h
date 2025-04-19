@class NSMutableIndexSet, NSScrubberFlowLayout;

@interface NSScrubberFlowLayoutSupport : NSObject {
    id _layout;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_frames;
    long long _frameCount;
    NSMutableIndexSet *_dirtyIndexes;
}

@property (weak, nonatomic) NSScrubberFlowLayout *scrubberLayout;
@property (readonly) double contentWidth;
@property BOOL dynamicSizes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)_indexOfItemAtLocation:(double)a0;
- (void)ensureValidLayout;
- (void)enumerateFramesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (void)invalidateEverything;
- (void)invalidateItemsAtIndexes:(id)a0;

@end
