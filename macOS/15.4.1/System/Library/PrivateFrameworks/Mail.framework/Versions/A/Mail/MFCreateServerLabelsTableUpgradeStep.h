@interface MFCreateServerLabelsTableUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)_populateFromLocalMessagesTable;
- (void)_populateFromIMAPLabelsTable;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
