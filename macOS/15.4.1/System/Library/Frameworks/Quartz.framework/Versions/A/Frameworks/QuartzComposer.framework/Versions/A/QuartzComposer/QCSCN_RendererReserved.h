@class QCSCN_Node, QCSCN_Scene, NSLock, NSColor;

@interface QCSCN_RendererReserved : NSObject {
    QCSCN_Scene *_scene;
    double _currentTime;
    double _lastTime;
    double _nextFrameTime;
    BOOL _playing;
    BOOL _loops;
    id _delegate;
    id _cameraModifier;
    void *_glContext;
    struct __C3DFXRenderTarget { } *_offscreenDepthTarget;
    struct __C3DFXRenderTarget { } *_offscreenColorTarget;
    struct __C3DFramebuffer { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; unsigned int x2[10]; int x3; struct __C3DTexture *x4[10]; int x5; struct C3DVector2 { union { double x0[2]; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { double x0; double x1; } x3; } x0; } x6; BOOL x7; } *_offscreenFrameBuffer;
    struct __C3DFXRenderTarget { } *_offscreenTextureTarget;
    struct __C3DFramebuffer { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; unsigned int x2[10]; int x3; struct __C3DTexture *x4[10]; int x5; struct C3DVector2 { union { double x0[2]; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { double x0; double x1; } x3; } x0; } x6; BOOL x7; } *_offscreenSecondaryFrameBuffer;
    BOOL _rendersOffscreen;
    BOOL _offscreenUsesMultisamples;
    BOOL _jitteringEnabled;
    NSColor *_backgroundColor;
    struct C3DColor4 { union { float rgba[4]; struct { float r; float g; float b; float a; } ; } ; } _vecColor;
    void *_offscreenGLContext;
    BOOL _warmUpResourcesWhenLoadingScene;
    BOOL _privateRenderer;
    struct __C3DEngineAdaptor { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __C3DEngineContext *x2; void *x3; } *_engine;
    QCSCN_Node *_pointOfView;
    NSLock *_lock;
}

- (void)dealloc;
- (void)finalize;
- (void)cleanup;

@end
