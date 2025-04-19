@interface SEMSQLiteCachedStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

- (void)dealloc;
- (id)init;
- (struct sqlite3_stmt { } *)stmt;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;

@end
