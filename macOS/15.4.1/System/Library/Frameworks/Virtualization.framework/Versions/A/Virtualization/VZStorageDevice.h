@class VZVirtualMachine, VZStorageDeviceAttachment, NSObject;
@protocol OS_dispatch_queue;

@interface VZStorageDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    VZStorageDeviceAttachment *_attachment;
    struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _storageDeviceIndex;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_attachment;
- (id)_initWithAttachment:(id)a0;
- (id)_initWithVirtualMachine:(id)a0 storageDeviceIndex:(unsigned long long)a1 attachment:(id)a2;
- (void)_setAttachment:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setVirtualMachine:(id)a0;

@end
