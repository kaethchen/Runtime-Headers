@class QCSCN_Geometry;

@interface QCSCN_Skinner : NSObject {
    struct __C3DSkinner { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSkin *x1; struct __C3DNode *x2; struct __CFArray *x3; struct C3DMatrix4x4 *x4; struct C3DMatrix4x4 *x5; BOOL x6; BOOL x7; BOOL x8; struct _SCNVector4 *x9; BOOL x10; BOOL x11; } *_skinner;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *_sceneRef;
}

@property (retain, nonatomic) QCSCN_Geometry *skinGeometry;

+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSkin *x1; struct __C3DNode *x2; struct __CFArray *x3; struct C3DMatrix4x4 *x4; struct C3DMatrix4x4 *x5; BOOL x6; BOOL x7; BOOL x8; struct _SCNVector4 *x9; BOOL x10; BOOL x11; } *)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (id)skeleton;
- (int)countOfJoints;
- (id)initWithSkinnerRef:(struct __C3DSkinner { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSkin *x1; struct __C3DNode *x2; struct __CFArray *x3; struct C3DMatrix4x4 *x4; struct C3DMatrix4x4 *x5; BOOL x6; BOOL x7; BOOL x8; struct _SCNVector4 *x9; BOOL x10; BOOL x11; } *)a0;
- (id)objectInJointsAtIndex:(unsigned long long)a0;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)sceneRef;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)a0;
- (BOOL)setSkeleton:(id)a0;
- (struct __C3DSkinner { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSkin *x1; struct __C3DNode *x2; struct __CFArray *x3; struct C3DMatrix4x4 *x4; struct C3DMatrix4x4 *x5; BOOL x6; BOOL x7; BOOL x8; struct _SCNVector4 *x9; BOOL x10; BOOL x11; } *)skinnerRef;

@end
