@interface MFAddMailboxDatabaseIDColumnToMailboxActionsDataUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
