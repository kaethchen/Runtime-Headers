@class QCImageTextureBuffer, QCImagePort, QCCGLContext, QCIndexPort, QCPixelFormat, QCBooleanPort;

@interface QCRenderInImage : QCPatch {
    QCBooleanPort *inputRender;
    QCIndexPort *inputTarget;
    QCBooleanPort *inputMipmaps;
    QCIndexPort *inputWidth;
    QCIndexPort *inputHeight;
    QCImagePort *outputImage;
    QCPixelFormat *_format;
    BOOL _noDepthBuffer;
    BOOL _noFeedback;
    BOOL _colorCorrection;
    QCPixelFormat *_renderFormat;
    QCImageTextureBuffer *_renderedImage;
    QCImageTextureBuffer *_currentImage;
    QCCGLContext *_activeContext;
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)a0;
+ (BOOL)usesLocalContextForIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setPixelFormat:(id)a0;
- (id)pixelFormat;
- (BOOL)_enabled;
- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)_executeSubpatches:(double)a0 arguments:(id)a1;
- (void)_updateRenderFormat:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)executeSubpatches:(double)a0 arguments:(id)a1;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (BOOL)noDepthBuffer;
- (BOOL)noFeedback;
- (void)setNoDepthBuffer:(BOOL)a0;
- (void)setNoFeedback:(BOOL)a0;

@end
