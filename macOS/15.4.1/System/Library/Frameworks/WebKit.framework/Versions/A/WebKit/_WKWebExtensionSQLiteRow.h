@class _WKWebExtensionSQLiteStatement;

@interface _WKWebExtensionSQLiteRow : NSObject {
    struct sqlite3_stmt { } *_handle;
    _WKWebExtensionSQLiteStatement *_statement;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (long long)int64AtIndex:(unsigned long long)a0;
- (int)intAtIndex:(unsigned long long)a0;
- (id)dataAtIndex:(unsigned long long)a0;
- (id)stringAtIndex:(unsigned long long)a0;
- (id)initWithStatement:(id)a0;
- (BOOL)_isNullAtIndex:(unsigned long long)a0;
- (id)initWithCurrentRowOfEnumerator:(id)a0;
- (BOOL)boolAtIndex:(unsigned long long)a0;
- (id)uncopiedDataAtIndex:(unsigned long long)a0;
- (struct RawData { BOOL x0; void *x1; int x2; })uncopiedRawDataAtIndex:(unsigned long long)a0;

@end
