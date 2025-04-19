@class SafariSandboxBrokerConnection, SandboxFileExtensionController;

@interface SandboxExtensionPresentationController : NSObject

@property (nonatomic) long long tag;
@property (readonly, nonatomic) SandboxFileExtensionController *sandboxExtensionController;
@property (readonly, nonatomic) SafariSandboxBrokerConnection *sandboxBrokerConnection;

- (void).cxx_destruct;
- (void)_tryCreatingTokenForURLWithoutUI:(id)a0 permissions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canReadFileAtURL:(id)a0;
- (BOOL)_canWriteFileAtURL:(id)a0;
- (id)_createOpenPanel;
- (void)_createTokenForAccessibleURL:(id)a0 isSecurityScoped:(BOOL)a1 permissions:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)_createTokenForAccessibleURL:(id)a0 isSecurityScoped:(BOOL)a1 permissions:(unsigned long long)a2 error:(id *)a3;
- (void)_tryCreatingTokenForURLWithAsynchronousUI:(id)a0 permissions:(unsigned long long)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)_tryCreatingTokenForURLWithSynchronousUI:(id)a0 permissions:(unsigned long long)a1 identifier:(id)a2 category:(long long)a3 delegate:(id)a4 error:(id *)a5;
- (id)_tryCreatingTokenForURLWithoutUI:(id)a0 permissions:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSandboxExtensionController:(id)a0;
- (id)initWithSandboxExtensionController:(id)a0 sandboxBrokerConnection:(id)a1;
- (void)openFileURL:(id)a0 permissions:(unsigned long long)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)openFileURL:(id)a0 permissions:(unsigned long long)a1 identifier:(id)a2 category:(long long)a3 delegate:(id)a4 error:(id *)a5;

@end
