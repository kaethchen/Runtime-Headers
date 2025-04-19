@interface IASFilesystemUtils : NSObject

+ (id)dataVolumePathGivenSystemPath:(id)a0;
+ (BOOL)pathIsMemberOfSystemDataVolumeGroup:(id)a0;
+ (id)firmlinksOnTargetGivenPath:(id)a0 isAppleInternal:(BOOL)a1 requireTargetInSystemVolumeGroup:(BOOL)a2 withOutSyntheticSymlinks:(id *)a3;
+ (BOOL)localizeParentFolderForBundleWithURL:(id)a0;
+ (BOOL)pathIsMemberOfSystemDataVolumeGroup:(id)a0 isDataRole:(BOOL *)a1 isSystemRole:(BOOL *)a2;
+ (id)systemVolumePathGivenDataPath:(id)a0;
+ (BOOL)isPathSafe:(id)a0 andOwnedByUID:(unsigned int)a1 andGID:(unsigned int)a2;
+ (BOOL)isPathSafe:(id)a0 ofType:(id)a1 andOwnedByUID:(unsigned int)a2 andGID:(unsigned int)a3;
+ (BOOL)isSystemSealedForMountpoint:(id)a0;
+ (id)devNodeForVolumeInContainer:(unsigned int)a0 withGroup:(id)a1 withRequestingDataVolume:(BOOL)a2;
+ (unsigned int)_copyRootedSnapshotForVolume:(unsigned int)a0;
+ (id)getXattr:(id)a0 forPath:(id)a1;
+ (BOOL)isAPFSDataVolumeRoleGivenDiskIdentifier:(id)a0;
+ (BOOL)isAPFSSystemVolumeRoleGivenDiskIdentifier:(id)a0;
+ (BOOL)isDiskInternal:(id)a0 withError:(id *)a1;
+ (BOOL)isPathSafe:(id)a0;
+ (BOOL)isPathSymlinked:(id)a0;
+ (unsigned int)newIOServiceFromDevNode:(id)a0;
+ (BOOL)pathIsMemberOfReadOnlySystemGroup:(id)a0;
+ (id)uuidForDisk:(id)a0;
+ (id)volumePathForSystemOrDataGivenPath:(id)a0 withRequestingDataVolume:(BOOL)a1;
+ (id)volumePathGivenPath:(id)a0;

@end
