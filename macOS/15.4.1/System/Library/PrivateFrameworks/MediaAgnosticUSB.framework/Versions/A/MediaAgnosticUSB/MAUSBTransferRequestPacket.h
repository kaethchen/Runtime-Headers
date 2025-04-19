@class NSData;

@interface MAUSBTransferRequestPacket : MAUSBDataPacket

@property (readonly) NSData *payloadData;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(id)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 acknowledgementRequest:(BOOL)a3 negativeCredit:(BOOL)a4 endOfTransfer:(BOOL)a5 transferType:(unsigned char)a6 streamID:(unsigned short)a7 sequenceNumber:(unsigned int)a8 requestID:(unsigned char)a9 remainingSizeCredit:(unsigned int)a10 payloadData:(id)a11;

@end
