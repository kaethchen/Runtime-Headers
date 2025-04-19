@class VZVirtualMachine;

@interface _VZMultiTouchDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _multiTouchDeviceIndex;
}

- (void).cxx_destruct;
- (void)sendMultiTouchEvents:(id)a0;

@end
