@interface GroupActivities.SystemCoordinatorHost : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ configurationUpdateSubject;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ configurationUpdateSubscription;
    void /* unknown type, empty encoding */ connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
