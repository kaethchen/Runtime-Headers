@class MAUSBQueue, NSPredicate, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface MAUSBHostTransferManagerIN : MAUSBHostTransferManager {
    unsigned char _requestID;
    unsigned char _activeRequestID;
    unsigned char _earliestRequestID;
    unsigned int _seqNumber;
    long long _keepAliveTimer;
    unsigned int _transferReqRetryCounter;
    unsigned int _transferReqRetries;
    NSMutableArray *_transfers;
    NSObject<OS_dispatch_source> *_timerSource;
    MAUSBQueue *_requestQueue;
    NSPredicate *_purgeCompleteTransfersPredicate;
}

@property (readonly) unsigned char nextRequestID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setSequenceNumber:(unsigned int)a0;
- (void)removeTransfer:(id)a0;
- (void)setRequestID:(unsigned char)a0;
- (void)resetToInitialState;
- (void)sendNextRequest;
- (void)setKeepAliveTimer:(long long)a0;
- (void)dequeueRequests;
- (void)cancelAllTransferRequests;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6 requestID:(unsigned char)a7;
- (void)initializeTransfer:(unsigned int)a0 completion:(id /* block */)a1;
- (void)inputTransferResp:(id)a0;
- (void)invalidateAndRestartTransfersBeginningAtRequestID:(unsigned char)a0;
- (void)purgeCompletedTransfers;
- (void)readDataWithLength:(unsigned int)a0 completion:(id /* block */)a1;
- (void)respondBasedOnSequenceNumber:(id)a0 transfer:(id)a1;
- (void)sendCompletionForTransfer:(id)a0 withStatusCode:(unsigned char)a1;
- (void)setActiveRequestID:(unsigned char)a0;
- (void)setEarliestRequestID:(unsigned char)a0;
- (void)setTransferReqRetryCounter:(unsigned int)a0;
- (void)startTimerProcess;
- (void)submitTransferRequest:(id)a0 initialRequest:(BOOL)a1;
- (void)timerProcess;
- (BOOL)transferIsOpenButNotActive:(id)a0;
- (id)transferRequestForRequestID:(unsigned char)a0;
- (BOOL)transferResponseExpected;
- (void)transmitAckForRequestID:(unsigned char)a0 sequenceNumber:(unsigned int)a1 statusCode:(unsigned char)a2;
- (void)updateEarliestRequestID;

@end
