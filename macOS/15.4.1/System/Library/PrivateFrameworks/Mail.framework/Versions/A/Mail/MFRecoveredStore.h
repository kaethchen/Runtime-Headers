@class NSArray;

@interface MFRecoveredStore : MFMessageStore

@property (readonly, copy, nonatomic) NSArray *pathsToImport;
@property (readonly, copy, nonatomic) NSArray *messagesForImporter;
@property (readonly, nonatomic) unsigned long long approximateMessageCount;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)saveChanges;
- (id)initWithAccount:(id)a0;
- (void)updateMetadata;
- (void)_cancelAutosave;
- (BOOL)_importMessagesWithBlock:(id /* block */)a0 includeConversationID:(BOOL)a1;
- (void)_setNeedsAutosave;
- (BOOL)importMessagesWithBlock:(id /* block */)a0;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 createEmptyStore:(BOOL)a2;
- (id)initWithMailbox:(id)a0 readOnly:(BOOL)a1 pathsToImport:(id)a2;
- (id)messagesForImporterWithConversationID:(BOOL)a0;
- (void)queueSaveChangesInvocation;

@end
