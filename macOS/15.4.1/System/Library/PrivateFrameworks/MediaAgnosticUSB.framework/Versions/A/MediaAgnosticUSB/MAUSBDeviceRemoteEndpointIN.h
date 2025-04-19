@class MAUSBClearTransfersRequestPacket, MAUSBDeviceTransferManagerIN, NSObject;
@protocol OS_dispatch_queue;

@interface MAUSBDeviceRemoteEndpointIN : MAUSBDeviceRemoteEndpoint <MAUSBDeviceTransferManagerINDelegate> {
    MAUSBDeviceTransferManagerIN *_transferManager;
    NSObject<OS_dispatch_queue> *_queue;
    MAUSBClearTransfersRequestPacket *_pendingClearTransfersReq;
    unsigned long long _pendingClearTransfersReqCompletions;
}

@property (readonly) BOOL clearTransfersRequestPending;

- (void).cxx_destruct;
- (void)reset;
- (void)receivedData:(id)a0;
- (void)setErrorStatus:(unsigned char)a0;
- (void)inputAckPacket:(id)a0;
- (void)clearedTransferRequestComplete;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)deviceTransferManagerIN:(id)a0 requestCompleteForID:(unsigned char)a1;
- (void)deviceTransferManagerIN:(id)a0 transmitPacket:(id)a1;
- (unsigned char)deviceTransferManagerINEndpointStatus:(id)a0;
- (void)deviceTransferManagerINTimedOut:(id)a0;
- (void)deviceTransfermanagerIN:(id)a0 readDataLength:(unsigned int)a1;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6;
- (void)inputTransferRequest:(id)a0;
- (void)sendClearTransfersResponse;
- (unsigned char)startClearTransfersForRequest:(id)a0;
- (void)transferCancelled;

@end
