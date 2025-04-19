@class NSDictionary, NSMutableArray, ASUSQLiteStatement;

@interface ASUSQLiteCursor : NSObject {
    int _columnCount;
    unsigned char *_columnDeclaredTypes;
    NSDictionary *_columnIndexByName;
    id _columnKeySet;
    NSMutableArray *_columnNames;
    struct sqlite3_stmt { } *_statement;
    ASUSQLiteStatement *_statementWrapper;
}

@property (readonly, nonatomic) long long numberOfColumns;

- (void)dealloc;
- (void).cxx_destruct;
- (id)URLForColumnIndex:(int)a0;
- (id)URLForColumnName:(id)a0;
- (id)dataForColumnIndex:(int)a0;
- (id)dataForColumnName:(id)a0;
- (id)dateForColumnIndex:(int)a0;
- (id)dateForColumnName:(id)a0;
- (double)doubleForColumnIndex:(int)a0;
- (double)doubleForColumnName:(id)a0;
- (long long)int64ForColumnIndex:(int)a0;
- (long long)int64ForColumnName:(id)a0;
- (int)intForColumnIndex:(int)a0;
- (int)intForColumnName:(id)a0;
- (id)numberForColumnIndex:(int)a0;
- (id)numberForColumnName:(id)a0;
- (id)stringForColumnIndex:(int)a0;
- (id)stringForColumnName:(id)a0;
- (id)UUIDForColumnIndex:(int)a0;
- (id)UUIDForColumnName:(id)a0;
- (id)dictionaryWithValuesForColumnNames:(id)a0;
- (id)dictionaryWithValuesForColumns;

@end
