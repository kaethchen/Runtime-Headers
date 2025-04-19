@class NSUUID, NSString, _VZIOUSBHostPassthroughDeviceConfiguration, VZVirtualMachine, VZUSBController, IOUSBHostDevice;

@interface _VZIOUSBHostPassthroughDevice : NSObject <VZUSBDevice> {
    VZVirtualMachine *_virtualMachine;
    _VZIOUSBHostPassthroughDeviceConfiguration *_configuration;
    BOOL _isPointingDevice;
    IOUSBHostDevice *_usbHostDevice;
}

@property (readonly, weak) VZUSBController *usbController;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)_processIOUSBHostDeviceMessage:(unsigned int)a0 messageArgument:(void *)a1 virtualMachine:(id)a2;
- (void)_releaseDevice;
- (void)_setUSBController:(id)a0;
- (void)_setVirtualMachine:(id)a0;

@end
