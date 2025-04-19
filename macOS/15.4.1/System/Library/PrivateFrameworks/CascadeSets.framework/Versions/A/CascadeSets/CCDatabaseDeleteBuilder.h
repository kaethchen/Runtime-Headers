@class NSArray;

@interface CCDatabaseDeleteBuilder : CCDatabaseCommandBuilder {
    NSArray *_returningColumns;
}

- (void).cxx_destruct;
- (id)build;
- (void)setCommandCriterion:(id)a0;
- (void)setReturningColumns:(id)a0;

@end
