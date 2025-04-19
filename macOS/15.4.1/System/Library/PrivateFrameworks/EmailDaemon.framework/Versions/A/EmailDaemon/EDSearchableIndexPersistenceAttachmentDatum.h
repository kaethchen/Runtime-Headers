@class EDPersistedMessageID, EDPersistedAttachmentID, NSString;

@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject

@property (readonly, copy, nonatomic) EDPersistedAttachmentID *attachmentPersistentID;
@property (readonly, copy, nonatomic) EDPersistedMessageID *messagePersistentID;
@property (readonly, copy, nonatomic) NSString *attachmentID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long mailboxID;

- (void).cxx_destruct;
- (id)initWithAttachmentPersistentID:(id)a0 messagePersistentID:(id)a1 attachmentID:(id)a2 name:(id)a3 mailboxID:(long long)a4;

@end
