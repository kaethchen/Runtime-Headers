@class MAUSBDataHeader;

@interface MAUSBDataPacket : MAUSBStructure

@property (readonly) MAUSBDataHeader *header;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (void)setRetry:(BOOL)a0;
- (void)setHeaderLength;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 retry:(BOOL)a1 packetSubtype:(unsigned char)a2 length:(unsigned short)a3 handle:(id)a4 deviceAddress:(unsigned char)a5 ssid:(unsigned char)a6 statusCode:(unsigned char)a7 endpointStatus:(unsigned char)a8 acknowledgementRequest:(BOOL)a9 negativeCredit:(BOOL)a10 endOfTransfer:(BOOL)a11 transferType:(unsigned char)a12 streamID:(unsigned short)a13 sequenceNumber:(unsigned int)a14 requestID:(unsigned char)a15 remainingSizeCredit:(unsigned int)a16;

@end
