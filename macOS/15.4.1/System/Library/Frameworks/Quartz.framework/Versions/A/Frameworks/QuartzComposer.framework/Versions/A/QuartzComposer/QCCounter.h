@class QCArray, QCIndexPort, QCBooleanPort;

@interface QCCounter : QCPatch {
    QCBooleanPort *inputSignal;
    QCBooleanPort *inputSignalDown;
    QCBooleanPort *inputSignalReset;
    QCIndexPort *outputCount;
    QCArray *_lastSignal;
    QCArray *_lastSignalDown;
    QCArray *_lastSignalReset;
    QCArray *_value;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateArrays;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (void)enable:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
