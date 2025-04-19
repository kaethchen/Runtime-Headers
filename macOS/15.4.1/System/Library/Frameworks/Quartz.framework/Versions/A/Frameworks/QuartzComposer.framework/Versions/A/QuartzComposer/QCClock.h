@class QCNumberPort, QCBooleanPort;

@interface QCClock : QCPatch {
    QCBooleanPort *inputStartSignal;
    QCBooleanPort *inputStopSignal;
    QCBooleanPort *inputResetSignal;
    QCNumberPort *outputTime;
    BOOL _lastStartSignal;
    BOOL _lastStopSignal;
    BOOL _lastResetSignal;
    double _startTime;
    double _stopTime;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
