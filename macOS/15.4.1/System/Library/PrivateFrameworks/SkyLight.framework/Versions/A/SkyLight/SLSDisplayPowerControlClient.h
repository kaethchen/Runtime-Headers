@class NSString, SLSXPCService;

@interface SLSDisplayPowerControlClient : SLSDisplayControlClient <SLSDisplayPowerControlClientProtocol, SLSDisplayControlServiceProtocol>

@property (retain, nonatomic) SLSXPCService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initAsyncPowerControlClient:(id *)a0 notifyQueue:(id)a1 notificationType:(unsigned long long)a2 notificationBlock:(id /* block */)a3;
- (id)initPowerControlClient:(id *)a0 notifyQueue:(id)a1 notificationType:(unsigned long long)a2 notificationBlock:(id /* block */)a3;
- (unsigned long long)requestStateChange:(id)a0 error:(id *)a1;
- (int)sendStateChangeRequest:(id)a0 uuid:(unsigned long long *)a1;
- (void)terminateConnection:(id *)a0;

@end
