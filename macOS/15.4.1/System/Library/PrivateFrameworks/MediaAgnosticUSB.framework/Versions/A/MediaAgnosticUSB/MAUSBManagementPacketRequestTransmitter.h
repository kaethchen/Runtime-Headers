@class NSMutableDictionary, MAUSBQueue, NSObject, MAUSBProtocolConfiguration;
@protocol OS_dispatch_queue, MAUSBManagementPacketRequestTransmitterDelegate;

@interface MAUSBManagementPacketRequestTransmitter : MAUSBObject {
    id<MAUSBManagementPacketRequestTransmitterDelegate> _delegate;
    MAUSBProtocolConfiguration *_protocolConfig;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_outstandingRequests;
    unsigned short _maxOutstandingRequests;
    MAUSBQueue *_packetQueue;
    unsigned short _nextDialogToken;
}

@property (readonly) BOOL requestsOutstanding;

- (void).cxx_destruct;
- (void)reset;
- (void)cancelRequest:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)doInitialTransmit:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned short)getNextDialogToken;
- (id)getRequestForResponse:(id)a0;
- (id)initWithDelegate:(id)a0 protocolConfiguration:(id)a1 queue:(id)a2;
- (BOOL)outstandingPacketWithReservedDialogTokenField;
- (void)requestTimedOut:(id)a0;
- (void)setMaxOutstandingRequests:(unsigned short)a0;
- (BOOL)transmit:(id)a0 withCompletion:(id /* block */)a1;

@end
