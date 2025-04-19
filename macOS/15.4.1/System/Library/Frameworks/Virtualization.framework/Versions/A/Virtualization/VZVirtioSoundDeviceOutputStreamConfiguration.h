@class VZAudioOutputStreamSink;

@interface VZVirtioSoundDeviceOutputStreamConfiguration : VZVirtioSoundDeviceStreamConfiguration

@property (retain) VZAudioOutputStreamSink *sink;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct Expected<VzCore::VirtualMachineConfiguration::AudioDevices::Stream, NSError *> { union storage<VzCore::VirtualMachineConfiguration::AudioDevices::Stream, NSError *> { char x0; struct Stream { int x0; struct optional<std::variant<VzCore::VirtualMachineConfiguration::AudioDevices::Stream::Attachments::Host>> { union { char x0; struct variant<VzCore::VirtualMachineConfiguration::AudioDevices::Stream::Attachments::Host> { struct __impl<VzCore::VirtualMachineConfiguration::AudioDevices::Stream::Attachments::Host> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Stream::Attachments::Host> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::AudioDevices::Stream::Attachments::Host> { struct Host { } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; } x0; BOOL x1; } x1; } x1; id x2; } x0; BOOL x1; })_stream;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
