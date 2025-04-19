@class NSData;

@interface MAUSBTransferResponsePacket : MAUSBDataPacket

@property (readonly) NSData *payloadData;

- (void).cxx_destruct;
- (id)data;
- (void)setSequenceNumber:(unsigned int)a0;
- (id)initWithBuffer:(id)a0;
- (void)setCredit:(unsigned int)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(id)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 endpointStatus:(unsigned char)a4 acknowledgementRequest:(BOOL)a5 negativeCredit:(BOOL)a6 endOfTransfer:(BOOL)a7 transferType:(unsigned char)a8 streamID:(unsigned short)a9 sequenceNumber:(unsigned int)a10 requestID:(unsigned char)a11 remainingSizeCredit:(unsigned int)a12 payloadData:(id)a13;

@end
