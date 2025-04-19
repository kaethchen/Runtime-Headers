@class MAUSBHostTransferManagerOUT;

@interface MAUSBHostRemoteEndpointOUT : MAUSBHostRemoteEndpoint <MAUSBHostTransferManagerDelegate> {
    MAUSBHostTransferManagerOUT *_transferManager;
}

- (void).cxx_destruct;
- (void)writeData:(id)a0 completion:(id /* block */)a1;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)hostTransferManager:(id)a0 transmitPacket:(id)a1;
- (void)hostTransferManagerOutstandingTransferRequestsChanged:(id)a0;
- (void)hostTransferManagerRegisterAsFlowControlled:(id)a0;
- (BOOL)hostTransferManagerTransferRequestAvailable:(id)a0;
- (void)hostTransferManagerTransferTimedOut:(id)a0;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 creditConsumptionUnit:(unsigned short)a6 receiveBufferSize:(unsigned int)a7 queue:(id)a8;
- (void)inputTransferResponse:(id)a0;

@end
