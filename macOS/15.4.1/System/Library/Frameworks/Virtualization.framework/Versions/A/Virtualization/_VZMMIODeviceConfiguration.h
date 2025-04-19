@class NSArray, NSString;

@interface _VZMMIODeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) struct Expected<VzCore::VirtualMachineConfiguration::CustomMmioDevice, NSError *> { union storage<VzCore::VirtualMachineConfiguration::CustomMmioDevice, NSError *> { char x0; struct CustomMmioDevice { struct variant<std::string, Base::Endpoint, VzCore::VirtualMachineConfiguration::CustomMmioDevice::XpcService> { struct __impl<std::string, Base::Endpoint, VzCore::VirtualMachineConfiguration::CustomMmioDevice::XpcService> { union __union<std::__variant_detail::_Trait::_Available, 0UL, std::string, Base::Endpoint, VzCore::VirtualMachineConfiguration::CustomMmioDevice::XpcService> { char x0; struct __alt<0UL, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, Base::Endpoint, VzCore::VirtualMachineConfiguration::CustomMmioDevice::XpcService> { char x0; struct __alt<1UL, Base::Endpoint> { struct Endpoint { struct CfPtr<NSObject<OS_xpc_object> *> { id x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL, VzCore::VirtualMachineConfiguration::CustomMmioDevice::XpcService> { char x0; struct __alt<2UL, VzCore::VirtualMachineConfiguration::CustomMmioDevice::XpcService> { struct XpcService { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 3UL> { } x2; } x2; } x2; } x0; unsigned int x1; } x0; } x0; struct vector<VzCore::VirtualMachineConfiguration::CustomMmioDevice::MmioRegion, std::allocator<VzCore::VirtualMachineConfiguration::CustomMmioDevice::MmioRegion>> { struct MmioRegion *x0; struct MmioRegion *x1; struct __compressed_pair<VzCore::VirtualMachineConfiguration::CustomMmioDevice::MmioRegion *, std::allocator<VzCore::VirtualMachineConfiguration::CustomMmioDevice::MmioRegion>> { struct MmioRegion *x0; } x2; } x1; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; } x2; } x1; id x2; } x0; BOOL x1; } _customMMIODevice;
@property (readonly, copy) NSArray *MMIORegions;
@property (readonly, copy) NSArray *irqs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)validateWithError:(id *)a0;
- (id)_initWithMMIORegions:(id)a0 interrupts:(id)a1;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
