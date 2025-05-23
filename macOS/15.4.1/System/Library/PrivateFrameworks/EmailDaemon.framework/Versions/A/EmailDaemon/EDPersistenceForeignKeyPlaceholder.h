@class NSString, EFSQLColumnSchema;

@interface EDPersistenceForeignKeyPlaceholder : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *column;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, nonatomic) unsigned long long deleteAction;
@property (readonly, nonatomic) unsigned long long updateAction;

- (id)description;
- (void).cxx_destruct;
- (id)initWithColumn:(id)a0 tableName:(id)a1 onDelete:(unsigned long long)a2 onUpdate:(unsigned long long)a3;
- (BOOL)resolveToStringForTableNames:(id)a0;
- (BOOL)resolveWithSchema:(id)a0;

@end
