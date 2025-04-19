@class NSString, MAUSBRouteString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MAUSBGenericPALDevice : MAUSBObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct IOUSBDeviceStruct942 **_usbDeviceInterface;
    unsigned int _deviceService;
    NSMutableArray *_controlReadCompletions;
    NSMutableArray *_controlWriteCompletions;
    NSArray *_interfaces;
    BOOL _usbInitialized;
    BOOL _usbAddressFixed;
}

@property (readonly) unsigned short handle;
@property (readonly) unsigned int locationID;
@property (readonly) unsigned char busNumber;
@property (readonly) unsigned char usbAddress;
@property (readonly) unsigned char speed;
@property (readonly) MAUSBRouteString *routeString;
@property (readonly) NSString *txtRecordKey;
@property (readonly) NSString *txtRecordValue;
@property (readonly) NSString *productName;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)reset;
- (void)disconnect;
- (BOOL)connect;
- (BOOL)initUSB;
- (id)assignEndpointHandlesForRequest:(id)a0;
- (BOOL)clearTransfersForEndpointAddress:(unsigned char)a0;
- (void)controlReadRequestCompleteWithResult:(int)a0 completion:(id)a1;
- (void)controlRequestWithSetupPacket:(id)a0 data:(id)a1 writeCompletion:(id /* block */)a2;
- (void)controlRequestWithSetupPacket:(id)a0 readCompletion:(id /* block */)a1;
- (void)controlWriteCompleteWithResult:(int)a0 completion:(id)a1;
- (id)deleteEndpointsForRequest:(id)a0;
- (void)deliverData:(id)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (BOOL)endpointAddressAvailable:(unsigned char)a0;
- (void)freeDeviceInterface;
- (BOOL)initTXTRecordValue;
- (id)initWithLocationID:(unsigned int)a0 queue:(id)a1 handle:(unsigned short)a2;
- (id)interfaceForNumber:(unsigned char)a0;
- (void)readDataLength:(unsigned int)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;
- (void)setDeviceHandle:(unsigned short)a0 busNumber:(unsigned char)a1 usbDeviceAddress:(unsigned char)a2;
- (void)updateInterfaces;

@end
