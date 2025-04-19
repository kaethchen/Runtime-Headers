@class MAUSBHostTransferManagerIN, MAUSBHostTransferManagerOUT;

@interface MAUSBHostControlTransferIN : MAUSBObject

@property (readonly) unsigned char requestID;
@property (readonly) MAUSBHostTransferManagerIN *inTransferManager;
@property (retain) MAUSBHostTransferManagerOUT *outTransferManager;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithINTransferManager:(id)a0 outTransferManager:(id)a1 requestID:(unsigned char)a2;

@end
