@class MAUSBProtocolConfiguration, NSMutableArray, NSString, MAUSBTransferResponsePacket, MAUSBEndpointHandle, NSObject;
@protocol OS_dispatch_queue, MAUSBDeviceTransferManagerOUTDelegate, OS_dispatch_source;

@interface MAUSBDeviceTransferManagerOUT : MAUSBObject {
    unsigned char _requestID;
    unsigned char _activeRequestID;
    unsigned char _earliestRequestID;
    unsigned int _seqNumber;
    int _responseTimer;
    unsigned int _transferRespRetryCounter;
    unsigned int _transferRespRetries;
    unsigned long long _rxBufSize;
    unsigned long long _occupancy;
    id<MAUSBDeviceTransferManagerOUTDelegate> _delegate;
    MAUSBEndpointHandle *_handle;
    unsigned char _deviceAddress;
    unsigned char _ssid;
    unsigned char _transferType;
    MAUSBProtocolConfiguration *_protocolConfig;
    BOOL _elasticBuffer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSMutableArray *_transfers;
    NSString *_logPrefix;
    NSMutableArray *_immediateResponses;
    MAUSBTransferResponsePacket *_lastEndOfTransferPacket;
    BOOL _changeReceiveBufferSizePacketWaitingForAcknowledgement;
}

@property BOOL deviceNotResponding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setSequenceNumber:(unsigned int)a0;
- (void)setRequestID:(unsigned char)a0;
- (unsigned int)availableCredit;
- (void)setResponseTimer:(int)a0;
- (void)setReceiveBufferSize:(unsigned long long)a0;
- (void)resetToInitialState;
- (void)setOccupancy:(unsigned long long)a0;
- (void)inputAckPacket:(id)a0;
- (void)changeReceiveBufferSize:(unsigned int)a0;
- (void)deliveryConfirmationForTransfer:(id)a0 status:(unsigned char)a1 length:(unsigned long long)a2;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)filterImmediateResponses:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 elasticBuffer:(BOOL)a6 queue:(id)a7 receiveBufferSize:(unsigned long long)a8;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 elasticBuffer:(BOOL)a6 queue:(id)a7 receiveBufferSize:(unsigned long long)a8 requestID:(unsigned char)a9;
- (void)inputTransferRequest:(id)a0;
- (void)sendTransferResponseForRequestID:(unsigned char)a0 sequenceNumber:(unsigned int)a1 endOfTransfer:(BOOL)a2 credit:(unsigned int)a3 statusCode:(unsigned char)a4;
- (void)setActiveRequestID:(unsigned char)a0;
- (void)setEarliestRequestID:(unsigned char)a0;
- (void)setTransferRespRetryCounter:(unsigned int)a0;
- (void)startTimerProcess;
- (void)timerProcess;
- (id)transferForRequestID:(unsigned char)a0;

@end
