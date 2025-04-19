@class MAUSBProtocolConfiguration, MAUSBHostRemoteControlEndpoint, NSMutableDictionary, MAUSBHostUSBDeviceInfo, NSNumber, NSObject;
@protocol OS_dispatch_queue, MAUSBHostUSBDeviceDelegate;

@interface MAUSBHostUSBDevice : MAUSBObject <MAUSBHostRemoteEndpointDelegate> {
    id<MAUSBHostUSBDeviceDelegate> _delegate;
    unsigned char _deviceAddress;
    unsigned char _ssid;
    NSObject<OS_dispatch_queue> *_queue;
    MAUSBProtocolConfiguration *_protocolConfig;
    MAUSBHostRemoteControlEndpoint *_controlEndpoint;
    NSNumber *_usbDeviceAddress;
    NSMutableDictionary *_inEndpoints;
    NSMutableDictionary *_outEndpoints;
}

@property (readonly) unsigned short handle;
@property (readonly) unsigned short outstandingTransferRequests;
@property (readonly) MAUSBHostUSBDeviceInfo *deviceInfo;
@property (readonly) unsigned char busNumber;
@property (retain) NSNumber *usbDeviceAddress;

- (void).cxx_destruct;
- (void)inactivateEndpointsWithHandles:(id)a0;
- (void)activateEndpointsWithHandles:(id)a0;
- (void)cancelAllTransfersForINEndpointAddress:(unsigned char)a0;
- (BOOL)createEndpointForDescriptor:(id)a0;
- (BOOL)createEndpointsForMAUSBDescriptors:(id)a0 handleRequest:(id)a1;
- (BOOL)createEndpointsForMAUSBDescriptors:(id)a0 standardDescriptors:(id)a1;
- (void)deleteEndpointsForHandleList:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)endpointForHandle:(unsigned short)a0;
- (id)getClearTransfersInfoBlockForINEndpointAddress:(unsigned char)a0;
- (void)hostRemoteEndpoint:(id)a0 registerFlowControlledTransferManager:(id)a1;
- (void)hostRemoteEndpoint:(id)a0 transmitPacket:(id)a1;
- (void)hostRemoteEndpointOutstandingTransferRequestsChanged:(id)a0;
- (BOOL)hostRemoteEndpointTransferRequestAvailable:(id)a0;
- (void)hostRemoteEndpointTransferTimedOut:(id)a0;
- (id)inEndpointForAddress:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 handle:(unsigned short)a3 protocolConfig:(id)a4 deviceInfo:(id)a5 queue:(id)a6;
- (void)inputDataPacket:(id)a0;
- (id)outEndpointForAddress:(unsigned char)a0;
- (BOOL)readDataLength:(unsigned int)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;
- (void)resetEndpointsWithHandles:(id)a0;
- (BOOL)startControlTransferRequestForHandle:(unsigned short)a0 setupPacket:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)updateControlEndpointHandle:(id)a0;
- (BOOL)writeData:(id)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;

@end
