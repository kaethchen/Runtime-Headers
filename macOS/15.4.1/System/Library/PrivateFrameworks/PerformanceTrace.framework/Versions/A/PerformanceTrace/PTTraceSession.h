@class PTTraceConfig, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, PTTraceSessionDelegate;

@interface PTTraceSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) PTTraceConfig *config;
@property (retain, nonatomic) id<PTTraceSessionDelegate> delegate;
@property (readonly, nonatomic) BOOL isValid;

+ (id)initWithConfig:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_initConnection;
- (void)_didPingService:(id)a0;
- (id)_getRemoteObjectProxy;
- (void)_invalidateSession;
- (void)_ping:(id)a0;
- (void)displayTraceCompletedAlertWithTraceFileURL:(id)a0 additionalInfo:(id)a1 notificationTimeoutSecs:(id)a2 completionHandler:(id /* block */)a3;
- (void)performanceTraceDidComplete:(id)a0 withToken:(id)a1 withError:(id)a2;
- (void)performanceTraceDidStart:(id)a0;
- (void)performanceTraceDidStop:(id)a0;
- (void)startPerformanceTrace;
- (void)stopPerformanceTrace;

@end
