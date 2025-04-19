@class NSXPCConnection, NSMutableDictionary, NSMutableArray;
@protocol DeviceCollectionDelegate;

@interface DeviceCollection : NSObject

@property (weak, nonatomic) id<DeviceCollectionDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *devices;
@property (retain, nonatomic) NSMutableArray *connections;
@property (retain, nonatomic) NSXPCConnection *connectionToService;
@property (nonatomic) unsigned int clientID;
@property (nonatomic) int serviceProcessID;
@property (nonatomic) BOOL shouldReconnectToService;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)connect;
- (void)allDevicesDetached;
- (void)deviceChanged:(id)a0;
- (void)willTerminate;
- (void)createConnection;
- (void)deviceConnected:(id)a0;
- (void)deviceDisconnected:(id)a0;
- (void)disconnectView:(id)a0;
- (void)allDevicesDetachedOnMainThread;
- (void)cancelOperationForDevice:(id)a0;
- (void)completedOperationForDeviceWithIdentifier:(id)a0;
- (void)connectToView:(id)a0 forDevice:(id)a1;
- (void)connectToView:(id)a0 forDevice:(id)a1 andMode:(id)a2;
- (id)currentViewForDevice:(id)a0;
- (void)discoveryServiceWillTerminate;
- (void)ejectDevice:(id)a0;
- (void)nameChangedTo:(id)a0 forDeviceIdentifier:(id)a1;
- (id)registerForOperationProgressForDeviceWithIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)removeConnectionsAttachedToView:(id)a0;
- (void)removeConnectionsAttachedToWindow:(id)a0;
- (void)serviceConnectionInterrupted;
- (void)serviceConnectionInvalidated;
- (void)setMode:(id)a0 forView:(id)a1;
- (void)startedOperationForDeviceWithIdentifier:(id)a0 allowCancel:(BOOL)a1;

@end
