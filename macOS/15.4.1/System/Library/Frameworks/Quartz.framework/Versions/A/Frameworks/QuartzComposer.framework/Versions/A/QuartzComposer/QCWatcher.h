@class QCPort, QCBooleanPort;

@interface QCWatcher : QCPatch {
    QCBooleanPort *outputSignal;
    unsigned long long _lastTimestamp;
    QCPort *_inPort;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)updateTimebase:(int)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (Class)portClass;
- (void)setPortClass:(Class)a0;

@end
