@class NSString, NSArray, MAUSBDeviceVirtual20HubEndpoint, MAUSBDeviceVirtual20HubDeviceDatabase, NSObject, MAUSBRouteString;
@protocol OS_dispatch_queue;

@interface MAUSBDeviceVirtual20Hub : MAUSBObject <MAUSBDeviceVirtual20HubPortDelegate, MAUSBDevicePAL> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_ports;
    MAUSBDeviceVirtual20HubEndpoint *_endpoint;
    MAUSBDeviceVirtual20HubDeviceDatabase *_deviceDatabase;
    unsigned short _deviceHandle;
    unsigned char _usbDeviceAddress;
    MAUSBRouteString *_routeString;
}

@property (readonly) unsigned char portCount;
@property (copy) NSString *manufacturer;
@property (copy) NSString *product;
@property (copy) NSString *serialNumber;
@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)queue;
- (id)configurationDescriptor;
- (id)deviceDescriptor;
- (void)getStatusForRequest:(id)a0 completion:(id /* block */)a1;
- (id)activateEndpointsForRequest:(id)a0;
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
- (id)deviceDatabase;
- (id)deviceQualifierDescriptor;
- (id)disconnectUSBDeviceForRequest:(id)a0;
- (id)endpointDescriptor;
- (void)getDescriptorForRequest:(id)a0 completion:(id /* block */)a1;
- (id)getDeviceSpeedForLocationID:(unsigned int)a0;
- (id)getStringDescriptorForString:(id)a0 length:(unsigned short)a1;
- (id)hubAssignEndpointHandlesForRequest:(id)a0;
- (void)hubControlRequestForDevice:(unsigned short)a0 setupPacket:(id)a1 completion:(id /* block */)a2;
- (void)hubControlRequestForDevice:(unsigned short)a0 setupPacket:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (id)hubDeleteEndpointsForRequest:(id)a0;
- (id)hubDescriptor;
- (id)inactivateEndpointsForRequest:(id)a0;
- (id)initWithPortCount:(unsigned char)a0 usbDeviceAddress:(unsigned char)a1 routeString:(id)a2 deviceDatabase:(id)a3 vendorID:(unsigned short)a4 productID:(unsigned short)a5 queue:(id)a6;
- (BOOL)insertDevice:(id)a0 portNumber:(unsigned char)a1 highSpeed:(BOOL)a2;
- (BOOL)insertHubForLocationID:(unsigned int)a0 portNumber:(unsigned char)a1;
- (id)interfaceDescriptorMultiTT;
- (id)interfaceDescriptorSingleTT;
- (id)modifyEndpointZeroForRequest:(id)a0;
- (id)otherSpeedConfigurationDescriptor;
- (id)portAssignEndpointHandlesForRequest:(id)a0;
- (void)portChanged:(id)a0;
- (void)portControlRequestForDevice:(unsigned short)a0 setupPacket:(id)a1 completion:(id /* block */)a2;
- (void)portControlRequestForDevice:(unsigned short)a0 setupPacket:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (id)portDeleteEndpointsForRequest:(id)a0;
- (id)portForNumber:(unsigned char)a0;
- (void)readDataForDevice:(unsigned short)a0 length:(unsigned int)a1 endpointAddress:(unsigned char)a2 completion:(id /* block */)a3;
- (BOOL)removeDeviceFromPortNumber:(unsigned char)a0;
- (id)resetEndpointsForRequest:(id)a0;
- (id)resetUSBDeviceForRequest:(id)a0;
- (id)routeStringForPortNumber:(unsigned char)a0;
- (void)setDeviceHandle:(unsigned short)a0 busNumber:(unsigned char)a1 usbDeviceAddress:(unsigned char)a2;
- (id)setUSBDeviceAddressForRequest:(id)a0;
- (unsigned short)totalConfigurationDescriptorLength;
- (unsigned short)totalOtherSpeedConfigurationDescriptorLength;
- (id)updateDeviceForRequest:(id)a0;

@end
