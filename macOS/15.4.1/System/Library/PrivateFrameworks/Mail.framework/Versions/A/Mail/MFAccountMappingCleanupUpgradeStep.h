@interface MFAccountMappingCleanupUpgradeStep : MFRemoveMessagesUpgradeStep

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;
+ (BOOL)recalculateAllConversations;

- (BOOL)_addRecipientsForLibraryID:(long long)a0 recipients:(id)a1 recipientType:(char)a2 position:(int)a3 cache:(id)a4;
- (BOOL)_addRecipientsForLibraryIDFromMessage:(id)a0 libraryID:(long long)a1 cache:(id)a2;
- (void)_deleteMailboxesFromDatabase:(id)a0;
- (id)_fetchOrphanedMailboxIDs:(id *)a0;
- (id)_insertMessages:(id)a0 withMailbox:(id)a1 error:(id *)a2;
- (id)_popAccountsNeedingRebuild:(id)a0;
- (void)_rebuildPOPAccounts:(id)a0;
- (BOOL)_rebuildPOPMailbox:(id)a0;
- (void)_recalculateMessageCountsForPOPMailbox:(id)a0;
- (id)_referencesAsEncodedMessageIDStringFromMessageHeaders:(id)a0;
- (long long)_rowIDForAddressText:(id)a0 cache:(id)a1;
- (long long)_rowIDForSubject:(id)a0 cache:(id)a1;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
