@interface CHSActivityService : NSObject <BSInvalidatable> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ connectionClient;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_invalidated;
    void /* unknown type, empty encoding */ queue_subscriptions;
    void /* unknown type, empty encoding */ queue_activityServiceAssertion;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (id)subscribeToActivityID:(id)a0 withHandler:(id /* block */)a1;

@end
