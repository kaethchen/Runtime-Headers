@interface SMDDebugCommands_XPCClientConnection : SMDXPCClientConnection <SMDDebugProtocol>

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void)disableIdleExit;
- (void)allowLocalNetworkServer;
- (void)delaySpotlightIndexing;
- (void)forceSlowEnumeration;
- (void)interfacesAvailable:(id /* block */)a0;

@end
