@class NSString, PABuffer, PAMutableBuffer;

@interface PA2DBufferBackingTile : NSObject <PAImageTile, PAMutableImageTile>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tileRect;
@property (retain) PABuffer *buffer;
@property (retain) PAMutableBuffer *mutableBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)readBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)writeBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)readTextureRegion:(id)a0 withContext:(id)a1 block:(id /* block */)a2;
- (BOOL)writeTextureRegion:(id)a0 withContext:(id)a1 block:(id /* block */)a2;

@end
