@class MAUSBRouteString, NSObject;
@protocol OS_dispatch_queue, MAUSBDevicePAL;

@interface MAUSBDeviceVirtual20HubDevice : MAUSBObject {
    BOOL _palPrintable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) id<MAUSBDevicePAL> pal;
@property (readonly) unsigned short deviceHandle;
@property (readonly) unsigned char usbDeviceAddress;
@property (readonly) MAUSBRouteString *routeString;
@property BOOL destroyPending;

- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDevicePAL:(id)a0 deviceHandle:(unsigned short)a1 usbDeviceAddress:(unsigned char)a2 routeString:(id)a3 queue:(id)a4;
- (id)initWithHubDevicePAL:(id)a0 deviceHandle:(unsigned short)a1 usbDeviceAddress:(unsigned char)a2 routeString:(id)a3 queue:(id)a4;

@end
