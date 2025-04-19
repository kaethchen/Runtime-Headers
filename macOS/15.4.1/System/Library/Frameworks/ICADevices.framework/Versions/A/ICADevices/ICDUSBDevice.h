@class NSString;

@interface ICDUSBDevice : ICDDevice {
    unsigned short _usbVendorID;
    unsigned short _usbProductID;
}

@property (readonly) unsigned int locationID;
@property (readonly) NSString *IOUSBDeviceIOServicePath;
@property (readonly) NSString *usbSerialNumberString;

- (void)dealloc;
- (id)initWithLocationID:(unsigned int)a0;
- (id)initWithLocationID:(unsigned int)a0 ioregPath:(char[512])a1;
- (short)openDevice;
- (void)registerDevice;
- (void)unregisterDevice;
- (void)updateDeviceDictionary:(id)a0;

@end
