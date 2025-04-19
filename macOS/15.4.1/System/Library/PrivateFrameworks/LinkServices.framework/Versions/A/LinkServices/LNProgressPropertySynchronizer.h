@interface LNProgressPropertySynchronizer : NSObject {
    void /* unknown type, empty encoding */ sourceProgress;
    void /* unknown type, empty encoding */ destinationProgress;
    void /* unknown type, empty encoding */ observationBag;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopSynchronization;
- (id)initWithSourceProgress:(id)a0 destinationProgress:(id)a1;
- (void)startSynchronization;

@end
