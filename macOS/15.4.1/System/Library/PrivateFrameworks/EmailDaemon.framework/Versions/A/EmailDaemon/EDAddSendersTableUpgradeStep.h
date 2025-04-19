@class EFSQLTableSchema, EFSQLSchema;

@interface EDAddSendersTableUpgradeStep : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLTableSchema *sendersTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *senderAddressesTableSchema;

+ (int)runWithConnection:(id)a0;

@end
