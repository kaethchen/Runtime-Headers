@class NSUUID, NSString, VZUSBController, VZUSBMassStorageDeviceConfiguration;

@interface VZUSBMassStorageDevice : VZStorageDevice <VZUSBDevice> {
    VZUSBMassStorageDeviceConfiguration *_configuration;
}

@property (readonly, weak) VZUSBController *usbController;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)_initWithAttachment:(id)a0;
- (id)_initWithVirtualMachine:(id)a0 storageDeviceIndex:(unsigned long long)a1 attachment:(id)a2;
- (void)_setUSBController:(id)a0;

@end
