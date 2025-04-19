@class QCDatagramBroadcaster, QCStringPort;

@interface QCNetworkBroadcaster : QCNetworkPatch {
    QCStringPort *inputString;
    double _maxFrequency;
    BOOL _run;
    QCDatagramBroadcaster *_broadcaster;
}

+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (void)_broadcasterThread:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
