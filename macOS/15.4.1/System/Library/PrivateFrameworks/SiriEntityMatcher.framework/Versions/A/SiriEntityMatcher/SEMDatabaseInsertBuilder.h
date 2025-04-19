@class NSArray;

@interface SEMDatabaseInsertBuilder : SEMDatabaseCommandBuilder {
    unsigned long long _numberOfColumns;
    NSArray *_columnNames;
    NSArray *_columnValues;
    NSArray *_returningColumns;
}

- (void).cxx_destruct;
- (id)buildWithError:(id *)a0;
- (void)setColumnValues:(id)a0;
- (id)initWithTableName:(id)a0 columnNames:(id)a1;
- (BOOL)_setError:(id *)a0 withCode:(long long)a1;
- (void)setReturningColumns:(id)a0;

@end
