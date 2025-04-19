@class NSString;

@interface MFSyncedSignatureContentsFile : MFSyncedFile

@property (copy, nonatomic) NSString *uniqueID;

+ (id)syncedSignatureContentsFileWithUniqueID:(id)a0;

- (void).cxx_destruct;
- (id)readSignatureContents;
- (id)resolveConflictVersion:(id)a0 againstCurrentVersion:(id)a1;
- (id)upgradeLegacyCloudData:(id)a0 fromLegacyVersion:(long long)a1;
- (void)writeSignatureContents:(id)a0;

@end
