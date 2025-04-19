@class QCOpenGLPort_Color, CIFilter, QCOpenGLPort_Image, QCNumberPort, QCOpenGLPort_Blending, CIImage;

@interface QCBillboard : QCRenderingPatch {
    QCOpenGLPort_Image *inputImage;
    QCOpenGLPort_Image *inputMask;
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputRotation;
    QCOpenGLPort_Color *inputColor;
    QCOpenGLPort_Blending *inputBlending;
    QCNumberPort *inputPixelAligned;
    BOOL _directCIRendering;
    BOOL _optimizedCropping;
    int _sizeMode;
    QCNumberPort *_widthPort;
    QCNumberPort *_heightPort;
    CIImage *_ciImage;
    CIFilter *_colorFilter;
    CIFilter *_maskFilter;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (BOOL)allowsInteraction;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (double)rotation;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setRotation:(double)a0;
- (void)setSizeMode:(int)a0;
- (int)sizeMode;
- (double)scaleX;
- (double)scaleY;
- (void)setScaleX:(double)a0;
- (void)setScaleY:(double)a0;
- (BOOL)setup:(id)a0;
- (BOOL)allowsScissors:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (BOOL)automaticStateSet:(id)a0;
- (void)cleanup:(id)a0;
- (struct _QCDod { } *)createDodForContext:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
