@class NSString, MAUSBDeviceTransferManagerIN, MAUSBControlSetupPacket, NSMutableData, MAUSBDeviceTransferManagerOUT;

@interface MAUSBDeviceRemoteControlEndpoint : MAUSBDeviceRemoteEndpoint <MAUSBDeviceTransferManagerOUTDelegate, MAUSBDeviceTransferManagerINDelegate> {
    BOOL _elasticBuffer;
    unsigned long long _receiveBufferSize;
    NSString *_logPrefix;
    unsigned char _requestID;
    unsigned long long _transferStage;
    MAUSBDeviceTransferManagerOUT *_outTransferManager;
    MAUSBDeviceTransferManagerIN *_inTransferManager;
    NSMutableData *_outData;
    MAUSBControlSetupPacket *_setupPacket;
}

- (void).cxx_destruct;
- (void)transferComplete;
- (void)inputAckPacket:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)deviceTransferManagerIN:(id)a0 requestCompleteForID:(unsigned char)a1;
- (void)deviceTransferManagerIN:(id)a0 transmitPacket:(id)a1;
- (unsigned char)deviceTransferManagerINEndpointStatus:(id)a0;
- (void)deviceTransferManagerINTimedOut:(id)a0;
- (void)deviceTransferManagerOUT:(id)a0 deliverData:(id)a1 completion:(id /* block */)a2;
- (void)deviceTransferManagerOUT:(id)a0 requestCompleteForID:(unsigned char)a1;
- (void)deviceTransferManagerOUT:(id)a0 transmitPacket:(id)a1;
- (unsigned char)deviceTransferManagerOUTEndpointStatus:(id)a0;
- (void)deviceTransferManagerOUTTimedOut:(id)a0;
- (void)deviceTransfermanagerIN:(id)a0 readDataLength:(unsigned int)a1;
- (void)initTransfer;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 protocolConfig:(id)a4 elasticBuffer:(BOOL)a5 receiveBufferSize:(unsigned long long)a6 queue:(id)a7;
- (void)inputTransferRequest:(id)a0;
- (void)sendTransferResponseForRequestID:(unsigned char)a0 sequenceNumber:(unsigned int)a1 endOfTransfer:(BOOL)a2 credit:(unsigned int)a3 statusCode:(unsigned char)a4;
- (void)setTransferStage:(unsigned long long)a0;

@end
