@class NSString, NSMutableDictionary;

@interface QCSCN_LightReserved : NSObject {
    struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x5; BOOL x6; BOOL x7; float x8; double x9; double x10; struct *x11; } *_light;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *_sceneRef;
    unsigned char _presentationInstance : 1;
    NSMutableDictionary *_animations;
    NSString *_name;
    NSString *_identifier;
    NSString *_type;
    id _color;
    id _shadowColor;
    float _softenFactor;
    double _zNear;
    double _zFar;
    float _fresnelExponent;
    struct _SCNVector3 { double x; double y; double z; } _fresnelBias;
    struct _SCNVector3 { double x; double y; double z; } _fresnelDirection;
    BOOL _castsShadow;
    float _attenuations[6];
}

- (void)dealloc;
- (void)finalize;

@end
