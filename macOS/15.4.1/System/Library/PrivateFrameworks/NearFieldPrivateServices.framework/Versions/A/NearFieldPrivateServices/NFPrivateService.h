@class NSXPCConnection;

@interface NFPrivateService : NSObject {
    NSXPCConnection *_xpcConnection;
}

+ (BOOL)isResultSuccessful:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (id)serviceName;
- (id)runService:(id)a0;
- (BOOL)canRun;
- (id)connectToService:(id)a0;
- (void)runService:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)serviceNotificationReceived:(id)a0;

@end
