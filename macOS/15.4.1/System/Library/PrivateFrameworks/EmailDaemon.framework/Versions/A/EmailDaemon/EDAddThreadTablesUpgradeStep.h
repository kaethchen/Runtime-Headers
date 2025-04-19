@class EFSQLTableSchema;

@interface EDAddThreadTablesUpgradeStep : NSObject

@property (class, readonly, nonatomic) EFSQLTableSchema *threadScopesTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadsTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadMailboxesTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadSendersTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadRecipientsTableSchema;

+ (id)_schemaWithMessagesTable:(id)a0 mailboxesTable:(id)a1 conversationsTable:(id)a2;
+ (int)runWithConnection:(id)a0;

@end
