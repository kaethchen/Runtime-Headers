@class NSString, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface EDAttachmentPersistence : NSObject <EFLoggable>

@property (class, readonly, copy, nonatomic) NSString *attachmentsTableName;
@property (class, readonly, copy, nonatomic) NSString *globalMessageIDColumnNameInMessageAttachmentTable;
@property (class, readonly, copy, nonatomic) NSString *attachmentIDColumnNameInMessageAttachmentsTable;
@property (class, readonly, copy, nonatomic) NSString *attachmentColumnNameHash;
@property (class, readonly, copy, nonatomic) NSString *messageAttachmentsTableName;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentTableSchema;
+ (id)hashForAttachmentData:(id)a0;
+ (id)hashForAttachmentName:(id)a0;
+ (id)messageAttachmentTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)attachmentsForGlobalMessageIDs:(id)a0;
- (id)attachmentMetadataForMessage:(long long)a0 mimePartNumber:(id)a1;
- (id)attachmentMetadataForMessage:(long long)a0 remoteURL:(id)a1;
- (id)attachmentMetadataForMessageAttachmentID:(id)a0;
- (id)attachmentMetadataForMessageIDs:(id)a0;
- (void)enumerateAttachmentsInfoForGlobalMessageIDs:(id)a0 withBlock:(id /* block */)a1;
- (id)globalMessageIDsForAttachment:(id)a0;
- (long long)insertAttachmentMetadata:(id)a0;
- (BOOL)insertMessageAttachmentMetadata:(id)a0;
- (void)insertMimePartAttachments:(id)a0 forGlobalMessageID:(long long)a1;
- (BOOL)messageAttachmentExistsForGlobalMessageID:(long long)a0 mimePartNumber:(id)a1 hasAttachmentEntry:(BOOL *)a2;
- (BOOL)messageAttachmentExistsForGlobalMessageID:(long long)a0 remoteURL:(id)a1 hasAttachmentEntry:(BOOL *)a2;
- (id)messageAttachmentMetadataForMessageID:(long long)a0;
- (BOOL)removeAttachments:(id)a0;
- (id)uniqueAttachmentDataForHash:(id)a0;
- (BOOL)updateAttachmentIDForMessageAttachment:(id)a0;

@end
