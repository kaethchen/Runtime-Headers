@interface MFSyncedSignaturesFile : MFSyncedFile

+ (id)syncedSignaturesFile;

- (id)readSignatures;
- (id)resolveConflictVersion:(id)a0 againstCurrentVersion:(id)a1;
- (id)upgradeLegacyCloudData:(id)a0 fromLegacyVersion:(long long)a1;
- (void)writeSignatures:(id)a0;

@end
