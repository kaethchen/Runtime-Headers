@interface MFSyncedRulesFile : MFSyncedFile

+ (id)syncedRulesFile;

- (id)readRules;
- (id)resolveConflictVersion:(id)a0 againstCurrentVersion:(id)a1;
- (id)upgradeLegacyCloudData:(id)a0 fromLegacyVersion:(long long)a1;
- (void)writeRules:(id)a0;

@end
