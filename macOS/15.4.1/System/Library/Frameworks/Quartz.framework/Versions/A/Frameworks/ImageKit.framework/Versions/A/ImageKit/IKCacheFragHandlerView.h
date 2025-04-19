@class NSTimer, IKCacheFragHandler;

@interface IKCacheFragHandlerView : NSView {
    IKCacheFragHandler *_cacheFragHandler;
    NSTimer *_timer;
    unsigned int _rowLength;
    unsigned int _rowHeight;
}

- (void)dealloc;
- (void)finalize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAutoUpdate;
- (void)_convertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toPosition:(unsigned int *)a1;
- (id)cacheFragHandler;
- (void)drawFragmentationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPosition:(unsigned int *)a1 andLength:(unsigned long long)a2;
- (void)redisplay;
- (unsigned int)rowLength;
- (void)setCacheFragHandler:(id)a0;
- (void)setRowLength:(unsigned int)a0;
- (void)stopAutoUpdate;

@end
