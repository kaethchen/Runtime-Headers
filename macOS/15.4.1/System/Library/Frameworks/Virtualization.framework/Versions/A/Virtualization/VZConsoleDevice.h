@class VZVirtualMachine;

@interface VZConsoleDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _consoleDeviceIndex;
}

- (void).cxx_destruct;
- (id)initWithVirtualMachine:(id)a0 consoleDeviceIndex:(unsigned long long)a1 configuration:(id)a2;

@end
