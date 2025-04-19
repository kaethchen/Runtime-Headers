@interface _EXDiscoveryController : NSObject <LSObserverDelegate> {
    void /* unknown type, empty encoding */ activeQueries;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ settingsStoreToken;
    void /* unknown type, empty encoding */ activeQueriesLock;
    void /* unknown type, empty encoding */ queryQueue;
}

@property (class, nonatomic, readonly) _EXDiscoveryController *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observerDidObserveDatabaseChange:(id)a0;

@end
