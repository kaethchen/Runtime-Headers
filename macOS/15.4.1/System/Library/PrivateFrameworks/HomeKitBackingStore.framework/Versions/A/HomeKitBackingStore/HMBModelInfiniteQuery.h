@class NSString;

@interface HMBModelInfiniteQuery : HMBModelFiniteQuery

@property (readonly, copy) NSString *sequenceArgumentName;

+ (id)queryWithSQLPredicate:(id)a0 sequenceArgumentName:(id)a1 indexedProperties:(id)a2 arguments:(id)a3;

- (void).cxx_destruct;
- (id)sqlSelectStatementForModelType:(id)a0;
- (id)initWithSQLPredicate:(id)a0 sequenceArgumentName:(id)a1 maximumRowsPerSelect:(unsigned long long)a2 indexNameSuffix:(id)a3 indexedColumns:(id)a4 arguments:(id)a5;
- (id)performQueryOn:(id)a0 arguments:(id)a1;

@end
