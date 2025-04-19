@class QCArray, QCNumberPort, NSMutableArray, QCBooleanPort;

@interface QCPhysics : QCPatch {
    QCBooleanPort *inputSampling;
    QCNumberPort *inputFriction;
    NSMutableArray *_inputValues;
    NSMutableArray *_outputValues;
    QCArray *_pos;
    QCArray *_inputPos;
    QCArray *_speed;
    QCArray *_needRedraw;
    QCArray *_times;
    QCArray *_updateTimes;
    QCArray *_dts;
    QCArray *_savSample;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (unsigned long long)numberOfInputs;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setNumberOfInputs:(unsigned long long)a0;

@end
