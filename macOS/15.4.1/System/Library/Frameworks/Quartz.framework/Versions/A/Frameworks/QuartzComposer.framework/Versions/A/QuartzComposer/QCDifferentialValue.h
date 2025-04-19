@class QCNumberPort, QCBooleanPort;

@interface QCDifferentialValue : QCPatch {
    QCNumberPort *inputValue;
    QCBooleanPort *inputResetSignal;
    QCNumberPort *outputValue;
    BOOL _lastResetSignal;
    BOOL _integrate;
    double _lastTime;
    double _lastValue;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
