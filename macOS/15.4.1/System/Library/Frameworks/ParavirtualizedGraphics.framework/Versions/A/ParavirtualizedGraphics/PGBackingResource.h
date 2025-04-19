@class NSArray, IOSurface;
@protocol MTLBuffer, PGTask_Resource;

@interface PGBackingResource : PGResource {
    id<PGTask_Resource> _task;
    unsigned int _planeCount;
    struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *_planes;
    id<MTLBuffer> _transferBuffer;
    unsigned long long _backingAllocationLength;
    unsigned int _backingVirtualPage;
}

@property (readonly) IOSurface *ioSurface;
@property (readonly) NSArray *textures;

+ (unsigned long long)pixelFormatForBacking:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *)a0;
+ (BOOL)validateBackingDescriptor:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned char x3; } *)a0 srcPlanes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *)a1 destPlanes:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *)a2 planeCount:(unsigned int)a3 backingAllocationLength:(unsigned long long)a4;

- (void)dealloc;
- (void)discard;
- (void)ensurePhysical;
- (id)getIOSurface;
- (id)initWithTask:(id)a0 descriptor:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned char x3; } *)a1 planes:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 : 24; unsigned char x4 : 8; } *)a2 planeCount:(unsigned int)a3;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
