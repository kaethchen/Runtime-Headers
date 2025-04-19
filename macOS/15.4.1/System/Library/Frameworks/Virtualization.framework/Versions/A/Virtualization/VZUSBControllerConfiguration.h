@class NSArray, NSString, NSMutableArray;

@interface VZUSBControllerConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    NSMutableArray *_usbDevices;
}

@property (readonly) struct UsbController { int x0; struct vector<std::variant<VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::MassStorage, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::IoUsbHostPassthrough>, std::allocator<std::variant<VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::MassStorage, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::IoUsbHostPassthrough>>> { void *x0; void *x1; struct __compressed_pair<std::variant<VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::MassStorage, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::IoUsbHostPassthrough> *, std::allocator<std::variant<VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::MassStorage, VzCore::VirtualMachineConfiguration::UsbController::UsbDevices::IoUsbHostPassthrough>>> { void *x0; } x2; } x1; } _usbController;
@property (copy) NSArray *usbDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeUSBControllerForVirtualMachine:(id)a0 usbControllerIndex:(unsigned long long)a1 usbDevices:(id)a2;

@end
