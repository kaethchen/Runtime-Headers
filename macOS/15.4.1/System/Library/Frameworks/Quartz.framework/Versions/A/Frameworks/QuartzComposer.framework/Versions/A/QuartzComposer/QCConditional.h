@class QCBooleanPort, QCNumberPort, QCIndexPort;

@interface QCConditional : QCPatch {
    QCNumberPort *inputValue1;
    QCIndexPort *inputTest;
    QCNumberPort *inputValue2;
    QCNumberPort *inputTolerance;
    QCBooleanPort *outputResult;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
