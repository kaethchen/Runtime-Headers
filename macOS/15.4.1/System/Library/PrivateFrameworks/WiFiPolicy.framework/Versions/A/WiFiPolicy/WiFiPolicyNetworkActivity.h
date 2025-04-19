@class NSMutableSet, NSObject;
@protocol OS_dispatch_source, OS_nw_activity, OS_dispatch_queue;

@interface WiFiPolicyNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    long long _state;
    long long _parentLabel;
    NSObject<OS_nw_activity> *_parentActivity;
    NSMutableSet *_connections;
    BOOL _hasStarted;
    NSObject<OS_dispatch_source> *_activityTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)setQueue:(id)a0;
- (BOOL)hasStarted;
- (id)nwActivity;
- (void)setHasStarted:(BOOL)a0;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (void)_startActivityTimer;
- (long long)getState;
- (id)initWithLabel:(long long)a0 parent:(id)a1;
- (id)nwActivityToken;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;
- (void)_networkActivityState:(long long)a0;
- (long long)parentLabel;
- (void)_cancelActivityTimer;
- (void)_startMaxActivityLifetime;
- (void)stopWithCompletionReason:(int)a0 withClientMetric:(const char *)a1 withClientDict:(id)a2 andError:(id)a3;

@end
