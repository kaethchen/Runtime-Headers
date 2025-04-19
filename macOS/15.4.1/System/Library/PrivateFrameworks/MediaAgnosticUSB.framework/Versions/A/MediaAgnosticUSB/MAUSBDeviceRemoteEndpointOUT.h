@class MAUSBDeviceTransferManagerOUT;

@interface MAUSBDeviceRemoteEndpointOUT : MAUSBDeviceRemoteEndpoint <MAUSBDeviceTransferManagerOUTDelegate> {
    MAUSBDeviceTransferManagerOUT *_transferManager;
    BOOL _deviceNotResponding;
}

- (void).cxx_destruct;
- (void)activate;
- (void)inputAckPacket:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)deviceTransferManagerOUT:(id)a0 deliverData:(id)a1 completion:(id /* block */)a2;
- (void)deviceTransferManagerOUT:(id)a0 requestCompleteForID:(unsigned char)a1;
- (void)deviceTransferManagerOUT:(id)a0 transmitPacket:(id)a1;
- (unsigned char)deviceTransferManagerOUTEndpointStatus:(id)a0;
- (void)deviceTransferManagerOUTTimedOut:(id)a0;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 elasticBuffer:(BOOL)a6 receiveBufferSize:(unsigned long long)a7 queue:(id)a8;
- (void)inputTransferRequest:(id)a0;
- (void)setDeviceNotResponding:(BOOL)a0;

@end
