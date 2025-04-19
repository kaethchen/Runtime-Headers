@interface _VZVirtioMouseInputDeviceConfiguration : VZPointingDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)_pointingDevice;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makePointingDeviceForVirtualMachine:(id)a0 pointingDeviceIndex:(unsigned long long)a1;

@end
