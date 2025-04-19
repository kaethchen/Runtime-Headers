@class NSString, NSArray, NSMutableIndexSet, NSMutableString, KHDBDatabaseManager;

@interface KHDBPreparedSql : NSObject {
    KHDBDatabaseManager *_DB;
    struct sqlite3_stmt { } *_pStmt;
    NSString *_sql;
    int _sqlError;
    BOOL _isPrepared;
    BOOL _multiBindSql;
    unsigned long long _nBindPoints;
    unsigned long long _fixedBindPoints;
    NSArray *_multiBindFragments;
    NSMutableIndexSet *_multiBindIndexes;
    NSMutableString *_expandedSql;
}

+ (unsigned long long)countBindPoints:(id)a0;
+ (id)escapeLikeSpecialChars:(id)a0;
+ (id)gatherArgsForSql:(id)a0 varArgs:(char **)a1;
+ (id)generateQuestionMarkList:(unsigned long long)a0;
+ (id)questionMarkList:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (void)close;
- (unsigned long long)numberOfArguments;
- (BOOL)prepare;
- (struct sqlite3_stmt { } *)statement;
- (BOOL)isPrepared;
- (id)sql;
- (id)databaseManager;
- (void)profileTraceExecution:(id)a0 isUpdate:(BOOL)a1;
- (BOOL)updateWithArgs:(id)a0;
- (long long)bindArguments:(id)a0;
- (void)expandSqlForArgs:(id)a0;
- (id)expandedSql;
- (void)finalizeSql;
- (void)finalizeSqlNoLock;
- (id)gatherArgsFromVarArgs:(char **)a0;
- (BOOL)hasMultibindPoints;
- (id)initWithDB:(id)a0 sql:(id)a1 prepare:(BOOL)a2;
- (unsigned long long)numberOfBindPoints;
- (BOOL)prepareOnThisThread;
- (int)printBytesForArgs:(id)a0 toFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 withIndent:(char *)a2 bytesIndex:(int)a3;
- (void)printObject:(id)a0 toFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 withIndent:(char *)a2 bytesIndex:(int *)a3;
- (id)queryWithArgs:(id)a0;
- (id)queryWithArgs:(id)a0 canceler:(id)a1;
- (void)reprepareSql;
- (int)sqlError;

@end
