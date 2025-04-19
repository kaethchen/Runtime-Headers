@class NSArray;

@interface VZVirtioSoundDeviceConfiguration : VZAudioDeviceConfiguration {
    NSArray *_streams;
}

@property (copy) NSArray *streams;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { struct __impl<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { struct Virtio { struct vector<VzCore::VirtualMachineConfiguration::AudioDevices::Stream, std::allocator<VzCore::VirtualMachineConfiguration::AudioDevices::Stream>> { struct Stream *x0; struct Stream *x1; struct __compressed_pair<VzCore::VirtualMachineConfiguration::AudioDevices::Stream *, std::allocator<VzCore::VirtualMachineConfiguration::AudioDevices::Stream>> { struct Stream *x0; } x2; } x0; struct optional<VzCore::VirtualMachineConfiguration::AudioDevices::Role> { union { char x0; int x1; } x0; BOOL x1; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_audioDevice;
- (id)_makeAudioDeviceForVirtualMachine:(id)a0 audioDeviceIndex:(unsigned long long)a1;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
