@class RTPlatform, NSString, NSXPCConnection;

@interface RTEventAgentManager : RTXPCListener <RTEventAgentDaemonProtocol>

@property (retain, nonatomic) NSXPCConnection *pluginConnection;
@property (retain, nonatomic) RTPlatform *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setup;
- (id)initWithPlatform:(id)a0;
- (void)checkin;
- (void)_launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)onLaunchDaemonWithRestorationIdentifierFromDefaults;
- (void)setup;

@end
