@class NSString, NSDictionary, NSMutableArray, SFSQLite;

@interface SFSQLiteStatement : NSObject <SFSQLiteRow>

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (retain, nonatomic) NSDictionary *indexesByColumnName;
@property (readonly, weak, nonatomic) SFSQLite *SQLite;
@property (readonly, nonatomic) NSString *SQL;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (nonatomic, getter=isReset) BOOL reset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)allObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)reset;
- (unsigned long long)columnCount;
- (id)allObjectsByColumnName;
- (void)bindBlob:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (void)bindInt:(int)a0 atIndex:(unsigned long long)a1;
- (void)bindNullAtIndex:(unsigned long long)a0;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)bindValues:(id)a0;
- (id)blobAtIndex:(unsigned long long)a0;
- (id)columnNameAtIndex:(unsigned long long)a0;
- (int)columnTypeAtIndex:(unsigned long long)a0;
- (double)doubleAtIndex:(unsigned long long)a0;
- (void)enumerateColumnsUsingBlock:(id /* block */)a0;
- (void)finalizeStatement;
- (unsigned long long)indexForColumnName:(id)a0;
- (id)initWithSQLite:(id)a0 SQL:(id)a1 handle:(struct sqlite3_stmt { } *)a2;
- (long long)int64AtIndex:(unsigned long long)a0;
- (int)intAtIndex:(unsigned long long)a0;
- (void)resetAfterStepError;
- (id)retainedTemporaryBoundObject:(id)a0;
- (BOOL)step;
- (id)textAtIndex:(unsigned long long)a0;

@end
