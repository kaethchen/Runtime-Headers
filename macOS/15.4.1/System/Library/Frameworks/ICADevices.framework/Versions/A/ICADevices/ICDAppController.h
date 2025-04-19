@class NSXPCListener, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICDAppController : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection *_clientConnection;
}

@property NSXPCListener *deviceObjectListener;
@property NSXPCConnection *icddConnection;
@property (retain) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)applicationDidFinishLaunching:(id)a0;
- (unsigned long long)applicationShouldTerminate:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)copyCameraObjectData:(id)a0 completion:(id /* block */)a1;
- (void)copyCameraObjectThumbnail:(id)a0 completion:(id /* block */)a1;
- (void)copyDeviceObjectPropertyData:(id)a0 completion:(id /* block */)a1;
- (void)copyDeviceObjectPropertyDictionary:(id)a0 completion:(id /* block */)a1;
- (void)messageFromClient:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromDevice:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromICDD:(id)a0 withReply:(id /* block */)a1;
- (void)requestCameraDeviceOpenSession:(id)a0 completion:(id /* block */)a1;
- (void)requestCameraDeviceUploadObject:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceCancelOperation:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceCloseSession:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceDownloadObjectWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceRegisterClientNotifications:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceUnregisterClientNotifications:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceChangeScanAreaSelection:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceDownloadObjectWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceGetParameters:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceInitialize:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceOpenSession:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceSetParameters:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerDeviceStart:(id)a0 completion:(id /* block */)a1;
- (void)requestScannerStopUsingCurrentSecurityScopedURLWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)sendCameraDevicePTPCommand:(id)a0 completion:(id /* block */)a1;
- (void)sendDeviceMessage:(id)a0 completion:(id /* block */)a1;
- (int)numberOfClients;
- (void)savePrefs;
- (void)processDirectResult:(id)a0 completion:(id /* block */)a1;
- (void)quitWithReason:(id)a0;
- (void)cancelOutstandingTransactions;
- (BOOL)checkPlatformBinary:(struct { unsigned int x0[8]; })a0 clientPID:(int)a1;
- (BOOL)checkTCCAccess:(struct { unsigned int x0[8]; })a0 clientPID:(int)a1;
- (id)clientUsingDevice;
- (id)commandName:(id)a0;
- (short)connectDeviceWithDescription:(id)a0;
- (void)deviceIsServicingZeroClients;
- (void)disconnectDeviceWithDescription:(id)a0;
- (void)icddConnectionSuspended;
- (BOOL)isRunningUnderDebugMode;
- (void)processResult:(id)a0 completion:(id /* block */)a1;
- (void)processResult:(id)a0 onQueue:(id)a1 sync:(BOOL)a2 completion:(id /* block */)a3;
- (void)queryLaunchParams;
- (void)removeClientWithPID:(id)a0;
- (void)requestScannerStatus:(id)a0 completion:(id /* block */)a1;
- (void)sendMessage:(id)a0 withConnection:(id)a1;
- (void)setClientWithPID:(id)a0 usingDevice:(BOOL)a1;

@end
