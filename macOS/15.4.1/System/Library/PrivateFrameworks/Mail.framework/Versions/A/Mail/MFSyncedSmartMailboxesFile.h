@interface MFSyncedSmartMailboxesFile : MFSyncedFile

+ (id)syncedSmartMailboxesFile;

- (id)readSmartMailboxes;
- (id)resolveConflictVersion:(id)a0 againstCurrentVersion:(id)a1;
- (id)upgradeLegacyCloudData:(id)a0 fromLegacyVersion:(long long)a1;
- (void)writeSmartMailboxes:(id)a0;

@end
