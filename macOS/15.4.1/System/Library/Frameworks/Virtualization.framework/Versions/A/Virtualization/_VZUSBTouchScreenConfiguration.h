@interface _VZUSBTouchScreenConfiguration : _VZMultiTouchDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)_multiTouchDevice;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeMultiTouchDeviceForVirtualMachine:(id)a0 multiTouchDeviceIndex:(unsigned long long)a1;

@end
