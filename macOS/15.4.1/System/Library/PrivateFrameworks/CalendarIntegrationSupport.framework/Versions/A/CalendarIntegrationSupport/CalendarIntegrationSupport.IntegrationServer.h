@interface CalendarIntegrationSupport.IntegrationServer : NSObject {
    void /* unknown type, empty encoding */ syncManager;
    void /* unknown type, empty encoding */ deviceLockObserver;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)startServer;
- (void)requestCatchupSync;
- (void)requestRegularSync;

@end
