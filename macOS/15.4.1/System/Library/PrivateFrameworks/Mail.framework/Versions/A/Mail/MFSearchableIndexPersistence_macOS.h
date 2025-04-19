@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexPersistence_macOS : EDSearchableIndexPersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statistics;
- (id)additionalFilterClause;
- (id)allMailboxIdentifiersForMessage:(id)a0;
- (void)attachmentItemMetadataForAttachmentID:(id)a0 attachmentPersistentID:(id)a1 messagePersistentID:(id)a2 name:(id)a3 mailboxID:(long long)a4 result:(id /* block */)a5;
- (id)messagesWhere:(id)a0 useSearchableRebuildTable:(BOOL)a1 limit:(long long)a2;
- (id)searchableIndexItemsFromMessages:(id)a0 type:(long long)a1;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)a0;
- (id)_verificationDataFromMessage:(id)a0 messageIDTransactionIDDictionary:(id)a1;

@end
