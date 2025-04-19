@class MTLIOAccelDevice;
@protocol MTLDeviceSPI;

@interface MTLIOAccelService : NSObject {
    struct IONotificationPort { } *_notifyPort;
    unsigned int _notifyObject;
    MTLIOAccelDevice<MTLDeviceSPI> *_weakDevice;
    Class _deviceClass;
}

@property (readonly) unsigned int acceleratorPort;
@property (readonly) unsigned long long registryID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_safeEjectCancelled;
- (void)_safeEjectRequested;
- (void)_wasTerminated;
- (id)initWithAcceleratorPort:(unsigned int)a0 deviceClass:(Class)a1;
- (id)weakDevice;

@end
