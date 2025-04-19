@class QCOpenGLPort_ZBuffer, QCNumberPort, QCColorPort;

@interface QCLine : QCRenderingPatch {
    QCNumberPort *inputStartX;
    QCNumberPort *inputStartY;
    QCNumberPort *inputStartZ;
    QCColorPort *inputStartColor;
    QCNumberPort *inputEndX;
    QCNumberPort *inputEndY;
    QCNumberPort *inputEndZ;
    QCColorPort *inputEndColor;
    QCNumberPort *inputLineWidth;
    QCOpenGLPort_ZBuffer *inputZBuffer;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)allowsScissors:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
