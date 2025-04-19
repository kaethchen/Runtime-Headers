@interface NDProxyScoringServiceConnection : NSObject {
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ xpcConnectionInterest;
    void /* unknown type, empty encoding */ xpcConnectionLock;
}

@property (class, nonatomic, readonly) NDProxyScoringServiceConnection *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)popInterest;
- (void)pushInterest;

@end
