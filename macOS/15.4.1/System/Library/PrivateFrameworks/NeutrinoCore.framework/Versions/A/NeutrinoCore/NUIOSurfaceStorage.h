@class NSString, NUColorSpace, NUIOSurface, NUPixelFormat, NURegion;
@protocol NUDevice;

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage <NUSurfaceStorage, NUPurgeableStorage> {
    long long _purgeLevel;
    BOOL _purgeable;
    NUIOSurface *_surface;
    id<NUDevice> _device;
}

@property (readonly) struct { long long x0; long long x1; } size;
@property (readonly) long long sizeInBytes;
@property (readonly) NUPixelFormat *format;
@property (readonly) NURegion *validRegion;
@property (retain) NUColorSpace *colorSpace;
@property BOOL isDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isPurgeable;
- (BOOL)isInUse;
- (id)initWithSurface:(id)a0;
- (BOOL)isShared;
- (long long)rowBytes;
- (BOOL)decrementUseCount;
- (void)incrementUseCount;
- (int)useCount;
- (BOOL)isPurged;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_allocateSurface;
- (long long)_copyFromIOSurfaceStorage:(id)a0 region:(id)a1 device:(id)a2;
- (void)adjustPurgeLevel:(long long)a0;
- (long long)copyFromStorage:(id)a0 region:(id)a1;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;
- (long long)readBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)readSurfaceInRegion:(id)a0 block:(id /* block */)a1;
- (long long)readTextureInRegion:(id)a0 device:(id)a1 block:(id /* block */)a2;
- (long long)useAsCIImageWithOptions:(id)a0 renderer:(id)a1 block:(id /* block */)a2;
- (long long)useAsCIRenderDestinationWithRenderer:(id)a0 block:(id /* block */)a1;
- (long long)useAsCVPixelBufferWithBlock:(id /* block */)a0;
- (long long)writeBufferInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeSurfaceInRegion:(id)a0 block:(id /* block */)a1;
- (long long)writeTextureInRegion:(id)a0 device:(id)a1 block:(id /* block */)a2;

@end
