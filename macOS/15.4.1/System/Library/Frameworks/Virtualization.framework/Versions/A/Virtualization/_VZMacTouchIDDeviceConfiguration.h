@interface _VZMacTouchIDDeviceConfiguration : _VZBiometricDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::MacTouchIDBiometricDevice>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::MacTouchIDBiometricDevice>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::MacTouchIDBiometricDevice> { struct __impl<VzCore::VirtualMachineConfiguration::MacTouchIDBiometricDevice> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::MacTouchIDBiometricDevice> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::MacTouchIDBiometricDevice> { struct MacTouchIDBiometricDevice { } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_biometricDeviceWithPlatform:(id)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
