@class QCNumberPort, QCIndexPort, QCColorPort;

@interface QCFog : QCPatch {
    QCIndexPort *inputType;
    QCColorPort *inputColor;
    QCNumberPort *inputDensity;
    QCNumberPort *inputStart;
    QCNumberPort *inputEnd;
    QCIndexPort *inputQuality;
    QCIndexPort *inputMode;
    BOOL _modeSupported;
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
