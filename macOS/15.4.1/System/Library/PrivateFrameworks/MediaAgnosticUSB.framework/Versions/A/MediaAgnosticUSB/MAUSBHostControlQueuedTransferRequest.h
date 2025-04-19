@class NSData, MAUSBControlSetupPacket;

@interface MAUSBHostControlQueuedTransferRequest : MAUSBObject

@property (readonly) MAUSBControlSetupPacket *setupPacket;
@property (readonly) NSData *data;
@property (readonly) id /* block */ completion;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithSetupPacket:(id)a0 data:(id)a1 completion:(id /* block */)a2;

@end
