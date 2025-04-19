@class NSMutableDictionary, IOUSBHostCIDeviceStateMachine, MAUSBHostUSBDeviceInfo, NSNumber;

@interface MAUSBHostControllerDevice : MAUSBObject

@property (retain) NSNumber *deviceHandle;
@property (retain) NSNumber *usbDeviceAddress;
@property (readonly) MAUSBHostUSBDeviceInfo *deviceInfo;
@property (retain) IOUSBHostCIDeviceStateMachine *deviceStateMachine;
@property (readonly) NSMutableDictionary *endpoints;
@property (copy) id /* block */ disconnectCompletion;
@property BOOL userRequestedDisconnect;
@property (readonly) int iousbDeviceSpeed;

- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)a0;
- (void)processDoorbell:(unsigned int)a0 withDeviceManager:(id)a1;

@end
