@class NSXPCConnection;

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    void *mImpl;
    struct ConnectionInfo { NSXPCConnection *mConnection; int mExtUsePermission; BOOL mLinkedSDKRequiresEntitlement; } mConnInfo;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)canRegisterComponent:(id)a0 reply:(id /* block */)a1;
- (void)getComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 includeExtensions:(BOOL)a2 forceWaitForExtensions:(BOOL)a3 reply:(id /* block */)a4;
- (id)initWithRegistrar:(void *)a0 connection:(id)a1;

@end
