@class NSData, NSString;

@interface QCSCN_GeometrySource : NSObject {
    id _reserved;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *semantic;
@property (readonly, nonatomic) long long vectorCount;
@property (readonly, nonatomic) BOOL floatComponents;
@property (readonly, nonatomic) long long componentsPerVector;
@property (readonly, nonatomic) long long bytesPerComponent;
@property (readonly, nonatomic) long long dataOffset;
@property (readonly, nonatomic) long long dataStride;

+ (id)dataWithPointArray:(struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1 bytesPerComponent:(long long *)a2;
+ (id)dataWithVector3Array:(struct _SCNVector3 { double x0; double x1; double x2; } *)a0 count:(long long)a1 bytesPerComponent:(long long *)a2;
+ (id)geometrySourceWithData:(id)a0 semantic:(id)a1 vectorCount:(long long)a2 floatComponents:(BOOL)a3 componentsPerVector:(long long)a4 bytesPerComponent:(long long)a5 dataOffset:(long long)a6 dataStride:(long long)a7;
+ (id)geometrySourceWithNormals:(struct _SCNVector3 { double x0; double x1; double x2; } *)a0 count:(long long)a1;
+ (id)geometrySourceWithTextureCoordinates:(struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1;
+ (id)geometrySourceWithVertices:(struct _SCNVector3 { double x0; double x1; double x2; } *)a0 count:(long long)a1;

- (void)dealloc;
- (id)init;
- (int)baseTypeForDataFormat;
- (id)initWithMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSourceAccessor *x1; struct __CFData *x2; BOOL x3; } x0; int x1; unsigned int x2; } *)a0;
- (struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSourceAccessor *x1; struct __CFData *x2; BOOL x3; } x0; int x1; unsigned int x2; } *)meshSource;

@end
