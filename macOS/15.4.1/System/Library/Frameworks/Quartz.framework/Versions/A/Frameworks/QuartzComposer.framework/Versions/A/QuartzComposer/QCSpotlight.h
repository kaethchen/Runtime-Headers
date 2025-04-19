@class QCBooleanPort, QCStructurePort, QCStringPort;

@interface QCSpotlight : QCThreadPatch {
    QCStringPort *inputQuery;
    QCBooleanPort *inputSignal;
    QCStructurePort *outputFiles;
    QCBooleanPort *outputSignal;
    BOOL _keylessStructures;
    BOOL _lastSignal;
    BOOL _rerun;
    BOOL _gathering;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (void)_matadorThread:(id)a0;
- (void)__finish:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
