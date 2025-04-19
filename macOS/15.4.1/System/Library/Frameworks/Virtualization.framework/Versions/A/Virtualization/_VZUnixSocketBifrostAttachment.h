@class NSString;

@interface _VZUnixSocketBifrostAttachment : _VZBifrostAttachment

@property (class, readonly) unsigned long long maximumPathLength;

@property (readonly, copy) NSString *path;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::Xpc, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::Xpc, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::Xpc, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket> { struct __impl<VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::Xpc, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::Xpc, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::Xpc> { struct Xpc { } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::BifrostDevice::Attachments::UnixSocket> { struct UnixSocket { struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_attachment;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
