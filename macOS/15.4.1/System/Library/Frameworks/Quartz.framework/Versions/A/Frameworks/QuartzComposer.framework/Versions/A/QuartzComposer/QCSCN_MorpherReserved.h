@class NSString, NSMutableDictionary, NSMutableArray;

@interface QCSCN_MorpherReserved : NSObject {
    struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DMorph *x1; } *_morpher;
    BOOL _normalized;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *_sceneRef;
    unsigned char _presentationInstance : 1;
    NSMutableDictionary *_animations;
    NSMutableArray *_weights;
    NSString *_name;
    NSString *_identifier;
}

- (void)dealloc;
- (void)finalize;

@end
