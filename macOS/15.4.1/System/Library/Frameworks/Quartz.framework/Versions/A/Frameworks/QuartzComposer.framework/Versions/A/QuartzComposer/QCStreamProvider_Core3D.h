@interface QCStreamProvider_Core3D : QCStreamProvider {
    struct __C3DGeometry { } *_provider;
    int _meshComponent;
    unsigned long long _count;
    unsigned long long _elementSize;
    int _type;
}

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (BOOL)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)count;
- (int)type;
- (id)pixelFormat;
- (unsigned long long)elementSize;
- (id)createArrayMemObjectForManager:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)createImage2DMemObjectForManager:(id)a0 withFormat:(id)a1 options:(id)a2;
- (id)initWithC3DGeometry:(struct __C3DGeometry { } *)a0 options:(id)a1;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;

@end
