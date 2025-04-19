@class NSData, NSMutableData;

@interface MAUSBDeviceTransferOUT : MAUSBObject {
    unsigned long long _remSize;
    unsigned long long _deliveredSize;
    BOOL _transferError;
    BOOL _transferComplete;
    BOOL _endOfTransferDetected;
    NSMutableData *_data;
}

@property (readonly) unsigned char requestID;
@property (readonly) unsigned long long totalSize;
@property unsigned long long deliveredSize;
@property (readonly) unsigned long long remSize;
@property BOOL transferError;
@property BOOL transferComplete;
@property BOOL endOfTransferDetected;
@property (readonly) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (void)appendData:(id)a0;
- (void)clearData;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRequestID:(unsigned char)a0 receivedData:(id)a1 remainingSize:(unsigned long long)a2;
- (void)setRemSize:(unsigned long long)a0;

@end
