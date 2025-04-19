@class NSXPCConnection;

@interface AppleDeviceQueryLockerArmory : AppleDeviceQuerySingletonArmory

@property void /* function */ *logHandler;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)initData;

@end
