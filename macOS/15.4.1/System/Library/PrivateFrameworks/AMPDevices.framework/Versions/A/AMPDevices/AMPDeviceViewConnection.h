@class AMPDevice, DeviceRemoteViewController, NSView, NSUUID, NSXPCConnection, NSString;

@interface AMPDeviceViewConnection : NSObject

@property (readonly, nonatomic) unsigned int clientID;
@property (weak, nonatomic) NSView *targetView;
@property (retain, nonatomic) DeviceRemoteViewController *remoteViewController;
@property (retain, nonatomic) AMPDevice *device;
@property (retain, nonatomic) NSUUID *uid;
@property (retain, nonatomic) NSXPCConnection *sideConnection;
@property (weak, nonatomic) NSXPCConnection *connectionToDiscoveryService;
@property (retain, nonatomic) NSString *defaultMode;
@property (nonatomic) BOOL enabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setMode:(id)a0;
- (void)establishSideConnection;
- (id)initWithView:(id)a0 forDevice:(id)a1 andConnectionToDiscoveryService:(id)a2 andMode:(id)a3 enabled:(BOOL)a4 clientID:(unsigned int)a5;
- (void)setDevice:(id)a0 andMode:(id)a1;
- (void)willBeDisposed;

@end
