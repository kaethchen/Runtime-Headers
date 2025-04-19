@class NSXPCConnection;

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {
    void *mImpl;
    struct ConnectionInfo { NSXPCConnection *mConnection; int mExtUsePermission; BOOL mLinkedSDKRequiresEntitlement; } mConnInfo;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearConfigurationInfoCache:(id)a0;
- (void)copyConfigurationInfoFromCache:(id)a0 reply:(id /* block */)a1;
- (void)getComponentUserTags:(id)a0 reply:(id /* block */)a1;
- (void)getExtensionComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 reply:(id /* block */)a2;
- (void)getExtensionIcon:(id)a0 reply:(id /* block */)a1;
- (void)getInterAppIcon:(id)a0 reply:(id /* block */)a1;
- (id)initWithRegistrar:(void *)a0 connection:(id)a1;
- (void)setComponentUserTags:(id)a0 tags:(id)a1;
- (void)setExtensionComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 components:(id)a2 reply:(id /* block */)a3;
- (void)writeConfigurationInfoToCache:(id)a0 configurationInfo:(id)a1;

@end
