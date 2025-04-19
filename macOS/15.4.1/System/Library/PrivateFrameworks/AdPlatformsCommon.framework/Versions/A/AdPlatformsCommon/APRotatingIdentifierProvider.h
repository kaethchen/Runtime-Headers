@interface APRotatingIdentifierProvider : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ identiferCache;
    void /* unknown type, empty encoding */ backingStore;
    void /* unknown type, empty encoding */ notificationListener;
}

- (id)init;
- (void).cxx_destruct;
- (void)notificationReceived;
- (id)getIdentifiersWithType:(long long)a0 source:(long long)a1 processId:(id)a2;

@end
