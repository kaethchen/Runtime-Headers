@class NSArray, VZVirtualMachine, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, _VZUSBControllerDelegate;

@interface VZUSBController : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _usbControllerIndex;
    NSMutableArray *_usbDevices;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    id<_VZUSBControllerDelegate> _delegate;
}

@property (weak) id<_VZUSBControllerDelegate> delegate;
@property (readonly, copy) NSArray *usbDevices;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)attachDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)detachDevice:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_capturePassthroughDevicesWithError:(id *)a0;
- (id)_initWithVirtualMachine:(id)a0 usbControllerIndex:(unsigned long long)a1 usbDevices:(id)a2;
- (void)_releasePassthroughDevices;

@end
