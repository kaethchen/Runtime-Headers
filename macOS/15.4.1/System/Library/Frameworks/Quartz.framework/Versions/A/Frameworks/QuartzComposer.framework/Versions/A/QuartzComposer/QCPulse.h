@class QCArray, QCIndexPort, QCBooleanPort;

@interface QCPulse : QCPatch {
    QCBooleanPort *inputSignal;
    QCIndexPort *inputMode;
    QCBooleanPort *outputSignal;
    QCArray *_lastSignal;
    QCArray *_inputSignal;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateArrays;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)enable:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
