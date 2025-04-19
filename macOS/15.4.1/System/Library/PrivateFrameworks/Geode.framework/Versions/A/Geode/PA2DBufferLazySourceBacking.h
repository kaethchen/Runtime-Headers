@class NSString, PA2DMutablePurgeableBuffer;
@protocol PA2DBufferLazySource;

@interface PA2DBufferLazySourceBacking : NSObject <PA2DPurgeableBufferBacking> {
    struct vector<PFIntRect_st, std::allocator<PFIntRect_st>> { struct PFIntRect_st *__begin_; struct PFIntRect_st *__end_; struct __compressed_pair<PFIntRect_st *, std::allocator<PFIntRect_st>> { struct PFIntRect_st *__value_; } __end_cap_; } _tileList;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _localTileState;
    PA2DMutablePurgeableBuffer *_cacheBuffer;
    struct PFIntSize_st { unsigned long long width; unsigned long long height; } _tileSize;
    unsigned long long _tilesWide;
}

@property (retain) id<PA2DBufferLazySource> source;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)height;
- (unsigned long long)width;
- (int)format;
- (unsigned long long)tileCount;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 tileSize:(unsigned long long)a2 :(unsigned long long)a3 source:(id)a4;
- (void)_forEachTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 block:(id /* block */)a1;
- (void)_fulfillPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 emptyProcessor:(id /* block */)a1;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 refillProcessor:(id /* block */)a1;
- (id)cacheBuffer;
- (void)endAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)forEachMutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)getPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (BOOL)localTileStateAtIndex:(unsigned long long)a0;
- (void)setPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 srcPtr:(const void *)a1 srcPtrRowBytes:(long long)a2;
- (void)setPurgeLevel:(int)a0 forROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })tileBoundsAtIndex:(unsigned long long)a0;
- (unsigned long long)tilesWide;

@end
