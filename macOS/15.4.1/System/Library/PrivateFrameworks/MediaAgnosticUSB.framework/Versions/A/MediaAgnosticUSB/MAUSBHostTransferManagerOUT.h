@class MAUSBTransferResponsePacket, MAUSBQueue, NSPredicate, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface MAUSBHostTransferManagerOUT : MAUSBHostTransferManager {
    unsigned char _requestID;
    unsigned char _activeRequestID;
    unsigned char _earliestRequestID;
    unsigned int _seqNumber;
    unsigned int _earliestUnacknowledged;
    unsigned int _transferReqRetries;
    unsigned long long _rxBufSize;
    unsigned int _maxReceiveBufferSize;
    unsigned short _creditConsumptionUnit;
    NSObject<OS_dispatch_source> *_timerSource;
    NSMutableArray *_transfers;
    NSMutableArray *_unacknowledgedPackets;
    MAUSBQueue *_requestQueue;
    MAUSBTransferResponsePacket *_lastEndOfTransferPacket;
    NSPredicate *_purgeCompleteTransfersPredicate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setSequenceNumber:(unsigned int)a0;
- (void)removeTransfer:(id)a0;
- (void)setRequestID:(unsigned char)a0;
- (void)setReceiveBufferSize:(unsigned long long)a0;
- (void)writeData:(id)a0 completion:(id /* block */)a1;
- (void)resetToInitialState;
- (void)sendNextRequest;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 creditConsumptionUnit:(unsigned short)a6 receiveBufferSize:(unsigned int)a7 queue:(id)a8 requestID:(unsigned char)a9;
- (void)dequeueRequests;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)generateTransferRequests;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 creditConsumptionUnit:(unsigned short)a6 receiveBufferSize:(unsigned int)a7 queue:(id)a8;
- (void)initializeTransfer:(id)a0 completion:(id /* block */)a1;
- (void)inputTransferResp:(id)a0;
- (void)purgeCompletedTransfers;
- (void)replayPacketsStartingAtSequenceNumber:(unsigned int)a0;
- (BOOL)requestIDInvalid:(unsigned char)a0;
- (BOOL)sendTransferRequestForTransfer:(id)a0 sequenceNumber:(unsigned int)a1 ackRequest:(BOOL)a2 payloadData:(id)a3 remainingSize:(unsigned long long)a4;
- (void)setActiveRequestID:(unsigned char)a0;
- (void)setEarliestRequestID:(unsigned char)a0;
- (void)setEarliestUnacknowledged:(unsigned int)a0;
- (void)startTimerProcess;
- (void)timerProcess;
- (id)transferForRequestID:(unsigned char)a0;
- (void)transmitAckForRequestID:(unsigned char)a0 sequenceNumber:(unsigned int)a1 statusCode:(unsigned char)a2;
- (id)unacknowledgedImmediatePacketForRequestID:(unsigned char)a0;
- (void)updateEarliestRequestID;
- (void)updateReceiveBufferSizeForTransferResponse:(id)a0;

@end
