@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MNRouteGeniusDelegateProxy;

@interface MNRouteGeniusRemoteService : NSObject <MNRouteGeniusDelegateProxy> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    id<MNRouteGeniusDelegateProxy> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)start;
- (void)stop;
- (void)_q_closeConnection;
- (BOOL)_q_openConnectionIfNecessary;
- (void)didUpdateRouteGenius:(id)a0;
- (void)forceReroute;

@end
