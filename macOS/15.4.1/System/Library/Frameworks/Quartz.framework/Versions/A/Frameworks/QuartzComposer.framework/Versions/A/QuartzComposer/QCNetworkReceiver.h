@class QCDatagramReceiver, QCNumberPort, QCStringPort, QCBooleanPort;

@interface QCNetworkReceiver : QCNetworkPatch {
    QCStringPort *outputString;
    QCNumberPort *outputTimestamp;
    QCBooleanPort *outputSignal;
    BOOL _run;
    QCDatagramReceiver *_receiver;
}

+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (void)_receiverThread:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
