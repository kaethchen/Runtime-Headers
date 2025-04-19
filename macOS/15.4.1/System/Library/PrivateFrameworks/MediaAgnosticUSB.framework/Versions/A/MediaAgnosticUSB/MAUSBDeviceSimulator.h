@class MAUSBHostController, MAUSBDeviceDeviceManager, NSObject;
@protocol OS_dispatch_queue, MAUSBDeviceSimulatorDelegate;

@interface MAUSBDeviceSimulator : MAUSBObject <MAUSBHostControllerDelegate, MAUSBDeviceDeviceManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _mausbSpeed;
    MAUSBHostController *_hostController;
    MAUSBDeviceDeviceManager *_deviceManager;
    BOOL _started;
    id<MAUSBDeviceSimulatorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)start;
- (void)establishSession;
- (void)deviceDeviceManager:(id)a0 sessionStateChanged:(unsigned long long)a1;
- (void)deviceDeviceManager:(id)a0 transmitDataPacket:(id)a1;
- (void)deviceDeviceManager:(id)a0 transmitManagementPacket:(id)a1;
- (void)hostController:(id)a0 errorForDeviceHandle:(unsigned short)a1;
- (void)hostController:(id)a0 transmitDataPacket:(id)a1;
- (void)hostController:(id)a0 transmitManagementPacket:(id)a1;
- (void)hostControllerReady:(id)a0;
- (id)initWithPAL:(id)a0 delegate:(id)a1 captureFileLocation:(id)a2;
- (id)initWithVirtualDevices:(id)a0 delegate:(id)a1 captureFileLocation:(id)a2;

@end
