@class NSString, NSMutableDictionary, QCSCN_MaterialProperty, QCSCN_Program;

@interface QCSCN_MaterialReserved : NSObject {
    struct __C3DMaterial { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DEffect *x1; } *_material;
    QCSCN_MaterialProperty *_ambient;
    QCSCN_MaterialProperty *_diffuse;
    QCSCN_MaterialProperty *_specular;
    QCSCN_MaterialProperty *_emission;
    QCSCN_MaterialProperty *_reflective;
    QCSCN_MaterialProperty *_transparent;
    QCSCN_MaterialProperty *_multiply;
    QCSCN_MaterialProperty *_normal;
    struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *_sceneRef;
    unsigned char _presentationInstance : 1;
    NSMutableDictionary *_animations;
    NSString *_name;
    NSString *_identifier;
    float _shininess;
    float _transparency;
    int _transparencyMode;
    NSString *_lightingModel;
    BOOL _perPixelLit;
    BOOL _doubleSided;
    int _cullMode;
    id _shader;
    QCSCN_Program *_program;
    BOOL _locksAmbientWithDiffuse;
    BOOL _avoidsOverLighting;
    BOOL _writeToDepth;
}

- (void)dealloc;
- (void)finalize;

@end
