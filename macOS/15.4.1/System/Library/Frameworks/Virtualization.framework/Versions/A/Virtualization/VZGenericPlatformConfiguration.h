@class NSString, VZGenericMachineIdentifier;

@interface VZGenericPlatformConfiguration : VZPlatformConfiguration {
    NSString *_guestType;
    struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _performanceMonitoringUnitEmulationEnabledValue;
    struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _fineGrainTrapsEmulationEnabledValue;
}

@property (class, readonly, getter=isNestedVirtualizationSupported) BOOL nestedVirtualizationSupported;

@property (copy, setter=_setGuestType:) NSString *_guestType;
@property (setter=_setPerformanceMonitoringUnitEmulationEnabled:) BOOL _performanceMonitoringUnitEmulationEnabled;
@property (setter=_setFineGrainedTrapsEmulationEnabled:) BOOL _fineGrainTrapsEmulationEnabled;
@property (copy) VZGenericMachineIdentifier *machineIdentifier;
@property (getter=isNestedVirtualizationEnabled) BOOL nestedVirtualizationEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct Expected<void, NSError *> { union storage<void, NSError *> { char x0; id x1; } x0; BOOL x1; })validate;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::Platforms::Generic, VzCore::VirtualMachineConfiguration::Platforms::Mac>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::Platforms::Generic, VzCore::VirtualMachineConfiguration::Platforms::Mac>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::Platforms::Generic, VzCore::VirtualMachineConfiguration::Platforms::Mac> { struct __impl<VzCore::VirtualMachineConfiguration::Platforms::Generic, VzCore::VirtualMachineConfiguration::Platforms::Mac> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::Platforms::Generic, VzCore::VirtualMachineConfiguration::Platforms::Mac> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::Platforms::Generic> { struct Generic { unsigned int x0; int x1; struct Identifier { struct Uuid { unsigned char x0[16]; } x0; } x2; BOOL x3; BOOL x4; BOOL x5; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::Platforms::Mac> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::Platforms::Mac> { struct Mac { unsigned int x0; struct FileDescriptor { int x0; } x1; struct Identifier { unsigned long long x0; BOOL x1; struct optional<VzCore::Hardware::AvpSerialNumber> { union { char x0; struct AvpSerialNumber { struct array<unsigned char, 10UL> { unsigned char x0[10]; } x0; } x1; } x0; BOOL x1; } x2; } x2; int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x11; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; } x12; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; } x13; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; } x0; BOOL x1; } x14; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_platform;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
