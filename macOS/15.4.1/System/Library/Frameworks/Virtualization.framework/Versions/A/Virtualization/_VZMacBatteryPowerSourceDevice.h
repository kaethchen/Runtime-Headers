@class NSString, _VZMacBatterySource, VZVirtualMachine, NSObject;
@protocol OS_dispatch_queue;

@interface _VZMacBatteryPowerSourceDevice : _VZPowerSourceDevice <_VZMacBatterySourceObserver> {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    unsigned long long _powerSourceDeviceIndex;
    _VZMacBatterySource *_source;
}

@property (retain) _VZMacBatterySource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)batterySource:(id)a0 didUpdateCharge:(double)a1;
- (void)batterySource:(id)a0 didUpdateConnectivity:(long long)a1;

@end
