@class QCInterpolationPort, QCOpenGLPort_Image, QCColorPort, QCIndexPort, QCNumberPort, QCOpenGLPort_Blending;

@interface QCParticleSystem : QCPatch {
    QCIndexPort *inputCount;
    QCNumberPort *inputPositionX;
    QCNumberPort *inputPositionY;
    QCNumberPort *inputPositionZ;
    QCColorPort *inputColor;
    QCNumberPort *inputVelocityMinX;
    QCNumberPort *inputVelocityMaxX;
    QCNumberPort *inputVelocityMinY;
    QCNumberPort *inputVelocityMaxY;
    QCNumberPort *inputVelocityMinZ;
    QCNumberPort *inputVelocityMaxZ;
    QCNumberPort *inputMinSize;
    QCNumberPort *inputMaxSize;
    QCNumberPort *inputLifeTime;
    QCNumberPort *inputAttraction;
    QCNumberPort *inputGravity;
    QCOpenGLPort_Image *inputImage;
    QCOpenGLPort_Blending *inputBlending;
    QCNumberPort *_inputSizeDelta;
    QCNumberPort *_inputRedDelta;
    QCNumberPort *_inputGreenDelta;
    QCNumberPort *_inputBlueDelta;
    QCNumberPort *_inputOpacityDelta;
    QCNumberPort *_inputFinalSize;
    QCColorPort *_inputFinalColor;
    QCInterpolationPort *_inputSizeInterpolation;
    QCInterpolationPort *_inputRedInterpolation;
    QCInterpolationPort *_inputGreenInterpolation;
    QCInterpolationPort *_inputBlueInterpolation;
    QCInterpolationPort *_inputOpacityInterpolation;
    double _startUpDelay;
    BOOL _interpolateSizeAndColor;
    long long _seed;
    unsigned long long _particleCount;
    unsigned long long _maxParticleCount;
    unsigned long long _activeParticleCount;
    void *_particleBuffer;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)_initParticle:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; float x8; long long x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; double x18; double x19; double x20; double x21; float x22; } *)a0 atTime:(double)a1;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)interpolateSizeAndColor;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setInterpolateSizeAndColor:(BOOL)a0;
- (void)setStartUpDelay:(double)a0;
- (double)startUpDelay;

@end
