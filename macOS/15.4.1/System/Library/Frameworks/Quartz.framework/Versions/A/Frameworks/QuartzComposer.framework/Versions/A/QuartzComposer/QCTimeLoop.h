@class QCInterpolationPort, QCIndexPort, QCNumberPort;

@interface QCTimeLoop : QCPatch {
    QCIndexPort *inputCount;
    QCInterpolationPort *inputInterpolation;
    QCNumberPort *inputStart;
    QCNumberPort *inputEnd;
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
