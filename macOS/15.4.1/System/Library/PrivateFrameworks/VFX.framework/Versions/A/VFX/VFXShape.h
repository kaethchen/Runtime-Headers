@class NSBezierPath;

@interface VFXShape : VFXModel {
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    NSBezierPath *_chamferProfile;
    long long _primitiveType;
    long long _chamferMode;
    NSBezierPath *_path;
}

@property (copy, nonatomic) NSBezierPath *path;
@property (nonatomic) float extrusionDepth;
@property (nonatomic) long long chamferMode;
@property (nonatomic) float chamferRadius;
@property (copy, nonatomic) NSBezierPath *chamferProfile;

+ (BOOL)supportsSecureCoding;
+ (id)shapeWithPath:(id)a0 extrusionDepth:(float)a1;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)a0;
- (struct { char x0; float x1; float x2; int x3; float x4; void *x5; void *x6; })params;
- (id)presentationModel;
- (BOOL)getBoundingSphereCenter:(void *)a0 radius:(float *)a1;
- (BOOL)getBoundingBoxMin:(void *)a0 max:(void *)a1;
- (void)_syncObjCModel:(struct __CFXShapeGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __CFXMesh *x2; unsigned char x3[32]; } *)a0;
- (struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (float)discretizedStraightLineMaxLength;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __CFXShapeGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __CFXMesh *x2; unsigned char x3[32]; } *)a0;
- (void)setDiscretizedStraightLineMaxLength:(float)a0;
- (void)_customDecodingOfVFXShape:(id)a0;
- (void)_customEncodingOfVFXShape:(id)a0;
- (id)initWithShapeGeometryRef:(struct __CFXShapeGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __CFXMesh *x2; unsigned char x3[32]; } *)a0;

@end
