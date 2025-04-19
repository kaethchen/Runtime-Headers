@class NSString, MAUSBGenericPALDevice, MAUSBGenericPALPortMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface MAUSBGenericPAL : MAUSBObject <MAUSBDevicePAL> {
    NSObject<OS_dispatch_queue> *_queue;
    MAUSBGenericPALDevice *_device;
    MAUSBGenericPALPortMonitor *_portMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)reset;
- (id)initWithQueue:(id)a0;
- (id)activateEndpointsForRequest:(id)a0;
- (BOOL)addUSBDeviceWithLocationID:(unsigned int)a0;
- (id)assignDeviceHandleForRequest:(id)a0;
- (id)assignEndpointHandlesForRequest:(id)a0;
- (BOOL)clearTransfersForDevice:(unsigned short)a0 endpointAddress:(unsigned char)a1;
- (void)controlRequestForDevice:(unsigned short)a0 setupPacket:(id)a1 completion:(id /* block */)a2;
- (void)controlRequestForDevice:(unsigned short)a0 setupPacket:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (id)createPortMonitorForRequest:(id)a0 delegate:(id)a1;
- (id)deleteEndpointsForRequest:(id)a0;
- (id)deletePortMonitorForRequest:(id)a0;
- (void)deliverDataForDevice:(unsigned short)a0 data:(id)a1 endpointAddress:(unsigned char)a2 completion:(id /* block */)a3;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)disconnectUSBDeviceForRequest:(id)a0;
- (id)generateTXTRecord;
- (id)getDeviceSpeedForLocationID:(unsigned int)a0;
- (id)getProductNameForLocationID:(unsigned int)a0;
- (id)inactivateEndpointsForRequest:(id)a0;
- (id)modifyEndpointZeroForRequest:(id)a0;
- (void)readDataForDevice:(unsigned short)a0 length:(unsigned int)a1 endpointAddress:(unsigned char)a2 completion:(id /* block */)a3;
- (id)resetEndpointsForRequest:(id)a0;
- (id)resetUSBDeviceForRequest:(id)a0;
- (void)setDeviceHandle:(unsigned short)a0 busNumber:(unsigned char)a1 usbDeviceAddress:(unsigned char)a2;
- (id)setUSBDeviceAddressForRequest:(id)a0;
- (id)updateDeviceForRequest:(id)a0;

@end
