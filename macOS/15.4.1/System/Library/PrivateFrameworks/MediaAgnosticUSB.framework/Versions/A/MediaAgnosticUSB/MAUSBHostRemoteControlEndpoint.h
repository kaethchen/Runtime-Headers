@class MAUSBTransferResponsePacket, NSString, MAUSBQueue, MAUSBControlSetupPacket, NSMutableArray, MAUSBTransferRequestPacket;

@interface MAUSBHostRemoteControlEndpoint : MAUSBHostRemoteEndpoint <MAUSBHostTransferManagerDelegate> {
    MAUSBControlSetupPacket *_transferInProgress;
    unsigned long long _transferStage;
    NSString *_logPrefix;
    unsigned int _deviceReceiveBufferSize;
    unsigned char _requestID;
    unsigned short _creditConsumptionUnit;
    MAUSBQueue *_requestQueue;
    NSMutableArray *_inTransfers;
    NSMutableArray *_outTransfers;
    BOOL _errorDetected;
    MAUSBTransferRequestPacket *_lastINSetupRequest;
    MAUSBTransferResponsePacket *_firstINDataResponse;
}

- (void).cxx_destruct;
- (void)addOpenTransferIN:(id)a0;
- (void)addOpenTransferOUT:(id)a0;
- (void)completeQueuedRequestsWithStatus:(unsigned char)a0;
- (void)completeTransferWithStatus:(unsigned char)a0 data:(id)a1 completion:(id /* block */)a2;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)enqueueTransferRequestWithSetupPacket:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)hostTransferManager:(id)a0 transmitPacket:(id)a1;
- (void)hostTransferManagerOutstandingTransferRequestsChanged:(id)a0;
- (void)hostTransferManagerRegisterAsFlowControlled:(id)a0;
- (BOOL)hostTransferManagerTransferRequestAvailable:(id)a0;
- (void)hostTransferManagerTransferTimedOut:(id)a0;
- (id)inTransferForRequestID:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 protocolConfig:(id)a4 deviceReceiveBufferSize:(unsigned int)a5 creditConsumptionUnit:(unsigned short)a6 queue:(id)a7;
- (void)inputTransferResponse:(id)a0;
- (id)outTransferForRequestID:(unsigned char)a0;
- (void)removeInTransferForTransferManager:(id)a0;
- (void)removeOutTransferForTransferManager:(id)a0;
- (void)setTransferStage:(unsigned long long)a0;
- (void)startInTransferRequestWithData:(id)a0 responseLength:(unsigned short)a1 completion:(id /* block */)a2;
- (void)startNextTransfer;
- (void)startOutTransferRequestWithData:(id)a0 completion:(id /* block */)a1;
- (BOOL)startTransferRequestWithSetupPacket:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (BOOL)transferRequestAvailable;
- (void)updateOutstandingTransferRequests;

@end
