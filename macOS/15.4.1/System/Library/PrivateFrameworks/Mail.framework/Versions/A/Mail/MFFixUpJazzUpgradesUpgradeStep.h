@interface MFFixUpJazzUpgradesUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (id)_actionMessagesColumns;
- (id)_actionMessagesDefinition;
- (id)_attachmentsColumns;
- (id)_attachmentsDefinition;
- (id)_localMessageActionsColumns;
- (id)_localMessageActionsDefinition;
- (BOOL)_needToPerformUpgrade;
- (id)_recipientsColumns;
- (id)_recipientsDefinition;
- (id)_searchableMessageTombstonesColumns;
- (id)_searchableMessageTombstonesDefinition;
- (id)_serverMessageColumns;
- (id)_serverMessageDefinition;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 columnNames:(id)a2;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
