@interface ICDFireWireDevice : ICDDevice

@property (readonly) unsigned long long guid;

- (id)initWithGUID:(unsigned long long)a0;
- (id)initWithGUID:(unsigned long long)a0 ioregPath:(char[512])a1;
- (short)openDevice;
- (void)registerDevice;
- (void)unregisterDevice;
- (void)updateDeviceDictionary:(id)a0;

@end
