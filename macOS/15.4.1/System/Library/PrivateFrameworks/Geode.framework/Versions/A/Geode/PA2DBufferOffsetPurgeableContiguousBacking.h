@interface PA2DBufferOffsetPurgeableContiguousBacking : PA2DBufferPurgeableContiguousBacking {
    long long _offset;
}

+ (unsigned long long)bufferLengthFor:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)_newCopyOnWriteHandler;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)forEachMutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3 colorSpace:(struct CGColorSpace { } *)a4 data:(id)a5 offset:(long long)a6;
- (id)newBufferData:(unsigned long long)a0;

@end
