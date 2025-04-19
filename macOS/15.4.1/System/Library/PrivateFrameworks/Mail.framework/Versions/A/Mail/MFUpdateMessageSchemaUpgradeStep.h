@interface MFUpdateMessageSchemaUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (void)_handleNullSubject;
- (id)_newMessagesTableDefinition;
- (id)_summariesTableDefinition;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
