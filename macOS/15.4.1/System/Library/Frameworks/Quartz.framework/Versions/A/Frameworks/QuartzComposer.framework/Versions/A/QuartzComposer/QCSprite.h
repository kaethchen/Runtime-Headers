@class QCOpenGLPort_Color, QCOpenGLPort_ZBuffer, QCOpenGLPort_Image, QCOpenGLPort_Culling, QCNumberPort, QCOpenGLPort_Blending, QCImageTextureBuffer;

@interface QCSprite : QCRenderingPatch {
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputZ;
    QCNumberPort *inputRX;
    QCNumberPort *inputRY;
    QCNumberPort *inputRZ;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCOpenGLPort_Color *inputColor;
    QCOpenGLPort_Image *inputImage;
    QCOpenGLPort_Image *inputMask;
    QCOpenGLPort_Blending *inputBlending;
    QCOpenGLPort_ZBuffer *inputZBuffer;
    QCOpenGLPort_Culling *inputCulling;
    BOOL _antialiasing;
    QCImageTextureBuffer *_borderMask;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (BOOL)allowsInteraction;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (double)depth;
- (double)rotation;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setRotation:(double)a0;
- (double)scaleX;
- (double)scaleY;
- (void)setScaleX:(double)a0;
- (void)setScaleY:(double)a0;
- (BOOL)setup:(id)a0;
- (BOOL)allowsScissors:(id)a0;
- (BOOL)automaticStateSet:(id)a0;
- (void)cleanup:(id)a0;
- (struct _QCDod { } *)createDodForContext:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
