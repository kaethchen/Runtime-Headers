@class NSArray;

@interface VFXParametricModel : VFXModel {
    long long _type;
    float _width;
    float _height;
    float _length;
    float _radius;
    float _chamferRadius;
    float _topRadius;
    float _pipeRadius;
    float _innerRadius;
    long long _segmentCount;
    long long _widthSegmentCount;
    long long _heightSegmentCount;
    long long _lengthSegmentCount;
    long long _chamferSegmentCount;
    long long _cornerSegmentCount;
    long long _pipeSegmentCount;
    long long _capSegmentCount;
    long long _radialSegmentCount;
    float _radialSpan;
    BOOL _spheregeodesic;
    BOOL _spherehemispheric;
    long long _primitiveType;
}

@property (nonatomic, readonly) NSArray *bridgedComponentNames;
@property (nonatomic) long long parametricType;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float length;
@property (nonatomic) long long widthSegmentCount;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long lengthSegmentCount;
@property (nonatomic) float cornerRadius;
@property (nonatomic) long long cornerSegmentCount;
@property (nonatomic) float chamferRadius;
@property (nonatomic) long long chamferSegmentCount;
@property (nonatomic) float radius;
@property (nonatomic, getter=isGeodesic) BOOL geodesic;
@property (nonatomic) long long segmentCount;
@property (nonatomic) long long radialSegmentCount;
@property (nonatomic) float topRadius;
@property (nonatomic) float innerRadius;
@property (nonatomic) long long capSegmentCount;
@property (nonatomic) float pipeRadius;
@property (nonatomic) long long pipeSegmentCount;
@property (nonatomic, getter=isHemispheric) BOOL hemispheric;
@property (nonatomic) float radialSpan;

+ (BOOL)supportsSecureCoding;
+ (id)pyramidWithWidth:(float)a0 height:(float)a1 length:(float)a2;
+ (id)torusWithRingRadius:(float)a0 pipeRadius:(float)a1;
+ (id)capsuleWithCapRadius:(float)a0 height:(float)a1;
+ (id)coneWithTopRadius:(float)a0 bottomRadius:(float)a1 height:(float)a2;
+ (id)cylinderWithRadius:(float)a0 height:(float)a1;
+ (id)planeWithWidth:(float)a0 height:(float)a1;
+ (id)sphereWithRadius:(float)a0;
+ (id)tubeWithInnerRadius:(float)a0 outerRadius:(float)a1 height:(float)a2;
+ (id)cubeWithWidth:(float)a0 height:(float)a1 length:(float)a2 chamferRadius:(float)a3;
+ (id)unitCube;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)a0;
- (id)mesh;
- (void)_notifyModelChanged;
- (id)presentationModel;
- (BOOL)getBoundingSphereCenter:(void *)a0 radius:(float *)a1;
- (void)_syncObjCModel;
- (BOOL)getBoundingBoxMin:(void *)a0 max:(void *)a1;
- (void)_syncObjCModel:(struct __CFXParametricGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; unsigned int x19; } x1; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x2; struct __CFData *x3; } *)a0;
- (struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (void)_setupObjCModelFrom:(id)a0;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (BOOL)geodesic;
- (int)_sphereType;
- (void)_updateSphereType;
- (id)initPresentationParametricModelWithParametricGeometryRef:(struct __CFXParametricGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; unsigned int x19; } x1; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x2; struct __CFData *x3; } *)a0;
- (id)initUninitialized;
- (id)initWithDefaultMaterial;

@end
