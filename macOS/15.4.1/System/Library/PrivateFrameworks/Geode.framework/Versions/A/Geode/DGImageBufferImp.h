@class NSMutableArray;

@interface DGImageBufferImp : NSObject <NSCopying> {
    unsigned long long _width;
    unsigned long long _height;
    int _format;
    unsigned long long _trueCost;
    unsigned long long _tileSize;
    NSMutableArray *_tiles;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)height;
- (unsigned long long)width;
- (int)format;
- (unsigned long long)tileSize;
- (unsigned long long)tileCount;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })boundsForTileAtIndex:(unsigned long long)a0;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(const void *)a3;
- (id)retainedReadOnlyTileAtIndex:(unsigned long long)a0;
- (id)retainedWriteableTileAtIndex:(unsigned long long)a0;
- (long long)tileRowBytes;
- (unsigned long long)tilesHigh;
- (unsigned long long)tilesWide;
- (unsigned long long)trueCost;

@end
