@interface USBDeviceStealer : MAUSBObject {
    unsigned int _deviceService;
    struct IOUSBDeviceStruct942 **_usbDeviceInterface;
    unsigned int _locationID;
}

- (void)dealloc;
- (BOOL)initUSB;
- (id)initWithLocationID:(unsigned int)a0;
- (struct __CFDictionary { } *)getDeviceMatchingDictionary;
- (BOOL)stealDevice;

@end
