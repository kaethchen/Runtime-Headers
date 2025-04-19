@interface PA2DBufferPurgeableTile : PA2DBufferMutableTile {
    int _pendingPurgeLevel;
    unsigned long long _accessCount;
    unsigned long long _appliedAccessCount;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)beginAccess;
- (void)endAccess;
- (unsigned long long)accessCount;
- (id)_copyObject:(id)a0;
- (void)beginAccess:(id /* block */)a0;
- (id)initWithEmptyData:(id)a0 bounds:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1 bytesPerRow:(long long)a2 format:(int)a3 fill:(id)a4;
- (id)newMutableDataWithLength:(unsigned long long)a0;
- (id)newTileWithBounds:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 bytesPerRow:(long long)a1;
- (void)setPurgeLevel:(int)a0;

@end
