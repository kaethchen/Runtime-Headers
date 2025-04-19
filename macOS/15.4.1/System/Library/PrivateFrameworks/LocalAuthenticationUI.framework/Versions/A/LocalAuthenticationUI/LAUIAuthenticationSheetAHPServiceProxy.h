@class NSString, NSXPCConnection;

@interface LAUIAuthenticationSheetAHPServiceProxy : NSObject <AuthenticationHintsProvider> {
    NSString *_serviceName;
    BOOL _useSyncAPI;
}

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)deactivate:(id /* block */)a0;
- (void)activate:(id)a0 userName:(id)a1 mode:(long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)activate:(id)a0 userName:(id)a1 sessionUnlocked:(BOOL)a2 reply:(id /* block */)a3;
- (void)deactivateWithContext:(id)a0 reply:(id /* block */)a1;
- (id)_proxyWithErrorHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 serviceName:(id)a1;
- (BOOL)_shouldUseSyncAPI;

@end
