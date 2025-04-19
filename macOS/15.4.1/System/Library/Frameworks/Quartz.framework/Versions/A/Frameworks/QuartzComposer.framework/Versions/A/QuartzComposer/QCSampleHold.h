@class QCVirtualPort, QCArray, QCBooleanPort;

@interface QCSampleHold : QCPatch {
    QCVirtualPort *inputSampleValue;
    QCBooleanPort *inputSampling;
    QCBooleanPort *inputResetSignal;
    QCVirtualPort *outputValue;
    QCArray *_lastResetSignal;
    QCArray *_value;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
