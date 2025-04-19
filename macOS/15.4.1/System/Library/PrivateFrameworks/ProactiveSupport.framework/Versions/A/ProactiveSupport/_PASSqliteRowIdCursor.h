@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor

+ (BOOL)hasRowId;
+ (const char *)sqliteCreateTableStatement;

- (BOOL)currentIndexEof;
- (unsigned long long)currentIndexedRowId;
- (unsigned long long)outputRowId;

@end
