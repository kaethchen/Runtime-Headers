@interface VFXFloor : VFXModel {
    unsigned char _isPresentationObject : 1;
    unsigned char _usesCustomScaleFactor : 1;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    unsigned long long _reflectionCategoryBitMask;
    float _width;
    float _length;
    float _reflectionResolutionScaleFactor;
    unsigned long long _reflectionSampleCount;
}

@property (nonatomic) float reflectivity;
@property (nonatomic) float reflectionFalloffStart;
@property (nonatomic) float reflectionFalloffEnd;
@property (nonatomic) unsigned long long reflectionCategoryBitMask;
@property (nonatomic) float width;
@property (nonatomic) float length;
@property (nonatomic) float reflectionResolutionScaleFactor;

+ (BOOL)supportsSecureCoding;
+ (id)floor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)height;
- (void)setHeight:(float)a0;
- (void)_syncObjCModel;
- (struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (struct __CFXFloor { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; unsigned long long x9; } *)floorRef;
- (id)initWithFloorGeometryRef:(struct __CFXFloor { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; unsigned long long x9; } *)a0;
- (unsigned long long)reflectionSampleCount;
- (void)setReflectionSampleCount:(unsigned long long)a0;
- (void)_customDecodingOfVFXFloor:(id)a0;

@end
