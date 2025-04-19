@interface DaemonController : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requestHandler;
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ configStore;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ minimumActivityInterval;
    void /* unknown type, empty encoding */ maximumActivityInterval;
    void /* unknown type, empty encoding */ failureActivityInterval;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;

@end
