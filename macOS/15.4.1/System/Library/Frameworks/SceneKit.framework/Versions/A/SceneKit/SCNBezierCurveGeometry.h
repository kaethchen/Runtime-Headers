@interface SCNBezierCurveGeometry : SCNGeometry {
    struct CGPath { } *_cgPath;
    struct { void /* unknown type, empty encoding */ columns[4]; } _curveToGeometryTransform;
}

@property (readonly) struct CGPath { } *CGPath;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)a0;
- (id)geometryElementAtIndex:(long long)a0;
- (long long)geometryElementCount;
- (id)geometrySourcesForSemantic:(id)a0;
- (id)presentationGeometry;
- (id)geometrySources;
- (id)initWithCGPath:(struct CGPath { } *)a0;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; struct *x8; struct *x9; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x10; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x11; unsigned char x12; } *)__createCFObject;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)geometryElements;
- (id)geometrySourceChannels;
- (id)initWithCGPath:(struct CGPath { } *)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
