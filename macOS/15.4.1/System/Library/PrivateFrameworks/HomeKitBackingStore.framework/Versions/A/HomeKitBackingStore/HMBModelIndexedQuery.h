@class NSString, NSArray;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery

@property (readonly, nonatomic) NSString *indexNameSuffix;
@property (readonly, copy, nonatomic) NSArray *indexedColumns;
@property (readonly, copy, nonatomic) NSString *indexName;

+ (id)queryWithSQLPredicate:(id)a0 ascending:(BOOL)a1 indexedProperties:(id)a2 arguments:(id)a3;

- (void).cxx_destruct;
- (BOOL)hasExpectedIndexes;
- (id)initWithSQLPredicate:(id)a0 initialSequence:(id)a1 maximumRowsPerSelect:(unsigned long long)a2 indexNameSuffix:(id)a3 indexedColumns:(id)a4 arguments:(id)a5;

@end
