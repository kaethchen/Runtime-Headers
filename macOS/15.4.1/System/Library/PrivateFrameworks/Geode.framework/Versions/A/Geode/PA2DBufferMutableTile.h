@class NSData;

@interface PA2DBufferMutableTile : PFCopyOnWriteInterest {
    BOOL _isEmpty;
    int _format;
    struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } _bounds;
    long long _bytesPerRow;
    NSData *_fill;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)bytesPerRow;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })bounds;
- (void)readBytes:(id /* block */)a0;
- (void)writeBytes:(id /* block */)a0;
- (id)_copyObject:(id)a0;
- (id)initWithEmptyData:(id)a0 bounds:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1 bytesPerRow:(long long)a2 format:(int)a3 fill:(id)a4;
- (id)newMutableDataWithLength:(unsigned long long)a0;
- (id)newTileWithBounds:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 bytesPerRow:(long long)a1;
- (void)readBytesAt:(struct PFIntPoint_st { long long x0; long long x1; })a0 block:(id /* block */)a1;
- (void)writeBytesAt:(struct PFIntPoint_st { long long x0; long long x1; })a0 block:(id /* block */)a1;

@end
