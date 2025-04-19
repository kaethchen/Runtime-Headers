@interface MFCreateLocalActionTableUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void)_addFlagEntriesForActionID:(id)a0 flags:(long long)a1 mask:(long long)a2 connection:(id)a3;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
