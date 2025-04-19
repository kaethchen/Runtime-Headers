@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    int _stmtReprepareCounter;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)dealloc;
- (void)invalidate;
- (void)resetSearchHint;
- (void)_deallocState;
- (void)_ensureColumnMappingExists;
- (int)indexForColumnAlias:(const char *)a0;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (void)invalidateIfNeeded;

@end
