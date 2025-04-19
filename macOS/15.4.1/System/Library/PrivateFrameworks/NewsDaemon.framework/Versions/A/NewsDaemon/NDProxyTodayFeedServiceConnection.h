@interface NDProxyTodayFeedServiceConnection : NSObject {
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ xpcConnectionInterest;
    void /* unknown type, empty encoding */ xpcConnectionLock;
}

@property (class, nonatomic, readonly) NDProxyTodayFeedServiceConnection *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)popInterest;
- (void)pushInterest;
- (void)withTodayFeedService:(id /* block */)a0;

@end
