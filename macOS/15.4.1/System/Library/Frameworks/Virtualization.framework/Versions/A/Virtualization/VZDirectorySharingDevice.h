@class VZVirtualMachine;

@interface VZDirectorySharingDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _directorySharingDeviceIndex;
}

- (void).cxx_destruct;
- (id)_initWithVirtualMachine:(id)a0 directorySharingDeviceIndex:(unsigned long long)a1;

@end
