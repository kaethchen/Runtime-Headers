@class NSString, NSBezierPath, NSFont;

@interface VFXText : VFXModel {
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    NSBezierPath *_chamferProfile;
    long long _primitiveType;
    id _string;
    NSFont *_font;
    BOOL _wrapped;
    int _alignmentMode;
    int _truncationMode;
    BOOL _useCustomContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _customContainerFrame;
    BOOL __wantsSeparateGeometryElements;
}

@property (nonatomic) float extrusionDepth;
@property (copy, nonatomic) id string;
@property (retain, nonatomic) NSFont *font;
@property (nonatomic, getter=isWrapped) BOOL wrapped;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSize;
@property (copy, nonatomic) NSString *truncationMode;
@property (copy, nonatomic) NSString *alignmentMode;
@property (nonatomic) float chamferRadius;
@property (copy, nonatomic) NSBezierPath *chamferProfile;
@property (nonatomic) float flatness;

+ (BOOL)supportsSecureCoding;
+ (id)text;
+ (id)textWithString:(id)a0 extrusionDepth:(float)a1;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)primitiveType;
- (void)setPrimitiveType:(long long)a0;
- (struct { struct { char x0; float x1; float x2; int x3; float x4; void *x5; void *x6; } x0; void *x1; void *x2; int x3; int x4; BOOL x5; BOOL x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; float x8; })params;
- (id)presentationModel;
- (BOOL)getBoundingSphereCenter:(void *)a0 radius:(float *)a1;
- (BOOL)getBoundingBoxMin:(void *)a0 max:(void *)a1;
- (void)_syncObjCModel:(struct __CFXTextGeometry { struct __CFXShapeGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __CFXMesh *x2; unsigned char x3[32]; } x0; struct { struct __CTFrame *x0; void *x1; void *x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; } x1; } *)a0;
- (struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *)__createCFObject;
- (void)_setupObjCModelFrom:(id)a0;
- (BOOL)_wantsSeparateGeometryElements;
- (id)copyAnimationPathForKeyPath:(id)a0 animation:(id)a1;
- (float)discretizedStraightLineMaxLength;
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __CFXTextGeometry { struct __CFXShapeGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __CFXMesh *x2; unsigned char x3[32]; } x0; struct { struct __CTFrame *x0; void *x1; void *x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; } x1; } *)a0;
- (id)initWithTextGeometryRef:(struct __CFXTextGeometry { struct __CFXShapeGeometry { struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } x0; struct { char x0; float x1; float x2; float x3; int x4; float x5; struct CGPath *x6; void *x7; struct CGPath *x8; void *x9; } x1; struct __CFXMesh *x2; unsigned char x3[32]; } x0; struct { struct __CTFrame *x0; void *x1; void *x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; } x1; } *)a0;
- (id)patchFont:(id)a0;
- (void)setDiscretizedStraightLineMaxLength:(float)a0;
- (void)set_wantsSeparateGeometryElements:(BOOL)a0;
- (void)_customDecodingOfVFXText:(id)a0;
- (void)_customEncodingOfVFXText:(id)a0;

@end
