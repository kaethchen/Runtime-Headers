@class QCInterpolationPort, QCColorPort, QCNumberPort;

@interface QCColorMixer : QCPatch {
    QCColorPort *inputColor1;
    QCColorPort *inputColor2;
    QCNumberPort *inputMix;
    QCInterpolationPort *inputInterpolation;
    QCColorPort *outputColor;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
