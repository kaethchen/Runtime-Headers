@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, _OSSystemExtensionsWorkspaceServerToClientInterface;

@interface OSSystemExtensionsWorkspaceClient : NSObject <_OSSystemExtensionsWorkspaceServerToClientInterface>

@property (retain) id remoteProtocol;
@property (retain) id exportedProtocol;
@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (weak) id<_OSSystemExtensionsWorkspaceServerToClientInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connectToServer;
- (id)_callDaemonWithRetry:(id /* block */)a0;
- (BOOL)addObserverWithError:(id *)a0;
- (void)completeCleanupForOrphanedSystemExtension:(id)a0 withAuthorization:(id)a1 completion:(id /* block */)a2;
- (void)initiateCleanupForOrphanedSystemExtensionsWithCompletion:(id /* block */)a0;
- (BOOL)removeObserverWithError:(id *)a0;
- (void)systemExtensionWillBecomeDisabled:(id)a0;
- (void)systemExtensionWillBecomeEnabled:(id)a0;
- (void)systemExtensionWillBecomeInactive:(id)a0;

@end
