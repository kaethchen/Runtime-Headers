@class NSString, PA2DBuffer;

@interface PABufferImageBackingTile : NSObject <PAImageTile> {
    PA2DBuffer *_buffer;
    unsigned long long _tileIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)readBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })_tileBounds;
- (id)initWithBuffer:(id)a0 tileIndex:(unsigned long long)a1;
- (BOOL)readTextureRegion:(id)a0 withContext:(id)a1 block:(id /* block */)a2;

@end
