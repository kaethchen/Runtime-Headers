@interface MFAdoptSharedSchemaUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;

- (id)_addressesTableSchema;
- (id)_subjectsTableSchema;
- (id)_addressesTableColumns;
- (id)_conversationIDMessageIDTableColumns;
- (id)_conversationIdMessageIDTableOldColumns;
- (id)_conversationIdMessageIDTableSchema;
- (id)_conversationsTableColumns;
- (id)_conversationsTableSchema;
- (id)_mailboxesTableColumns;
- (id)_mailboxesTableSchema;
- (id)_recipientsTableColumns;
- (id)_recipientsTableOldColumns;
- (id)_recipientsTableSchema;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 columnNames:(id)a2;
- (void)_updateDefinitionForTable:(id)a0 definition:(id)a1 oldColumnNames:(id)a2 newColumnNames:(id)a3;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
