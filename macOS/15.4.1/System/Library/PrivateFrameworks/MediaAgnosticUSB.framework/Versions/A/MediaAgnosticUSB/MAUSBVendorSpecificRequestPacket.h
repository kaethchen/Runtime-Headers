@class NSData;

@interface MAUSBVendorSpecificRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short vendorID;
@property (readonly) NSData *vendorData;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(BOOL)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 vendorID:(unsigned short)a4;

@end
