@interface MFCreateServerMessagesUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
