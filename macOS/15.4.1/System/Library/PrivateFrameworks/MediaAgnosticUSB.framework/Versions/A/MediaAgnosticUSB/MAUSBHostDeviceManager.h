@class MAUSBCapabilityResponsePacket, MAUSBPacketDumper, MAUSBHostCapabilities, MAUSBManagementPacketResponseCache, NSObject, NSMutableArray, MAUSBManagementPacketRequestTransmitter, MAUSBQueue, MAUSBProtocolConfiguration;
@protocol OS_dispatch_queue, MAUSBHostDeviceManagerDelegate;

@interface MAUSBHostDeviceManager : MAUSBObject <MAUSBManagementPacketRequestTransmitterDelegate, MAUSBHostUSBDeviceDelegate> {
    id<MAUSBHostDeviceManagerDelegate> _delegate;
    MAUSBHostCapabilities *_hostCapabilities;
    MAUSBPacketDumper *_dumper;
    MAUSBProtocolConfiguration *_protocolConfig;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _ssid;
    MAUSBCapabilityResponsePacket *_deviceCaps;
    unsigned short _outstandingTransferRequests;
    NSMutableArray *_usbDevices;
    MAUSBQueue *_flowControlledTransferManagers;
    MAUSBManagementPacketResponseCache *_managementPacketResponseCache;
    unsigned short _nextRequestDialogToken;
    MAUSBManagementPacketRequestTransmitter *_requestTransmitter;
}

@property (readonly) unsigned long long sessionState;
@property (readonly) unsigned char deviceAddress;

- (void).cxx_destruct;
- (void)setSessionState:(unsigned long long)a0;
- (BOOL)establishSessionWithCompletion:(id /* block */)a0;
- (BOOL)acceptDataPacket:(id)a0;
- (BOOL)acceptManagementPacket:(id)a0;
- (BOOL)activateEndpointsForHandle:(unsigned short)a0 endpointHandles:(id)a1 completion:(id /* block */)a2;
- (id)allocateDeviceForDeviceHandleResponse:(id)a0 withDeviceInfo:(id)a1;
- (BOOL)clearTransfersForHandle:(unsigned short)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;
- (BOOL)deleteEndpointsForHandle:(unsigned short)a0 endpointHandleList:(id)a1 completion:(id /* block */)a2;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (BOOL)disconnectHandle:(unsigned short)a0 completion:(id /* block */)a1;
- (void)handleCapabilityResponse:(id)a0;
- (void)handleControlEndpointHandleResponse:(id)a0 forRequest:(id)a1 usbDevice:(id)a2 completion:(id /* block */)a3;
- (BOOL)inactivateEndpointsForHandle:(unsigned short)a0 endpointHandles:(id)a1 suspended:(BOOL)a2 completion:(id /* block */)a3;
- (void)incrementNextExpectedRequestDialogToken;
- (id)initWithDelegate:(id)a0 hostCapabilities:(id)a1 mediaType:(unsigned long long)a2 queue:(id)a3 ssid:(unsigned char)a4 deviceAddress:(unsigned char)a5 captureFileLocation:(id)a6;
- (void)inputDataPacket:(id)a0 withSubtype:(unsigned char)a1;
- (void)inputManagementPacket:(unsigned char)a0 data:(id)a1;
- (void)inputManagementPacketRequest:(id)a0;
- (void)inputManagementPacketResponse:(id)a0;
- (void)inputPacket:(id)a0;
- (void)managementPacketRequestTransmitter:(id)a0 transmitPacket:(id)a1;
- (void)managementPacketRequestTransmitterTimedOut:(id)a0;
- (BOOL)modifyControlEndpointForHandle:(unsigned short)a0 endpointHandle:(id)a1 maxPacketSize:(unsigned short)a2 completion:(id /* block */)a3;
- (BOOL)openControlEndpointForHandle:(unsigned short)a0 completion:(id /* block */)a1;
- (BOOL)openEndpointsForHandle:(unsigned short)a0 standardEndpointDescriptors:(id)a1 completion:(id /* block */)a2;
- (BOOL)openUSBDeviceWithInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)readDataForHandle:(unsigned short)a0 length:(unsigned int)a1 endpointAddress:(unsigned char)a2 completion:(id /* block */)a3;
- (void)removeUSBDevice:(id)a0;
- (BOOL)resetEndpointsForHandle:(unsigned short)a0 resetInfoBlocks:(id)a1 completion:(id /* block */)a2;
- (BOOL)resetUSBDeviceForHandle:(unsigned short)a0 completion:(id /* block */)a1;
- (void)sendCapabilityRequestWithCompletion:(id /* block */)a0;
- (BOOL)setUSBDeviceAddressForHandle:(unsigned short)a0 WithTimeout:(unsigned short)a1 completion:(id /* block */)a2;
- (BOOL)startControlTransferRequestForHandle:(unsigned short)a0 setupPacket:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)transmitDataPacket:(id)a0;
- (void)transmitManagementPacket:(id)a0;
- (void)transmitManagementResponse:(id)a0;
- (BOOL)updateDeviceForHandle:(unsigned short)a0 maxExitLatency:(unsigned short)a1 hub:(BOOL)a2 numPorts:(unsigned char)a3 multipleTransactionTranslators:(BOOL)a4 transactionTranslatorThinkTime:(unsigned char)a5 integratedHubLatency:(BOOL)a6 deviceDescriptor:(id)a7 completion:(id /* block */)a8;
- (void)usbDevice:(id)a0 registerFlowControlledTransferManager:(id)a1;
- (void)usbDevice:(id)a0 transmitPacket:(id)a1;
- (id)usbDeviceForEndpointHandle:(unsigned short)a0;
- (id)usbDeviceForHandle:(unsigned short)a0;
- (void)usbDeviceOutstandingTransferRequestsChanged:(id)a0;
- (BOOL)usbDeviceTransferRequestAvailable:(id)a0;
- (void)usbDeviceTransferTimedOut:(id)a0;
- (BOOL)writeDataForHandle:(unsigned short)a0 data:(id)a1 endpointAddress:(unsigned char)a2 completion:(id /* block */)a3;

@end
