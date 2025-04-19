@class NSString, SLSXPCService;

@interface SLSGUIClient : SLSDisplayControlClient <SLSGUIClientProtocol, SLSDisplayControlServiceProtocol>

@property (retain, nonatomic) SLSXPCService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configGUIClient:(id)a0 error:(id *)a1 notifyQueue:(id)a2 notificationType:(unsigned long long)a3 notificationBlock:(id /* block */)a4;

- (void)dealloc;
- (id)init;
- (id)initGUIClient:(id)a0 error:(id *)a1 notifyQueue:(id)a2 notificationType:(unsigned long long)a3 notificationBlock:(id /* block */)a4;
- (unsigned long long)requestDisplaysIdle:(id)a0 error:(id *)a1;
- (void)terminateConnection:(id *)a0;
- (int)validateIdleRequest:(id)a0;

@end
