@class QCOpenGLPort_ZBuffer, QCNumberPort, QCColorPort;

@interface QCLines : QCPatch {
    QCNumberPort *inputStartX;
    QCNumberPort *inputStartY;
    QCNumberPort *inputStartZ;
    QCNumberPort *inputStartRX;
    QCNumberPort *inputStartRY;
    QCNumberPort *inputStartRZ;
    QCNumberPort *inputStartLength;
    QCColorPort *inputStartColor;
    QCNumberPort *inputAttractionAmount;
    QCNumberPort *inputAttractionX;
    QCNumberPort *inputAttractionY;
    QCNumberPort *inputAttractionZ;
    QCNumberPort *inputEndX;
    QCNumberPort *inputEndY;
    QCNumberPort *inputEndZ;
    QCNumberPort *inputEndRX;
    QCNumberPort *inputEndRY;
    QCNumberPort *inputEndRZ;
    QCNumberPort *inputEndLength;
    QCColorPort *inputEndColor;
    QCNumberPort *inputPhase;
    QCNumberPort *inputNumLines;
    QCOpenGLPort_ZBuffer *inputZBuffer;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
