@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiPolicyNetworkActivityTracing : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activities;
    NSMutableSet *_connections;
}

+ (id)sharedNetworkActivityTracing;

- (id)init;
- (void).cxx_destruct;
- (void)_networkActivityStart:(long long)a0 activate:(BOOL)a1;
- (void)_networkActivityActivate:(long long)a0;
- (void)_networkActivityTracingCancel;
- (void)currentNetworkActivityTokenWithCompletion:(id /* block */)a0;
- (void)networkActivityActivate:(long long)a0;
- (void)networkActivityStart:(long long)a0 activate:(BOOL)a1;
- (void)_networkActivityAddNWConnection:(id)a0 toActivityWithLabel:(long long)a1;
- (void)_networkActivityRemoveNWConnection:(id)a0 fromActivityWithLabel:(long long)a1 completion:(id /* block */)a2;
- (void)_networkActivityStop:(long long)a0 withReason:(int)a1 withClientMetric:(const char *)a2 withClientDict:(id)a3 andError:(id)a4;
- (BOOL)hasActivitiesRunning;
- (void)networkActivityAddNWConnection:(id)a0 toActivityWithLabel:(long long)a1;
- (void)networkActivityRemoveNWConnection:(id)a0 fromActivityWithLabel:(long long)a1 completion:(id /* block */)a2;
- (void)networkActivityStop:(long long)a0 withReason:(int)a1 withClientMetric:(const char *)a2 withClientDict:(id)a3 andError:(id)a4;
- (void)networkActivityTracingCompleteConnectionsActivities;

@end
