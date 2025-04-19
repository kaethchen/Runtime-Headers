@interface VZVirtioEntropyDeviceConfiguration : VZEntropyDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)_entropyDevice;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
