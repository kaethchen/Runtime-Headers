@class NSString;

@interface _VZMailboxDeviceAttachment : NSObject <_VZVirtualMachineConfigurationEncodable>

@property (readonly) struct Expected<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct __impl<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer> { struct XpcServer { struct CfPtr<NSObject<OS_xpc_object> *> { id x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct XpcClient { struct Endpoint { struct CfPtr<NSObject<OS_xpc_object> *> { id x0; } x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; } _attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
