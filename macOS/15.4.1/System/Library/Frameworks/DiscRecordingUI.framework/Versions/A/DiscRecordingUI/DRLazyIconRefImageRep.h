@interface DRLazyIconRefImageRep : NSImageRep {
    void *_iconRef;
    long long _availableSizesMask;
    short _iconTransform;
    void *_private;
    unsigned long long _reserved;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)iconRef;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (BOOL)_isValid;
- (long long)_uncachedSize;
- (BOOL)draw;
- (BOOL)drawAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (void)setPixelsHigh:(long long)a0;
- (void)setPixelsWide:(long long)a0;
- (BOOL)_drawFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 alpha:(float)a3 compositing:(BOOL)a4 flipped:(BOOL)a5;
- (BOOL)_loadIconRef;
- (unsigned long long)availableSizesMask;
- (short)iconTransform;
- (id)initWithSystemIcon:(long long)a0;
- (void)setIconTransform:(short)a0;

@end
