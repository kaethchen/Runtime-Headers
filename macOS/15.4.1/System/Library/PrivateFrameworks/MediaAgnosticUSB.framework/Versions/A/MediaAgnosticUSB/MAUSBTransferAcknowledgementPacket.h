@interface MAUSBTransferAcknowledgementPacket : MAUSBDataPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithHandle:(id)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 negativeCredit:(BOOL)a4 endOfTransfer:(BOOL)a5 transferType:(unsigned char)a6 streamID:(unsigned short)a7 sequenceNumber:(unsigned int)a8 requestID:(unsigned char)a9;

@end
