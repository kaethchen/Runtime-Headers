@class CBDevice;

@interface HeadphoneManager.AudioAccessoryContainerDevice : AudioAccessoryDevice {
    void /* unknown type, empty encoding */ _cbDevice;
}

@property (nonatomic, readonly) CBDevice *coreBluetoothDevice;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
