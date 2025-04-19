@class NSString;

@interface TMImageDisk : TMTestDisk

@property (retain) NSString *imagePath;
@property (readonly) unsigned int imageType;

- (id)description;
- (void).cxx_destruct;
- (id)_attachNewDeviceWithCapacity:(unsigned long long)a0;
- (BOOL)_create:(unsigned long long)a0;
- (id)_mountFileSystemAction;
- (id)initWithVolumeName:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2;
- (id)initWithVolumeName:(id)a0 fileSystemType:(unsigned int)a1 capacity:(unsigned long long)a2 arbiter:(id)a3;
- (id)initWithVolumeName:(id)a0 imageType:(unsigned int)a1 fileSystemType:(unsigned int)a2 capacity:(unsigned long long)a3 arbiter:(id)a4;

@end
