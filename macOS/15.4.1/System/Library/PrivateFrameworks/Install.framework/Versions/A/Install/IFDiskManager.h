@interface IFDiskManager : NSObject

+ (void)initialize;
+ (id)manager;
+ (id)mountPointForPath:(id)a0;
+ (BOOL)pathOnLocalVolume:(id)a0;
+ (BOOL)rootVolumeIsReadOnly;
+ (void)setTypeForSession:(Class)a0;
+ (BOOL)volumeAtPathIsReadOnly:(id)a0;

- (void)dealloc;
- (id)init;
- (id)rootVolume;
- (id)disks;
- (BOOL)ejectDisk:(id)a0;
- (BOOL)renameDisk:(id)a0 toName:(id)a1;
- (id)diskForPath:(id)a0;
- (id)mountPointForPath:(id)a0;
- (id)wholeDiskForDisk:(id)a0;
- (void)csDiskAppeared:(id)a0;
- (void)daDiskAppeared:(struct __DADisk { } *)a0;
- (BOOL)diskIsAnImgsrc:(id)a0;
- (id)_diskDictForIdentifier:(id)a0;
- (id)allMountedVolumes;
- (id)allMountedVolumesIncludingSystemImages:(BOOL)a0;
- (BOOL)checkDisksMediaReadOnly:(id)a0;
- (void)csDiskChanged:(id)a0;
- (void)csDiskTerminated:(id)a0;
- (void)csLVGTerminated:(id)a0;
- (void)daDiskChanged:(struct __DADisk { } *)a0;
- (void)daDiskDisappeared:(struct __DADisk { } *)a0;
- (void)daIdle;
- (BOOL)disablePermissionsOnDisk:(id)a0;
- (id)diskForDiskIdentifier:(id)a0;
- (id)diskForDiskSpecifier:(id)a0;
- (id)disksForLogicalVolumeGroup:(id)a0;
- (void)enablePermissionsOnDisk:(id)a0;
- (id)fileSystemLocalizationForFileSystem:(id)a0;
- (void)finalizeDisk:(id)a0;
- (id)imgsrcDiskAtLevel:(unsigned long long)a0;
- (BOOL)isAnticipatingMoreDisks;
- (BOOL)mountDisk:(id)a0;
- (id)pathIsRemovable:(id)a0;
- (int)prepareDisk:(id)a0;
- (void)releaseDisk:(id)a0;
- (BOOL)reserveDisk:(id)a0;
- (unsigned long long)sizeOfImgsrcHierarchy;
- (BOOL)unmountAllDisksExceptDisk:(id)a0;
- (BOOL)unmountDisk:(id)a0;
- (id)volumeAtPath:(id)a0;

@end
