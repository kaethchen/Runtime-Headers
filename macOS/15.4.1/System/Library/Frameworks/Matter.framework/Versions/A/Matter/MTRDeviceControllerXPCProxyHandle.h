@class NSXPCConnection;
@protocol MTRDeviceControllerServerProtocol;

@interface MTRDeviceControllerXPCProxyHandle : NSObject

@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic, getter=proxy) id<MTRDeviceControllerServerProtocol> proxy;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;

@end
