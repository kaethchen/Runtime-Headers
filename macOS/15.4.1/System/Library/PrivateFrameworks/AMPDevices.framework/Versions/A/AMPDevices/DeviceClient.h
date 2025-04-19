@class NSXPCConnection;

@interface DeviceClient : NSObject <DeviceClientProtocol>

@property (weak, nonatomic) NSXPCConnection *connectionToDiscoveryService;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)pairDeviceWithIdentifier:(id)a0 withReply:(id /* block */)a1;

@end
