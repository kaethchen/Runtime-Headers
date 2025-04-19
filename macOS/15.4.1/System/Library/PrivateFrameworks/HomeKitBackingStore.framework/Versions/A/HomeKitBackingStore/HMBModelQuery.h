@class NSString, NSMapTable, NSDictionary, NSNumber;

@interface HMBModelQuery : HMFObject

@property (readonly, nonatomic) NSMapTable *preparedQueries;
@property (readonly, nonatomic) NSString *sqlPredicate;
@property (readonly, nonatomic) unsigned long long maximumRowsPerSelect;
@property (readonly, nonatomic) NSNumber *initialSequence;
@property (readonly, copy, nonatomic) NSDictionary *arguments;
@property (retain, nonatomic) Class modelClass;
@property (readonly, nonatomic) NSString *sqlSelect;
@property (readonly, nonatomic) NSDictionary *argumentFields;
@property (readonly, nonatomic) NSDictionary *encodedDefaultValuesByArgumentName;
@property (readonly, nonatomic) BOOL hasExpectedIndexes;

- (id)description;
- (void).cxx_destruct;
- (id)prepareOnTable:(id)a0;
- (id)sqlSelectStatementForModelType:(id)a0;
- (id)initWithSQLPredicate:(id)a0 initialSequence:(id)a1 maximumRowsPerSelect:(unsigned long long)a2 arguments:(id)a3;
- (id)performQueryOn:(id)a0 arguments:(id)a1;

@end
