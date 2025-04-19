@class QCInterpolationPort, QCIndexPort, QCNumberPort;

@interface QCReplicator : QCPatch {
    QCIndexPort *inputCopies;
    QCInterpolationPort *inputInterpolation;
    QCNumberPort *inputScale;
    QCNumberPort *inputOrientationX;
    QCNumberPort *inputOrientationY;
    QCNumberPort *inputOrientationZ;
    QCNumberPort *inputOriginX;
    QCNumberPort *inputOriginY;
    QCNumberPort *inputOriginZ;
    QCNumberPort *inputRotationX;
    QCNumberPort *inputRotationY;
    QCNumberPort *inputRotationZ;
    QCNumberPort *inputTranslationX;
    QCNumberPort *inputTranslationY;
    QCNumberPort *inputTranslationZ;
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
