@class NSString, CKSQLiteDatabase;

@interface CKSQLiteCompiledStatementCacheKey : NSObject <NSCopying> {
    CKSQLiteDatabase *_db;
    NSString *_dbTableName;
    const struct { char *x0; char *x1; int x2; } *_statementLabel;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0 label:(const struct { char *x0; char *x1; int x2; } *)a1;

@end
