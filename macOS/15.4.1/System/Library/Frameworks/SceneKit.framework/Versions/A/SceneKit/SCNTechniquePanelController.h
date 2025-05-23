@class SCNView, SCNTechniquePanel, NSPopUpButton, SCNRenderTargetView;

@interface SCNTechniquePanelController : NSObject {
    SCNView *_3dView;
    SCNTechniquePanel *_panel;
    NSPopUpButton *_passes;
    NSPopUpButton *_target;
    SCNRenderTargetView *_targetView;
}

@property (retain) SCNView *view;

- (void)dealloc;
- (id)init;
- (struct __C3DEngineContext { } *)context;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (id)panel;
- (void)setOpenGLContext:(id)a0;
- (void)selectTarget:(id)a0;
- (void)sceneDidChange;
- (struct __C3DRendererContext { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; unsigned int x7; struct __C3DTexture *x8; struct __C3DStack *x9; void *x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; struct __CFDictionary *x16; unsigned int x17; struct __CFDictionary *x18; struct __CFDictionary *x19; struct __CFDictionary *x20; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x21; void *x22; long long x23; struct __C3DFXProgramObject *x24; struct __C3DEngineStats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; double x56; unsigned int x57; double x58; unsigned int x59; double x60; double x61; double x62; double x63; double x64[60]; unsigned int x65; double x66; double x67; } x25; struct Cache { unsigned int x0[16]; unsigned int x1; int x2; struct __C3DBlendStates *x3; unsigned int x4; struct __C3DRasterizerStates *x5; struct __C3DMesh *x6; struct __C3DMeshElement *x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; void *x12; int x13; int x14; int x15; } x26; struct { unsigned int x0[5]; int x1[5]; struct { int x0; unsigned int x1; unsigned int x2; } x2[46]; unsigned int x3[46]; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; } x27; struct VolatileObject { struct __C3DArray *x0; unsigned int x1; unsigned int x2; struct __CFArray *x3; } x28[2]; struct __C3DArray *x29; unsigned int x30; struct __CFDictionary *x31; } *)rendererContext;
- (struct __C3DTexture { } *)currentTexture;
- (struct __C3DFXContext { } *)fxContext;
- (void)reParsePasses;
- (void)selectPass:(id)a0;
- (void)techniquesDidUpdate:(id)a0;
- (void)updateTargets;

@end
