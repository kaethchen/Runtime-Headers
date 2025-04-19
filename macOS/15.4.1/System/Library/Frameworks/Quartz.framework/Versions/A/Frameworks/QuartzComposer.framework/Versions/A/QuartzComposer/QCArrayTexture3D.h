@class QCCGLContext;

@interface QCArrayTexture3D : QCArray {
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    void *_unused2[4];
}

@property (readonly) unsigned int name;
@property (readonly) QCCGLContext *context;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)byteSize;
- (void)bindTexture3DToContext:(id)a0 textureUnit:(unsigned int)a1 savedState:(struct { unsigned char x0; int x1; int x2; void *x3[4]; } *)a2;
- (void)bindTexture3DToContext:(id)a0 textureUnit:(unsigned int)a1 savedState:(struct { unsigned char x0; int x1; int x2; void *x3[4]; } *)a2 enableTexture:(BOOL)a3;
- (void)finalize_QCArrayTexture3D;
- (id)initWithArray:(id)a0 context:(id)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 depth:(unsigned long long)a4 elementSize:(unsigned long long)a5 type:(int)a6 options:(id)a7;
- (id)initWithContext:(id)a0 baseAddress:(void *)a1 releaseCallback:(void /* function */ *)a2 releaseInfo:(void *)a3 width:(unsigned long long)a4 height:(unsigned long long)a5 depth:(unsigned long long)a6 elementSize:(unsigned long long)a7 type:(int)a8 options:(id)a9;
- (id)initWithContext:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 depth:(unsigned long long)a3 elementSize:(unsigned long long)a4 type:(int)a5 options:(id)a6;
- (void)unbindTexture3DFromContext:(id)a0 textureUnit:(unsigned int)a1 savedState:(struct { unsigned char x0; int x1; int x2; void *x3[4]; } *)a2;
- (void)unbindTexture3DFromContext:(id)a0 textureUnit:(unsigned int)a1 savedState:(struct { unsigned char x0; int x1; int x2; void *x3[4]; } *)a2 enableTexture:(BOOL)a3;

@end
