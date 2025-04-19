@class NSArray, NSDictionary, _WKWebExtensionSQLiteDatabase;

@interface _WKWebExtensionSQLiteStatement : NSObject {
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}

@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) NSDictionary *columnNamesToIndexes;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (readonly, nonatomic) _WKWebExtensionSQLiteDatabase *database;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)reset;
- (BOOL)_isValid;
- (int)execute;
- (BOOL)execute:(id *)a0;
- (void)bindData:(id)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindDouble:(double)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt:(int)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindNullAtParameterIndex:(unsigned long long)a0;
- (void)bindString:(id)a0 atParameterIndex:(unsigned long long)a1;
- (id)fetch;
- (BOOL)fetchWithEnumerationBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithDatabase:(id)a0 query:(id)a1;
- (id)initWithDatabase:(id)a0 query:(id)a1 error:(id *)a2;

@end
