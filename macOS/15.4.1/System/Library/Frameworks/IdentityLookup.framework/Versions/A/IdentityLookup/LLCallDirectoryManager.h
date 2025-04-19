@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface LLCallDirectoryManager : NSObject

@property (class, readonly) LLCallDirectoryManager *sharedInstance;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *defaultConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)openSettingsWithCompletionHandler:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 forExtensionWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)callDirectoryManagerDefaultHostInterface;
- (void)getEnabledForExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshExtensionContextForLiveLookupExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshPIRParametersForLiveLookupExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetExtensionWithIdentier:(id)a0 completionHandler:(id /* block */)a1;

@end
