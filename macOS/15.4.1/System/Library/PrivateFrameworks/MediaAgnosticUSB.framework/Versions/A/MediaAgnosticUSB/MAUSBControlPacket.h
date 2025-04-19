@class MAUSBHeader;

@interface MAUSBControlPacket : MAUSBStructure

@property (readonly) MAUSBHeader *header;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (void)setHeaderLength;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 retry:(BOOL)a1 packetSubtype:(unsigned char)a2 handle:(id)a3 deviceAddress:(unsigned char)a4 ssid:(unsigned char)a5 statusCode:(unsigned char)a6;

@end
