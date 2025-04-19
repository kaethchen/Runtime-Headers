@class MAUSBDeviceVirtual20HubDevice, NSObject;
@protocol OS_dispatch_queue, MAUSBDeviceVirtual20HubPortDelegate;

@interface MAUSBDeviceVirtual20HubPort : MAUSBObject {
    id<MAUSBDeviceVirtual20HubPortDelegate> _delegate;
    BOOL _powered;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _highSpeed;
    BOOL _ignoreReset;
}

@property (readonly) unsigned char number;
@property (readonly) BOOL powered;
@property (readonly) BOOL enabled;
@property (readonly) unsigned short status;
@property (readonly) unsigned short statusChange;
@property (readonly) BOOL connected;
@property (readonly) MAUSBDeviceVirtual20HubDevice *device;
@property BOOL configuredForRootHub;

- (void).cxx_destruct;
- (void)reset;
- (void)setPowered:(BOOL)a0;
- (unsigned char)setPortFeature:(unsigned short)a0;
- (unsigned char)clearPortFeature:(unsigned short)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithNumber:(unsigned char)a0 delegate:(id)a1 queue:(id)a2;
- (BOOL)insertDevice:(id)a0;
- (void)notifyChange;
- (BOOL)removeDevice;

@end
