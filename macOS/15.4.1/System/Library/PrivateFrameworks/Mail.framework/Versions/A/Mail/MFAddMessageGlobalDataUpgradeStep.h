@interface MFAddMessageGlobalDataUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (id)_messagesTableDefinition;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
