@class NSString;

@interface VZSocketDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (struct variant<VzCore::VirtualMachineConfiguration::SocketDevices::Virtio> { struct __impl<VzCore::VirtualMachineConfiguration::SocketDevices::Virtio> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::SocketDevices::Virtio> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::SocketDevices::Virtio> { struct Virtio { unsigned long long x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL> { } x2; } x0; unsigned int x1; } x0; })_socketDeviceWithIdentifier:(unsigned long long)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeSocketDeviceForVirtualMachine:(id)a0 identifier:(unsigned long long)a1;

@end
