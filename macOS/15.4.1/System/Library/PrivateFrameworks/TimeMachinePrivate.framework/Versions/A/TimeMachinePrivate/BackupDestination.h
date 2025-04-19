@class TMDisk, NSString, NSArray, NSData, NSSet, NSURL, NSDictionary, NSDate, NSMutableSet, TMConfiguration, NSNumber;

@interface BackupDestination : NSObject {
    NSMutableSet *_trustedUUIDs;
    NSData *_legacyAliasPreservationData;
}

@property (class, readonly) NSData *standInAliasData;

@property long long lastBackupResult;
@property (copy) NSArray *lastBackupResultParameters;
@property (copy) NSArray *lastBackupResultHeaderParameters;
@property (copy) NSData *aliasData;
@property (copy) NSString *rootVolumeUUID;
@property (readonly) TMConfiguration *configuration;
@property (readonly, copy) NSString *destinationID;
@property (copy) NSSet *trustedUUIDs;
@property (retain) NSURL *networkURL;
@property (readonly) BOOL isNetworkDestination;
@property (retain) NSString *lastKnownVolumeName;
@property (readonly) NSString *displayName;
@property (readonly) TMDisk *localDisk;
@property (readonly, copy) NSDictionary *propertyListRepresentation;
@property (copy) NSString *filesystemTypeName;
@property (copy) NSString *diskImageType;
@property (copy) NSString *timeCapsuleName;
@property (copy) NSString *timeCapsuleMACAddress;
@property (readonly) BOOL needsWarningAboutDelayedBackups;
@property (retain) NSDate *stableLocalSnapshotDate;
@property (retain) NSDate *referenceLocalSnapshotDate;
@property (copy) NSArray *lastKnownBackupDates;
@property (readonly) NSDate *oldestBackupDate;
@property (readonly) NSDate *newestBackupDate;
@property (copy) NSArray *backupAttemptDates;
@property (readonly) double timeIntervalSinceLatestBackup;
@property (copy) NSNumber *bytesAvailable;
@property (copy) NSNumber *bytesUsed;
@property (retain) NSNumber *quotaGB;
@property (readonly, copy) NSNumber *quota;
@property unsigned int healthCheckDecision;
@property (copy) NSDate *timeCapsuleFirmwareCheckDate;
@property (copy) NSDate *consistencyScanDate;
@property (copy) NSDate *backupVersionChangeDate;
@property (copy) NSString *inheritanceHostUUID;
@property unsigned int inheritanceDecision;
@property unsigned int lastKnownEncryptionState;
@property (readonly) unsigned int expectedDiskImageEncryptionState;
@property (copy) NSString *diskImageKeychainUUID;

+ (BOOL)extractInfoFromAliasData:(id)a0 isNetworkDestination:(out BOOL *)a1 networkURL:(out id *)a2 volumeName:(out id *)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)save;
- (id)initWithLocalVolumeUUID:(id)a0 destinationID:(id)a1 volumeName:(id)a2 configuration:(id)a3;
- (void)updateBytesUsed:(id)a0 bytesAvailable:(id)a1;
- (void)addTrustedUUID:(id)a0;
- (id)_diskByResolvingAliasData:(id)a0 qos:(long long)a1 backupCount:(unsigned long long)a2;
- (id)_trustedVolumeUUIDsFromTopLevelKeysOfConfiguration:(id)a0;
- (unsigned long long)backupCount;
- (id)diskImageSystemKeychainPasswordError:(id *)a0;
- (id)initFromTopLevelKeysOfConfiguration:(id)a0 error:(id *)a1;
- (id)initNewDestinationWithMountPoint:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithNetworkURL:(id)a0 destinationID:(id)a1 configuration:(id)a2;
- (id)laterBackup:(id)a0;
- (void)markLastBackupFailedWithError:(id)a0;
- (void)markLastBackupSucceeded;
- (BOOL)resemblesOtherDestination:(id)a0;

@end
