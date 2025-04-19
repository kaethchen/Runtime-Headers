@interface VZVirtioTraditionalMemoryBalloonDeviceConfiguration : VZMemoryBalloonDeviceConfiguration {
    unsigned long long __targetVirtualMachineMemorySize;
}

- (id)init;
- (struct MemoryBalloonDevice { int x0; unsigned int x1; })_memoryBalloonDevice;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeMemoryBalloonDeviceForVirtualMachine:(id)a0 memoryBalloonDeviceIndex:(unsigned long long)a1 maxTargetMemorySize:(unsigned long long)a2;

@end
