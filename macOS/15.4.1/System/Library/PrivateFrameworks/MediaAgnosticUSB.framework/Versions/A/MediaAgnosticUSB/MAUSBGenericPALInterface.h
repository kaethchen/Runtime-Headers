@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MAUSBGenericPALInterface : MAUSBObject {
    struct IOUSBInterfaceStruct942 **_usbInterfaceInterface;
    NSDictionary *_pipeMap;
    NSDictionary *_completionQueueMap;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned char number;
@property (readonly) unsigned char alternateSetting;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)clearTransfersForEndpointAddress:(unsigned char)a0;
- (void)deliverData:(id)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (BOOL)hasEndpointAddress:(unsigned char)a0;
- (BOOL)initUsbInterfaceForDevice:(struct IOUSBDeviceStruct942 **)a0;
- (id)initWithDeviceInterface:(struct IOUSBDeviceStruct942 **)a0 number:(unsigned char)a1 queue:(id)a2;
- (void)readDataLength:(unsigned int)a0 endpointAddress:(unsigned char)a1 completion:(id /* block */)a2;
- (void)readRequestCompleteWithResult:(int)a0 length:(unsigned int)a1 completion:(id)a2;
- (BOOL)setAlternateInterface:(unsigned char)a0;
- (BOOL)updatePipeMap;
- (void)writeRequestCompleteWithResult:(int)a0 completion:(id)a1;

@end
