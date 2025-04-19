@class NSURL, NSString;

@interface TMDiskImage : NSObject

@property (copy) NSURL *diskImageURL;
@property (readonly) long long qos;
@property (readonly) NSString *displayName;
@property (readonly) NSString *hostUUID;
@property (readonly) NSString *macAddress;
@property (readonly) unsigned int encryptionState;
@property (readonly) NSURL *backupDiskMountPoint;
@property (readonly) NSString *backupDiskDevicePath;
@property (readonly) NSString *backupDiskRawDevicePath;
@property (readonly) BOOL backupDiskIsWritable;
@property (readonly) BOOL backupDiskIsMountable;
@property (readonly) BOOL backupDiskIsAPFS;
@property (readonly) BOOL backupDiskIsHFS;
@property (readonly) BOOL isPurgeable;
@property (readonly) BOOL isPartiallyCreated;
@property (readonly) BOOL isIncomplete;
@property (readonly) BOOL isSafeToDelete;

+ (id)diskImageMatchingThisComputerInDirectory:(id)a0 qos:(long long)a1;
+ (id)diskImagesInDirectory:(id)a0 error:(id *)a1;
+ (id)diskImagesInDirectory:(id)a0 qos:(long long)a1 error:(id *)a2;
+ (id)diskImagesInDirectory:(id)a0 qos:(long long)a1 includeIncomplete:(BOOL)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)isImmutable;
- (id)attachFileMode:(long long)a0 autoMount:(BOOL)a1 error:(id *)a2;
- (void)_attemptToEnsureImageIsNotInUse;
- (id)_backupDiskDescription;
- (id)_bsdNameForMedia:(unsigned int)a0;
- (void)_detachOrphanDiskImages;
- (id)_deviceNames;
- (id)_deviceNamesForDiskImagePath:(id)a0;
- (void)_ejectDeviceNames:(id)a0;
- (unsigned int)_encryptionStateForDrive:(unsigned int)a0;
- (BOOL)_fullfsync:(id *)a0;
- (id)_imagePathForDrive:(unsigned int)a0;
- (void)_iterate:(unsigned int)a0 options:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)_tokenURL;
- (BOOL)_unmountDeviceNames:(id)a0 force:(BOOL)a1;
- (id)associatedDictionaryForName:(id)a0 error:(id *)a1;
- (BOOL)asynchronouslyDelete:(id *)a0;
- (void)eject;
- (id)encryptionUUID;
- (id)imageInfoOpenEncryption:(BOOL)a0 returningError:(id *)a1;
- (id)initWithDiskImageURL:(id)a0;
- (id)initWithDiskImageURL:(id)a0 qos:(long long)a1;
- (BOOL)matchesAnyHostUUIDs:(id)a0;
- (BOOL)matchesHostUUID:(id)a0;
- (BOOL)matchesMACAddress:(id)a0;
- (BOOL)matchesThisComputer;
- (id)readTimeMachineInfo:(id *)a0;
- (id)renameUniquelyUsingBaseName:(id)a0 extension:(id)a1 error:(id *)a2;
- (BOOL)setAssociatedDictionary:(id)a0 forName:(id)a1 error:(id *)a2;
- (BOOL)setImmutable:(BOOL)a0;
- (BOOL)setSyncablePasswordID:(id)a0;
- (id)syncablePasswordID;
- (BOOL)unmountForce:(BOOL)a0;
- (id)updateAndRenameForThisComputer;
- (BOOL)updateMachineInfoForThisComputer;
- (BOOL)writeTimeMachineInfo:(id)a0 error:(id *)a1;

@end
