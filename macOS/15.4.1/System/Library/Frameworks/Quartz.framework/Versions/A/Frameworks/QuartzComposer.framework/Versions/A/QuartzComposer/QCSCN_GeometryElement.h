@class NSData;

@interface QCSCN_GeometryElement : NSObject {
    id _reserved;
}

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) int primitiveType;
@property (readonly, nonatomic) long long primitiveCount;
@property (readonly, nonatomic) long long bytesPerIndex;

+ (id)geometryElementWithData:(id)a0 primitiveType:(int)a1 primitiveCount:(long long)a2 bytesPerIndex:(long long)a3;

- (void)dealloc;
- (id)init;
- (id)initWithMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __CFData *x1; unsigned int x2; int x3; unsigned int x4; BOOL x5; struct __C3DMeshSource *x6; struct _SCNVector3 { double x0; double x1; double x2; } x7[2]; unsigned int x8; } *)a0;
- (struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __CFData *x1; unsigned int x2; int x3; unsigned int x4; BOOL x5; struct __C3DMeshSource *x6; struct _SCNVector3 { double x0; double x1; double x2; } x7[2]; unsigned int x8; } *)meshElement;

@end
