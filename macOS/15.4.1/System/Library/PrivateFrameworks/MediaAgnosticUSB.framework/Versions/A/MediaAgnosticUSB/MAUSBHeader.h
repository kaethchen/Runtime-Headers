@class NSString;

@interface MAUSBHeader : MAUSBStructure

@property (readonly) unsigned char version;
@property (readonly) BOOL host;
@property BOOL retry;
@property (readonly) BOOL timestampPresent;
@property (readonly) unsigned char packetType;
@property (readonly) unsigned char packetSubtype;
@property (readonly) unsigned short length;
@property (readonly) unsigned short handle;
@property (readonly) unsigned char deviceAddress;
@property (readonly) unsigned char ssid;
@property (readonly) unsigned char statusCode;
@property (readonly) NSString *statusCodeString;
@property (readonly) NSString *name;

- (id)data;
- (void)setLength:(unsigned short)a0;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithVersion:(unsigned char)a0 host:(BOOL)a1 retry:(BOOL)a2 timestampPresent:(BOOL)a3 packetType:(unsigned char)a4 packetSubtype:(unsigned char)a5 length:(unsigned short)a6 handle:(unsigned short)a7 deviceAddress:(unsigned char)a8 ssid:(unsigned char)a9 statusCode:(unsigned char)a10;

@end
