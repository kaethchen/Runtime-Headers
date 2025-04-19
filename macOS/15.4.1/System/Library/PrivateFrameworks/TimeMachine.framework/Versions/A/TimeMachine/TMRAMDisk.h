@interface TMRAMDisk : TMTestDisk

- (id)_attachNewDeviceWithCapacity:(unsigned long long)a0;
- (id)initWithVolumeName:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2;
- (id)initWithVolumeName:(id)a0 fileSystemType:(unsigned int)a1 capacity:(unsigned long long)a2 arbiter:(id)a3;

@end
