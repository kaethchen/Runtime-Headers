@class NSString, NSURL, TMDiskArbiter;

@interface TMTestDisk : NSObject {
    struct __DADisk { } *_baseDiskRef;
    struct __DADisk { } *_mountDiskRef;
    BOOL _hasFileSystem;
}

@property (copy) NSString *baseDevice;
@property (copy) NSString *__stdoutp;
@property (copy) NSString *__stderrp;
@property (readonly) TMDiskArbiter *arbiter;
@property (readonly) NSString *volumeName;
@property (readonly) unsigned int fileSystemType;
@property (readonly) unsigned int diskType;
@property (retain) NSURL *mountPointURL;
@property (readonly) NSString *mountPoint;
@property (readonly) NSString *apfsPhysicalDevice;
@property (readonly) NSString *apfsContainerDevice;
@property (readonly) NSString *apfsFirstVolumeDevice;
@property (readonly) unsigned long long capacity;
@property (readonly) BOOL isAttached;
@property (readonly) BOOL isMounted;

+ (struct __DADisk { } *)_apfsContainerForPhysicalStore:(struct __DADisk { } *)a0 arbiter:(id)a1;
+ (id)_apfsPhysicalStoresForAPFSVolume:(struct __DADisk { } *)a0 arbiter:(id)a1;
+ (struct __DADisk { } *)_apfsVolumeForContainer:(struct __DADisk { } *)a0 arbiter:(id)a1;
+ (id)apfsPhysicalStoresWholeDiskBSDNamesForAPFSVolumeBSDName:(id)a0 arbiter:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)detach;
- (BOOL)unmount;
- (BOOL)mount;
- (id)_attachNewDeviceWithCapacity:(unsigned long long)a0;
- (BOOL)_mountFileSystem;
- (id)_mountFileSystemAction;
- (void)_setBaseDiskRef:(struct __DADisk { } *)a0;
- (void)_setMountDiskRef:(struct __DADisk { } *)a0;
- (BOOL)attach;
- (BOOL)constructAPFSContainer;
- (BOOL)constructFileSystem;
- (void)forceUnmountAllVolumesAndSnapshots;
- (id)initWithVolumeName:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2;
- (id)initWithVolumeName:(id)a0 fileSystemType:(unsigned int)a1 capacity:(unsigned long long)a2 arbiter:(id)a3;
- (int)runTask:(id)a0;
- (void)stderrCompleted:(id)a0;
- (void)stdoutCompleted:(id)a0;

@end
