@class NSColor, NSMutableDictionary, QCSCN_Material;

@interface QCSCN_MaterialPropertyReserved : NSObject {
    QCSCN_Material *_parent;
    int _propertyType;
    unsigned char _presentationInstance : 1;
    NSMutableDictionary *_animations;
    struct __C3DImage { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __CFURL *x1; struct CGContext *x2; struct __CFData *x3; unsigned int x4; BOOL x5; BOOL x6; struct C3DVector2 { union { double x0[2]; struct { double x0; double x1; } x1; struct { double x0; double x1; } x2; struct { double x0; double x1; } x3; } x0; } x7; unsigned int x8; int x9; struct __C3DPVRTCInfo *x10; struct __C3DDDSInfo *x11; } *_c3dImage;
    struct __C3DTextureProxy { struct __C3DVRAMResource { struct __C3DLinkableObject { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __C3DLinkableObject *x1; struct __C3DLinkableObject *x2; BOOL x3; } x0; void *x1; long long x2; struct __C3DRendererContext *x3; long long x4; BOOL x5; struct _cl_mem *x6; } x0; struct { void /* function */ *x0; void /* function */ *x1; } x1; void *x2; } *_textureProxy;
    NSColor *_color;
    NSColor *_borderColor;
    id _image;
    id _layer;
    id _proceduralContent;
    id _attachment;
    long long _mappingChannel;
    int _minFilter;
    int _magFilter;
    int _mipFilter;
    int _wrapS;
    int _wrapT;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _contentTransform;
}

- (void)dealloc;
- (void)finalize;

@end
