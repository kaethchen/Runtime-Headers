@interface HomeKitDaemon.CharacteristicReadWriteLogEventObserver : NSObject <HMMLogEventObserver> {
    void /* unknown type, empty encoding */ eventBuilders;
    void /* unknown type, empty encoding */ logEventSubmitter;
}

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;

@end
