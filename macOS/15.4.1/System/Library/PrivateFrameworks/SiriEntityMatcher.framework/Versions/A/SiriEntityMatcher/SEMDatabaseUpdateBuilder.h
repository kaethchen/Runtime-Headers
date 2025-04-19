@class NSArray, NSMutableArray;

@interface SEMDatabaseUpdateBuilder : SEMDatabaseCommandBuilder {
    NSMutableArray *_columnNames;
    NSMutableArray *_columnValues;
    NSArray *_returningColumns;
}

- (void).cxx_destruct;
- (id)build;
- (id)initWithTableName:(id)a0;
- (void)setCommandCriterion:(id)a0;
- (void)setReturningColumns:(id)a0;
- (void)setValue:(id)a0 forColumn:(id)a1;

@end
