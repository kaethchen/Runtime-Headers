@class NSData;

@interface MAUSBHostTransferOUT : MAUSBObject {
    unsigned long long _remSize;
    BOOL _transferError;
    BOOL _transferComplete;
    BOOL _transferAcknowledged;
    int _responseTimer;
    unsigned int _transferReqRetryCounter;
    unsigned int _ackTransferSN;
    int _transferCompletionTimer;
}

@property (readonly) unsigned char requestID;
@property (readonly) unsigned long long length;
@property unsigned long long remSize;
@property BOOL transferError;
@property BOOL transferComplete;
@property BOOL transferAcknowledged;
@property int responseTimer;
@property unsigned int transferReqRetryCounter;
@property unsigned int ackTransferSN;
@property int transferCompletionTimer;
@property (readonly) id /* block */ completionBlock;
@property (readonly) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRequestID:(unsigned char)a0 data:(id)a1 completion:(id /* block */)a2;
- (id)payloadDataForReceiveBufferSize:(unsigned long long)a0;

@end
