@interface VZXHCIController : VZUSBController

- (void)attachDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)detachDevice:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_capturePassthroughDevicesWithError:(id *)a0;
- (id)_initWithVirtualMachine:(id)a0 usbControllerIndex:(unsigned long long)a1 usbDevices:(id)a2;
- (void)_releasePassthroughDevices;

@end
