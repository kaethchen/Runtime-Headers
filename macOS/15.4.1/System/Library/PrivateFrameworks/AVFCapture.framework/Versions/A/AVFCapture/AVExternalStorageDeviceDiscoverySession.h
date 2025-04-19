@class NSMutableArray;

@interface AVExternalStorageDeviceDiscoverySession : NSObject {
    struct OpaqueFigSimpleMutex { } *_lock;
    NSMutableArray *_uuidOfExternalStorageDevice;
}

@property (class, readonly) AVExternalStorageDeviceDiscoverySession *sharedSession;
@property (class, readonly, getter=isSupported) BOOL supported;

@property (readonly) NSMutableArray *externalStorageDevices;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)_reconnectToServer;
- (void)_requestAuthorization:(id /* block */)a0;
- (int)_setupExternalStorageDeviceDiscoverySession;
- (void)_tearDownExternalStorageDeviceDiscoverySessionToReconnectToServer:(BOOL)a0;

@end
