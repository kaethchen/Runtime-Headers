@class MAUSBHostTransferManagerOUT;

@interface MAUSBHostControlTransferOUT : MAUSBObject

@property (readonly) unsigned char requestID;
@property (readonly) MAUSBHostTransferManagerOUT *transferManager;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithTransferManager:(id)a0 requestID:(unsigned char)a1;

@end
