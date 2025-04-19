@class NSMutableSet, NSObject;
@protocol OS_nw_activity;

@interface SiriCoreNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    long long _state;
    long long _parentLabel;
    NSMutableSet *_connections;
    BOOL _hasStarted;
}

- (void).cxx_destruct;
- (void)activate;
- (BOOL)hasStarted;
- (id)nwActivity;
- (void)setHasStarted:(BOOL)a0;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (id)initWithLabel:(long long)a0 parent:(id)a1;
- (id)nwActivityToken;
- (int)_completionReasonToNWActivityCompletionReason:(long long)a0;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;
- (void)_networkActivityState:(long long)a0;
- (long long)parentLabel;
- (void)stopWithCompletionReason:(long long)a0 andError:(id)a1;

@end
