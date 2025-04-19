@class QCCGLContext;

@interface QCArrayBufferObject : QCArray {
    void *_unused2[4];
}

@property (readonly) unsigned int vertexBuffer;
@property (readonly) unsigned int target;
@property (readonly) QCCGLContext *context;

- (void)dealloc;
- (void *)array;
- (id)NSArrayRepresentation;
- (void)endRenderBuffer;
- (BOOL)beginRenderBuffer;
- (BOOL)beginUpdateArray;
- (void)bindArrayToContext:(id)a0 clientState:(int)a1 savedState:(struct { int x0; int x1; int x2; unsigned char x3; unsigned char x4; void *x5; void *x6[4]; } *)a2;
- (void)endUpdateArray;
- (id)initWithContext:(id)a0 target:(unsigned int)a1 count:(unsigned long long)a2 elementSize:(unsigned long long)a3 type:(int)a4;
- (id)initWithVertexBufferObject:(int)a0 releaseCallback:(void /* function */ *)a1 releaseInfo:(void *)a2 context:(id)a3 target:(unsigned int)a4 count:(unsigned long long)a5 elementSize:(unsigned long long)a6 type:(int)a7;
- (void)unbindArrayFromContext:(id)a0 clientState:(int)a1 savedState:(struct { int x0; int x1; int x2; unsigned char x3; unsigned char x4; void *x5; void *x6[4]; } *)a2;

@end
