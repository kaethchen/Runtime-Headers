@class UVCDeviceConfiguration, NSArray, NSDictionary, NSString, UVCUSBDeviceControlInterface, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, UVCDeviceControlInterface;

@interface UVCUSBDevice : NSObject <UVCDevice> {
    unsigned long long _registryID;
    NSDictionary *_attributes;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _streamDataHandler;
    id /* block */ _stateNotificationHandler;
    UVCUSBDeviceControlInterface *_controlInterface;
    NSArray *_streamingInterfaces;
    NSDictionary *_capability;
    NSMutableSet *_removedServices;
    UVCDeviceConfiguration *_configuration;
}

@property (readonly) NSDictionary *attributes;
@property (readonly) id<UVCDeviceControlInterface> controlInterface;
@property (readonly) NSArray *streamingInterfaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInterfaceAssociations:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)configuration;
- (unsigned long long)registryID;
- (id)capability;
- (id)initWithInterface:(unsigned int)a0 queue:(id)a1 streamDataHandler:(id /* block */)a2 stateNotificationHandler:(id /* block */)a3;
- (BOOL)createDeviceInterface:(id)a0 configurationDescriptor:(const struct IOUSBConfigurationDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a1;
- (BOOL)createDeviceInterfaces:(id)a0;
- (id)createUSBHostInterfaces:(id)a0 configurationDescriptor:(const struct IOUSBConfigurationDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a1;
- (void)dispatchInterfaceTermination:(id)a0;
- (id)getAssociationInterfaceNumberForInterface:(unsigned int)a0 configurationDescriptor:(id)a1;
- (id)getConfigurationDescriptorForInterface:(unsigned int)a0;
- (unsigned int)getUSBInterfaceServiceForMatching:(id)a0;
- (void)handleDeviceTermination:(id)a0;
- (id)initWithAssociation:(id)a0 hostDevice:(id)a1 queue:(id)a2 streamDataHandler:(id /* block */)a3 stateNotificationHandler:(id /* block */)a4;
- (BOOL)parseCurrentConfigurationForHostDevice:(id)a0;
- (BOOL)parseDevice:(unsigned int)a0;
- (BOOL)setupDeviceForInterface:(unsigned int)a0;
- (BOOL)setupWithAssociation:(id)a0 hostDevice:(id)a1;

@end
