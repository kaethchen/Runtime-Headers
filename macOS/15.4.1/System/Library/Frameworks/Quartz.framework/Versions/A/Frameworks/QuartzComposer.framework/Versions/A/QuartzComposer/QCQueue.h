@class QCVirtualPort, QCStructurePort, QCIndexPort, NSMutableArray, QCBooleanPort;

@interface QCQueue : QCPatch {
    QCVirtualPort *inputValue;
    QCIndexPort *inputSize;
    QCBooleanPort *inputFilling;
    QCBooleanPort *inputResetSignal;
    QCStructurePort *outputQueue;
    BOOL _continuous;
    NSMutableArray *_queue;
    BOOL _lastResetSignal;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)setContinuous:(BOOL)a0;
- (BOOL)setup:(id)a0;
- (void)updateTimebase:(int)a0;
- (void)_forwardRenderingFlag;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
