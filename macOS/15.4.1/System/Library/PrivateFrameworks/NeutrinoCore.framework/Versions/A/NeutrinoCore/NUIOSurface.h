@class IOSurface, NSString, NSMutableDictionary, NUPixelFormat;

@interface NUIOSurface : NSObject {
    NSMutableDictionary *_textures;
    struct __CVBuffer { } *_pixelBuffer;
}

@property (readonly, nonatomic) struct __IOSurface { } *IOSurfaceRef;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) long long sizeInBytes;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)write:(id /* block */)a0;
- (id)debugQuickLookObject;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (BOOL)read:(id /* block */)a0;
- (BOOL)isPurged;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_allocateSurface;
- (int)_fetchPurgeState:(unsigned int *)a0;
- (id)_newTextureForDevice:(id)a0;
- (unsigned int)_purgeLevelToOSValue:(long long)a0;
- (id)_purgeStateDescription;
- (void)debugDump:(id)a0;
- (void)invalidatePixelBuffer;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable:(long long)a0;
- (id)newRenderDestination;
- (id)textureForDevice:(id)a0;

@end
