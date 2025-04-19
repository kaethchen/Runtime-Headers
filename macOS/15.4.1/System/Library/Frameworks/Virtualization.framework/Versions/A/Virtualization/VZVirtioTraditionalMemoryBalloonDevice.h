@class VZVirtualMachine, NSObject;
@protocol OS_dispatch_queue;

@interface VZVirtioTraditionalMemoryBalloonDevice : VZMemoryBalloonDevice {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    unsigned long long _memoryBalloonDeviceIndex;
    unsigned long long _maxTargetVirtualMachineMemorySize;
    unsigned long long _targetVirtualMachineMemorySize;
}

@property (readonly) unsigned long long _maxTargetVirtualMachineMemorySize;
@property unsigned long long targetVirtualMachineMemorySize;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
