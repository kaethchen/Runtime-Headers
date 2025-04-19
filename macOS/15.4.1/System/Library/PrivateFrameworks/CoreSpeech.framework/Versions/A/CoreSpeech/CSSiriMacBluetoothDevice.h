@class AFBluetoothDeviceInfo, NSString, NSUUID, NSHashTable, NSObject, IOBluetoothDevice;
@protocol OS_dispatch_queue;

@interface CSSiriMacBluetoothDevice : NSObject <AFBluetoothDevice> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_address;
    NSUUID *_deviceUID;
    IOBluetoothDevice *_device;
    AFBluetoothDeviceInfo *_deviceInfo;
    id /* block */ _connectionCompletion;
    NSHashTable *_observers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)identifier;
- (void)removeObserver:(id)a0;
- (void)prewarm;
- (void)addObserver:(id)a0;
- (id)_deviceInfo;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (id)deviceInfo;
- (id)initWithAddress:(id)a0;
- (id)initWithDeviceUID:(id)a0;
- (void)_enumerateObserversUsingBlock:(id /* block */)a0;
- (id)_initWithAddress:(id)a0 deviceUID:(id)a1;
- (void)_updateDeviceInfo:(id)a0;
- (void)connect:(id /* block */)a0;
- (void)disconnect:(id /* block */)a0;
- (void)getDeviceInfo:(id /* block */)a0;
- (void)getHeadphoneInEarDetectionState:(id /* block */)a0;
- (void)getHeadphoneListeningMode:(id /* block */)a0;
- (void)setHeadphoneListeningMode:(long long)a0 completion:(id /* block */)a1;

@end
