@class __end_, __end_cap_, VZVirtioConsolePortArray;
@protocol VZVirtioConsoleDeviceDelegate;

@interface VZVirtioConsoleDevice : VZConsoleDevice {
    struct vector<__weak id<VZVirtioConsoleDeviceDelegate>, std::allocator<__weak id<VZVirtioConsoleDeviceDelegate>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<__weak id<VZVirtioConsoleDeviceDelegate> *, std::allocator<__weak id<VZVirtioConsoleDeviceDelegate>>> { id *__value_; } x1; } _internalDelegates;
}

@property (weak) id<VZVirtioConsoleDeviceDelegate> delegate;
@property (readonly) VZVirtioConsolePortArray *ports;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithVirtualMachine:(id)a0 consoleDeviceIndex:(unsigned long long)a1 configuration:(id)a2;

@end
