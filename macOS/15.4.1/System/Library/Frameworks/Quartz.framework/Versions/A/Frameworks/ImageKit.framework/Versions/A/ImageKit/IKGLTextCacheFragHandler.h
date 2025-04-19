@class IKCacheFragHandler;

@interface IKGLTextCacheFragHandler : NSObject {
    IKCacheFragHandler *_fragHandler;
    int _maxLineHeight;
    struct CGSize { double width; double height; } _currentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _usedSpace;
}

- (void)dealloc;
- (void)reset;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertPos:(unsigned int)a0 AndLen:(unsigned int)a1;
- (void)_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toPos:(unsigned int *)a1 andLen:(unsigned int *)a2;
- (void)_resetFragHandlerWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })allocateSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectOfUsedSpace;
- (BOOL)canAllocateSize:(struct CGSize { double x0; double x1; })a0;
- (id)fragHandler;
- (BOOL)freeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)maxLineHeight;
- (void)resetCacheWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxLineHeight:(int)a0;

@end
