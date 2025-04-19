@class NSString, MAUSBManagementHeader;

@interface MAUSBManagementPacket : MAUSBStructure

@property (readonly) MAUSBManagementHeader *header;
@property (readonly) NSString *name;
@property (readonly) BOOL requiresResponse;
@property (readonly) BOOL isResponse;
@property (readonly) BOOL requestTracked;
@property (readonly) BOOL dialogTokenFieldReserved;

- (void).cxx_destruct;
- (id)data;
- (BOOL)validate;
- (id)initWithBuffer:(id)a0;
- (void)setDialogToken:(unsigned short)a0;
- (void)setRetry:(BOOL)a0;
- (void)setHeaderLength;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 retry:(BOOL)a1 packetSubtype:(unsigned char)a2 handle:(unsigned short)a3 deviceAddress:(unsigned char)a4 ssid:(unsigned char)a5 statusCode:(unsigned char)a6 dialogToken:(unsigned short)a7;

@end
