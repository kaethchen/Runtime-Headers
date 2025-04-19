@class NSString;

@interface _VZMacBatterySource : NSObject <_VZVirtualMachineConfigurationEncodable>

@property (readonly) struct Expected<std::variant<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { struct __impl<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin> { struct Darwin { } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { struct Synthetic { double x0; int x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; } _source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
