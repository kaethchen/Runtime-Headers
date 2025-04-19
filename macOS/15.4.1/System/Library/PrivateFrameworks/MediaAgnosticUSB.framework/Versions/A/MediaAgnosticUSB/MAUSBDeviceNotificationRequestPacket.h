@class NSData;

@interface MAUSBDeviceNotificationRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned char notificationType;
@property (readonly) NSData *notificationData;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (BOOL)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 notificationType:(unsigned char)a4 notificationData:(id)a5;

@end
