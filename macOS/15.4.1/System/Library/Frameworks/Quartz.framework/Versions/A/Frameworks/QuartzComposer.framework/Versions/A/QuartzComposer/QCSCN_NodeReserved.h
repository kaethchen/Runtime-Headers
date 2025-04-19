@class NSString, QCSCN_Node, QCSCN_Camera, QCSCN_Morpher, NSMutableDictionary, NSMutableArray, QCSCN_Skinner, QCSCN_Light, QCSCN_Geometry;

@interface QCSCN_NodeReserved : NSObject {
    struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DNode *x1; struct __CFArray *x2; struct __C3DSceneID *x3; struct __C3DTransforms *x4; float x5; BOOL x6; struct _SCNVector3 { double x0; double x1; double x2; } x7[2]; struct _SCNVector3 { double x0; double x1; double x2; } x8[2]; struct __C3DTransforms *x9; float x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; } *_node;
    QCSCN_Node *_parent;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *_sceneRef;
    NSMutableArray *_subnodes;
    QCSCN_Light *_light;
    QCSCN_Geometry *_geometry;
    QCSCN_Camera *_camera;
    QCSCN_Skinner *_skinner;
    QCSCN_Morpher *_morpher;
    unsigned char _lightLoaded : 1;
    unsigned char _geometryLoaded : 1;
    unsigned char _cameraLoaded : 1;
    unsigned char _skinnerLoaded : 1;
    unsigned char _morpherLoaded : 1;
    unsigned char _presentationInstance : 1;
    NSMutableDictionary *_animations;
    struct __C3DTransforms { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x1; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x2; struct _SCNVector3 { double x0; double x1; double x2; } x3; struct __C3DRotation *x4; struct _SCNVector3 { double x0; double x1; double x2; } x5; struct __C3DTransforms *x6; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; void *x13; } *_transform;
    float _opacity;
    BOOL _hidden;
    int _renderingOrder;
    NSString *_name;
    NSString *_identifier;
    NSMutableDictionary *_valueForKey;
    id _rendererDelegate;
}

- (void)dealloc;
- (void)finalize;
- (id)init;

@end
