@class CKSQLiteTable, NSString, NSError, CKSQLiteCompiledStatement;

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator {
    CKSQLiteTable *_table;
    NSString *_groupName;
    NSString *_tableName;
    id _entry;
    BOOL _enumerationStarted;
}

@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)invalidate;
- (id)nextObject;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (id)currentObject;
- (id)initWithTable:(id)a0 statement:(id)a1;

@end
