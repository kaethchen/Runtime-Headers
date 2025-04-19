@class NSString, _VZMailboxDeviceAttachment;

@interface _VZMailboxDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) struct Expected<VzCore::VirtualMachineConfiguration::CoprocessorMailbox, NSError *> { union storage<VzCore::VirtualMachineConfiguration::CoprocessorMailbox, NSError *> { char x0; struct CoprocessorMailbox { struct optional<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>> { union { char x0; struct variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct __impl<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer> { struct XpcServer { struct CfPtr<NSObject<OS_xpc_object> *> { id x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct XpcClient { struct Endpoint { struct CfPtr<NSObject<OS_xpc_object> *> { id x0; } x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; } x0; BOOL x1; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; } x1; id x2; } x0; BOOL x1; } _mailboxDevice;
@property (retain) _VZMailboxDeviceAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)validateWithError:(id *)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
