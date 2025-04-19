@class NSXPCConnection;

@interface AUCrashHandler : NSObject {
    NSXPCConnection *_connectionToService;
    id /* block */ _crashCallback;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)asyncCrashHandlerServiceProxy;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 withCrashBlock:(id /* block */)a1;
- (id)initWithEndpoint:(id)a0 withCrashBlock:(id /* block */)a1;
- (void)notifyCrash:(struct { unsigned int x0[8]; })a0 withCrashInfo:(id)a1;
- (id)serviceConnection;
- (id)syncCrashHandlerServiceProxy;

@end
