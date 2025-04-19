@class NSString, __end_cap_, __end_;

@interface _VZMacSyntheticBatterySource : _VZMacBatterySource <_VZVirtualMachineConfigurationEncodable> {
    double _charge;
    long long _connectivity;
    struct Mutex { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfair_lock; } _observers_lock;
    struct vector<__weak id<_VZMacBatterySourceObserver>, std::allocator<__weak id<_VZMacBatterySourceObserver>>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<__weak id<_VZMacBatterySourceObserver> *, std::allocator<__weak id<_VZMacBatterySourceObserver>>> { id *__value_; } x1; } _observers;
}

@property double charge;
@property long long connectivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { struct __impl<VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Darwin> { struct Darwin { } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::PowerSourceDevice::Types::Battery::Sources::Synthetic> { struct Synthetic { double x0; int x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_source;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
