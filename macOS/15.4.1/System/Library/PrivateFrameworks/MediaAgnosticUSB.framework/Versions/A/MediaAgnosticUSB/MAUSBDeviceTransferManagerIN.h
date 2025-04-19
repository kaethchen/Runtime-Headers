@class MAUSBProtocolConfiguration, NSString, NSObject, NSPredicate, NSMutableData, MAUSBEndpointHandle, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, MAUSBDeviceTransferManagerINDelegate;

@interface MAUSBDeviceTransferManagerIN : MAUSBObject {
    id<MAUSBDeviceTransferManagerINDelegate> _delegate;
    unsigned char _requestID;
    unsigned char _activeRequestID;
    unsigned char _earliestRequestID;
    unsigned int _seqNumber;
    unsigned int _earliestUnacknowledged;
    int _keepAliveTimer;
    int _responseTimer;
    unsigned int _transferRespRetryCounter;
    unsigned int _transferRespRetries;
    BOOL _delayed;
    unsigned char _deviceAddress;
    unsigned char _ssid;
    unsigned char _transferType;
    NSString *_logPrefix;
    NSMutableArray *_transfers;
    MAUSBProtocolConfiguration *_protocolConfig;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSMutableData *_dataQueue;
    NSMutableArray *_immediateResponses;
    unsigned char _errorStatus;
    NSPredicate *_purgeCompleteTransfersPredicate;
}

@property (readonly) MAUSBEndpointHandle *handle;
@property (readonly) unsigned char nextExpectedRequestID;
@property (readonly) unsigned long long openTransferCount;
@property (readonly) unsigned char lastTransferResponseRequestID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setSequenceNumber:(unsigned int)a0;
- (void)removeTransfer:(id)a0;
- (void)receivedData:(id)a0;
- (void)setRequestID:(unsigned char)a0;
- (void)setDelayed:(BOOL)a0;
- (void)setErrorStatus:(unsigned char)a0;
- (void)setResponseTimer:(int)a0;
- (void)resetToInitialState;
- (void)setKeepAliveTimer:(int)a0;
- (void)inputAckPacket:(id)a0;
- (id)dequeueDataOfLength:(unsigned long long)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)filterImmediateResponses:(id /* block */)a0;
- (void)generateTransferResponses;
- (unsigned int)getNextSequenceNumber;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6 requestID:(unsigned char)a7;
- (void)inputTransferRequest:(id)a0;
- (void)purgeCompletedTransfers;
- (BOOL)requestIDInvalid:(unsigned char)a0;
- (void)resetSequenceNumberToZero;
- (void)sendTransferResponseForRequestID:(unsigned char)a0 sequenceNumber:(unsigned int)a1 endOfTransfer:(BOOL)a2 ackRequest:(BOOL)a3 remainingSize:(unsigned int)a4 statusCode:(unsigned char)a5 payloadData:(id)a6;
- (BOOL)sequenceNumberInvalid:(unsigned int)a0;
- (void)setActiveRequestID:(unsigned char)a0;
- (void)setEarliestRequestID:(unsigned char)a0;
- (void)setEarliestUnacknowledged:(unsigned int)a0;
- (void)setTransferRespRetryCounter:(unsigned int)a0;
- (void)startTimerProcess;
- (void)timerProcess;
- (void)transferCancelled;
- (id)transferForRequestID:(unsigned char)a0;
- (void)updateDataForActiveTransfer;

@end
