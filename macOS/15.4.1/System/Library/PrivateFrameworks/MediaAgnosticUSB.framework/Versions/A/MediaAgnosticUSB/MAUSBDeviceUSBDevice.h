@class NSMutableDictionary, MAUSBDeviceRemoteControlEndpoint, NSObject, MAUSBProtocolConfiguration;
@protocol OS_dispatch_queue, MAUSBDeviceUSBDeviceDelegate;

@interface MAUSBDeviceUSBDevice : MAUSBObject <MAUSBDeviceRemoteControlEndpointDelegate, MAUSBDeviceRemoteEndpointINDelegate, MAUSBDeviceRemoteEndpointOUTDelegate> {
    id<MAUSBDeviceUSBDeviceDelegate> _delegate;
    MAUSBDeviceRemoteControlEndpoint *_controlEndpoint;
    unsigned char _deviceAddress;
    unsigned char _ssid;
    MAUSBProtocolConfiguration *_protocolConfig;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _usbDeviceAddress;
    NSMutableDictionary *_inEndpoints;
    NSMutableDictionary *_outEndpoints;
}

@property (readonly) unsigned short handle;
@property (readonly) unsigned char busNumber;
@property unsigned char usbDeviceAddress;

- (void).cxx_destruct;
- (void)configureEndpointsForSuperSpeedDescriptors:(id)a0 responseDescriptors:(id)a1;
- (void)remoteControlEndpoint:(id)a0 controlRequestWithSetupPacket:(id)a1 completion:(id /* block */)a2;
- (void)inactivateEndpointsWithHandles:(id)a0;
- (void)activateEndpointsWithHandles:(id)a0;
- (void)configureEndpointsForRequest:(id)a0 responseDescriptors:(id)a1;
- (void)configureEndpointsForStandardDescriptors:(id)a0 responseDescriptors:(id)a1;
- (void)configureEndpointsForSuperSpeedPlusDescriptors:(id)a0 responseDescriptors:(id)a1;
- (void)deleteEndpointsForHandleList:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)deviceRemoteEndpoint:(id)a0 transmitPacket:(id)a1;
- (void)deviceRemoteEndpointIN:(id)a0 clearTransfersRequestComplete:(id)a1 status:(unsigned char)a2 cancelTransfersStatusBlocks:(id)a3;
- (void)deviceRemoteEndpointIN:(id)a0 readDataLength:(unsigned int)a1;
- (BOOL)deviceRemoteEndpointINClearTransfers:(id)a0;
- (void)deviceRemoteEndpointOUT:(id)a0 deliverData:(id)a1 completion:(id /* block */)a2;
- (void)deviceRemoteEndpointTransferTimedOut:(id)a0;
- (id)endpointForHandle:(id)a0;
- (id)initWithDelegate:(id)a0 handle:(unsigned short)a1 busNumber:(unsigned char)a2 usbDeviceAddress:(unsigned char)a3 deviceAddress:(unsigned char)a4 ssid:(unsigned char)a5 protocolConfig:(id)a6 queue:(id)a7;
- (void)inputDataPacket:(id)a0;
- (void)remoteControlEndpoint:(id)a0 controlRequestWithSetupPacket:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)resetEndpointsForInfoBlocks:(id)a0;
- (unsigned char)startClearTransfersForRequest:(id)a0;
- (void)updateControlEndpointHandle:(id)a0;

@end
