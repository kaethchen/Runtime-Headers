@class NSXPCListener, NSString, NSXPCConnection;
@protocol OSSystemExtensionPointListenerDelegate;

@interface OSSystemExtensionPointListener : NSObject <NSXPCListenerDelegate, _OSSystemExtensionPointInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property id<OSSystemExtensionPointListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)suspend;
- (void)_connectionInvalidated:(id)a0;
- (void)_connectionDead:(id)a0;
- (void)_connectionInterrupted:(id)a0;
- (id)initForTestingWithListener:(id)a0;
- (void)startExtension:(id)a0 replyHandler:(id /* block */)a1;
- (void)terminateExtension:(id)a0 replyHandler:(id /* block */)a1;
- (void)validateExtension:(id)a0 atTemporaryBundleURL:(id)a1 replyHandler:(id /* block */)a2;
- (void)willReplaceExtension:(id)a0 withExtension:(id)a1 replyHandler:(id /* block */)a2;
- (void)willStartExtension:(id)a0 replyHandler:(id /* block */)a1;
- (void)willTerminateExtension:(id)a0 replyHandler:(id /* block */)a1;
- (void)willUninstallExtension:(id)a0 replyHandler:(id /* block */)a1;

@end
