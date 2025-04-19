@class EDPersistenceDatabaseConnection, EFSQLPreparedStatement;

@interface MFMessageWritePreparedStatements : NSObject {
    EFSQLPreparedStatement *_fetchMessageStatement;
    EFSQLPreparedStatement *_fetchSubjectStatement;
    EFSQLPreparedStatement *_fetchMessageGlobalIDStatement;
    EFSQLPreparedStatement *_fetchSenderAndSubjectStatement;
    EFSQLPreparedStatement *_insertSubjectStatement;
    EFSQLPreparedStatement *_insertMessageGlobalIDStatement;
    EFSQLPreparedStatement *_insertThreadStatement;
    EFSQLPreparedStatement *_insertAttachmentsStatement;
    EFSQLPreparedStatement *_insertRecipientsStatement;
    EFSQLPreparedStatement *_insertAddressesStatement;
    EFSQLPreparedStatement *_insertEventStatement;
    EFSQLPreparedStatement *_insertConversationStatement;
    EFSQLPreparedStatement *_fetchRecipientStatement;
    EFSQLPreparedStatement *_fetchAddressStatement;
    EFSQLPreparedStatement *_copyRecipientStatement;
    EFSQLPreparedStatement *_copyThreadStatement;
    EFSQLPreparedStatement *_copyAttachmentStatement;
    EFSQLPreparedStatement *_copyEventStatement;
    EFSQLPreparedStatement *_deleteThreadStatement;
    EFSQLPreparedStatement *_deleteAttachmentStatement;
    EFSQLPreparedStatement *_deleteRecipientStatement;
    EFSQLPreparedStatement *_deleteAddressesStatement;
    EFSQLPreparedStatement *_deleteSubjectsStatement;
    EFSQLPreparedStatement *_deleteMessageGlobalIDStatement;
    EFSQLPreparedStatement *_deleteMessageSummaryStatement;
}

@property (readonly, nonatomic) EFSQLPreparedStatement *fetchSenderSubjectGlobalIDSummaryStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *copyRecipientStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *copyThreadStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *copyAttachmentStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *copyEventStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteThreadStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteAttachmentStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteRecipientStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteAddressesStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteSubjectsStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteMessageGlobalIDStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *deleteMessageSummaryStatement;
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, nonatomic) EFSQLPreparedStatement *fetchMessageStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *fetchSubjectStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *fetchMessageGlobalIDStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *fetchRecipientStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *fetchAddressStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertSubjectStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertMessageGlobalIDStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertReferenceStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertAttachmentsStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertRecipientsStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertAddressesStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertEventStatement;
@property (readonly, nonatomic) EFSQLPreparedStatement *insertConversationStatement;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)handleSQLError:(int)a0 errorString:(id)a1;

@end
