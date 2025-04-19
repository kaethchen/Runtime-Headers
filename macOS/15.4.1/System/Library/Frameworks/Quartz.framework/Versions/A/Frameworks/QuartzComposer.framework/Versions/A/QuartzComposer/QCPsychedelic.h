@class QCOpenGLPort_Color, QCOpenGLPort_Image, QCNumberPort, QCOpenGLPort_Blending;

@interface QCPsychedelic : QCPatch {
    QCOpenGLPort_Image *inputImage;
    QCOpenGLPort_Color *inputColor;
    QCNumberPort *inputSpeed;
    QCNumberPort *inputScale;
    QCOpenGLPort_Blending *inputBlending;
    BOOL _clearDepthBuffer;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)clearsDepthBuffer;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setClearsDepthBuffer:(BOOL)a0;

@end
