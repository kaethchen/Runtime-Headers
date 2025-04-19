@class _GCBluetoothDeviceIdentifier, NSObject;
@protocol OS_dispatch_queue;

@interface _GCBluetoothDeviceDisconnectionRequest : NSObject {
    _GCBluetoothDeviceIdentifier *_deviceIdentifier;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)performRequest:(id /* block */)a0;
- (id)initWithDeviceIdentifier:(id)a0;

@end
