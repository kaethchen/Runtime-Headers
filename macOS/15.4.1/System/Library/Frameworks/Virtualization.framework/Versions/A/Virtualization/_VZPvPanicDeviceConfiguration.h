@interface _VZPvPanicDeviceConfiguration : _VZPanicDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct Expected<VzCore::VirtualMachineConfiguration::PanicDevice, NSError *> { union storage<VzCore::VirtualMachineConfiguration::PanicDevice, NSError *> { char x0; struct PanicDevice { int x0; } x1; id x2; } x0; BOOL x1; })_panicDevice;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
