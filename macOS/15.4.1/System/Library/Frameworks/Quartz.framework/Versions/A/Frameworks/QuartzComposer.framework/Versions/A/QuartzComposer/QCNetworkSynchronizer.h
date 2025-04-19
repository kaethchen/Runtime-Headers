@class QCDatagramReceiver, QCDatagramBroadcaster, QCNumberPort, QCStringPort, QCBooleanPort;

@interface QCNetworkSynchronizer : QCNetworkPatch {
    QCStringPort *inputString;
    QCBooleanPort *outputBroadcasting;
    QCStringPort *outputString;
    QCNumberPort *outputTimestamp;
    QCBooleanPort *outputSignal;
    double _maxFrequency;
    BOOL _transmitting;
    BOOL _run;
    QCDatagramBroadcaster *_broadcaster;
    QCDatagramReceiver *_receiver;
}

+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)_synchronizerThread:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
