@interface MFRemoveOrphanedMailboxRowsUpgradeStep : MFRemoveMessagesUpgradeStep

+ (unsigned long long)targetVersion;

- (id)_mailboxRowIDListWithAccountURLStrings:(id)a0;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
