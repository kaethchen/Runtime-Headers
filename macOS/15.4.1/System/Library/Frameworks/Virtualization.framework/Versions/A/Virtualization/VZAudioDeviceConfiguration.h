@class NSString;

@interface VZAudioDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    long long _role;
}

@property (setter=_setRole:) long long _role;
@property (readonly) struct Expected<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { struct __impl<VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Virtio> { struct Virtio { struct vector<VzCore::VirtualMachineConfiguration::AudioDevices::Stream, std::allocator<VzCore::VirtualMachineConfiguration::AudioDevices::Stream>> { struct Stream *x0; struct Stream *x1; struct __compressed_pair<VzCore::VirtualMachineConfiguration::AudioDevices::Stream *, std::allocator<VzCore::VirtualMachineConfiguration::AudioDevices::Stream>> { struct Stream *x0; } x2; } x0; struct optional<VzCore::VirtualMachineConfiguration::AudioDevices::Role> { union { char x0; int x1; } x0; BOOL x1; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; } _audioDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
