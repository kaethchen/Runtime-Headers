@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexForColumnName:(id)a0;
- (id)rows;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (id)stringValueForFirstRowAndColumn;
- (id)_statement;
- (id)columnNameIndexMap;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (BOOL)hasAtLeastOneRow;
- (long long)int64ValueForFirstRowAndColumn;
- (id)objectForFirstRowAndColumn;
- (id)objectsInColumn:(unsigned long long)a0;
- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;

@end
