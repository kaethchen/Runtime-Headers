@class NSData, NSString;
@protocol MTLBuffer;

@interface VFXMeshSource : NSObject <NSSecureCoding> {
    struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    short _componentType;
    unsigned short _componentCount;
    struct CGColorSpace { } *_colorSpace;
    long long _dataOffset;
    long long _dataStride;
    unsigned char _mkSemantic;
    id<MTLBuffer> _mtlBuffer;
    long long _mtlVertexFormat;
    BOOL _encodeDataAsHalf;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *semantic;
@property (readonly, nonatomic) long long vectorCount;
@property (readonly, nonatomic) BOOL floatComponents;
@property (readonly, nonatomic) long long componentsPerVector;
@property (readonly, nonatomic) long long bytesPerComponent;
@property (readonly, nonatomic) long long dataOffset;
@property (readonly, nonatomic) long long dataStride;

+ (id)dataWithPointArray:(const struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1 bytesPerComponent:(long long *)a2;
+ (id)dataWithVector3Array:(const void *)a0 count:(long long)a1 bytesPerComponent:(long long *)a2;
+ (id)geometrySourceWithColorData:(id)a0 colorSpace:(struct CGColorSpace { } *)a1 vectorCount:(long long)a2 floatComponents:(BOOL)a3 componentsPerVector:(long long)a4 bytesPerComponent:(long long)a5 dataOffset:(long long)a6 dataStride:(long long)a7;
+ (id)dataByConvertingDoublesToFloats:(const double *)a0 count:(long long)a1;
+ (id)geometrySourceWithColorComponents:(const float *)a0 count:(long long)a1 hasAlpha:(BOOL)a2 colorSpace:(struct CGColorSpace { } *)a3;
+ (id)geometrySourceWithMDLVertexAttribute:(id)a0 mesh:(id)a1;
+ (id)geometrySourceWithMeshSourceRef:(struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a0;
+ (id)_modelSourceWithData:(id)a0 semantic:(id)a1 vectorCount:(long long)a2 componentType:(short)a3 componentCount:(unsigned long long)a4 dataOffset:(long long)a5 dataStride:(long long)a6;
+ (id)_modelSourceWithSource:(id)a0 vertexFormat:(unsigned long long)a1;
+ (id)meshSourceWithBuffer:(id)a0 vertexFormat:(unsigned long long)a1 semantic:(id)a2 vertexCount:(long long)a3 dataOffset:(long long)a4 dataStride:(long long)a5;
+ (id)meshSourceWithData:(id)a0 semantic:(id)a1 vectorCount:(long long)a2 floatComponents:(BOOL)a3 componentsPerVector:(long long)a4 bytesPerComponent:(long long)a5 dataOffset:(long long)a6 dataStride:(long long)a7;
+ (id)meshSourceWithNormals:(const void *)a0 count:(long long)a1;
+ (id)meshSourceWithTextureCoordinates:(const struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1;
+ (id)meshSourceWithVertices:(const void *)a0 count:(long long)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableData;
- (id)world;
- (void *)__CFObject;
- (id)initWithMeshSource:(struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a0;
- (struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)meshSource;
- (short)_componentType;
- (BOOL)_encodeDataAsHalf;
- (void)_printData;
- (id)_uninterleaveData:(id)a0 count:(unsigned long long)a1 srcOffset:(unsigned long long)a2 srcStride:(unsigned long long)a3 dstStride:(unsigned long long)a4;
- (id)dataByConvertingColorData:(id)a0 colorSpace:(struct CGColorSpace { } *)a1 newColorSpace:(struct CGColorSpace **)a2 vectorCount:(long long)a3 componentsPerVector:(long long)a4 bytesPerComponent:(long long)a5 dataOffset:(long long)a6 dataStride:(long long)a7 newDataOffset:(long long *)a8 newDataStride:(long long *)a9;
- (id)initWithBuffer:(id)a0 vertexFormat:(unsigned long long)a1 semantic:(id)a2 vertexCount:(long long)a3 dataOffset:(long long)a4 dataStride:(long long)a5;
- (id)initWithData:(id)a0 semantic:(id)a1 colorSpace:(struct CGColorSpace { } *)a2 vectorCount:(long long)a3 floatComponents:(BOOL)a4 componentsPerVector:(long long)a5 bytesPerComponent:(long long)a6 dataOffset:(long long)a7 dataStride:(long long)a8;
- (id)initWithData:(id)a0 semantic:(id)a1 vectorCount:(long long)a2 componentType:(short)a3 componentCount:(unsigned long long)a4 dataOffset:(long long)a5 dataStride:(long long)a6;
- (id)mkSemantic;
- (void)setMkSemantic:(id)a0;
- (void)set_encodeDataAsHalf:(BOOL)a0;
- (void)_clearCFXCache;
- (struct __CFXWorld { } *)worldRef;

@end
