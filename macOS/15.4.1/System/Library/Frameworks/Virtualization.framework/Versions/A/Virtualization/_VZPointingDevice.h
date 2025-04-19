@class VZVirtualMachine;

@interface _VZPointingDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _pointingDeviceIndex;
}

@property (class, readonly) BOOL requiresGrabbingMouseInput;

@property (readonly) long long type;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 virtualMachine:(id)a1 pointingDeviceIndex:(unsigned long long)a2;
- (void)sendMagnifyEvents:(id)a0;
- (void)sendQuickLookEvents:(id)a0;
- (void)sendRotationEvents:(id)a0;
- (void)sendScrollWheelEvents:(id)a0;
- (void)sendSmartMagnifyEvents:(id)a0;

@end
