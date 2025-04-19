@interface ChronoCore._LocationAuthorizationMonitorImpl : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ containerIdentifier;
    void /* unknown type, empty encoding */ _didChangeHandler;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _assertionCount;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
