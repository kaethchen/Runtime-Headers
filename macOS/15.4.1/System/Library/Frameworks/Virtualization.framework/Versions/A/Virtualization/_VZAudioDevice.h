@class VZVirtualMachine;

@interface _VZAudioDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _audioDeviceIndex;
}

- (void).cxx_destruct;
- (id)_initWithVirtualMachine:(id)a0 audioDeviceIndex:(unsigned long long)a1;

@end
