@class QCColorPort, QCNumberPort;

@interface QCColorTransform : QCPatch {
    QCColorPort *inputColor;
    QCNumberPort *inputHue;
    QCNumberPort *inputSaturation;
    QCNumberPort *inputLuminosity;
    QCNumberPort *inputAlpha;
    QCColorPort *outputColor;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
