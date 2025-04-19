@class NSData;

@interface MAUSBControlSetupPacket : MAUSBObject

@property (readonly) unsigned char bmRequestType;
@property (readonly) unsigned char bRequest;
@property (readonly) unsigned short wValue;
@property (readonly) unsigned short wIndex;
@property (readonly) unsigned short wLength;
@property (readonly) unsigned int direction;
@property (readonly) NSData *data;

- (BOOL)isEqual:(id)a0;
- (id)initWithRecipient:(unsigned char)a0 type:(unsigned char)a1 direction:(unsigned int)a2 request:(unsigned char)a3 wValue:(unsigned short)a4 wIndex:(unsigned short)a5 wLength:(unsigned short)a6;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRequestType:(unsigned char)a0 request:(unsigned char)a1 wValue:(unsigned short)a2 wIndex:(unsigned short)a3 wLength:(unsigned short)a4;
- (id)initWithSetupData:(struct USBSetupData { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)a0;

@end
