@class NSString, NSMutableDictionary;

@interface QCSCN_CameraReserved : NSObject {
    struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct { BOOL x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct C3DMatrix4x4 { union { double x0[16]; double x1[4][4]; } x0; } x8; } x2; float x3; float x4; } *_camera;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *_sceneRef;
    unsigned char _presentationInstance : 1;
    NSMutableDictionary *_animations;
    NSString *_name;
    NSString *_identifier;
    BOOL _ortho;
    double _xFov;
    double _yFov;
    double _xMag;
    double _yMag;
    double _zNear;
    double _zFar;
    double _focalDistance;
    double _aperture;
}

- (void)dealloc;
- (void)finalize;

@end
