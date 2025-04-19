@interface ML3DatabaseStatementRenderer : NSObject

+ (id)defaultRenderer;

- (id)beginTransactionStatementWithBehaviorType:(unsigned long long)a0;
- (id)commitTransactionStatement;
- (id)insertStatementForTableName:(id)a0 columnNames:(id)a1;
- (id)insertStatementUsingDefaultValuesForTableName:(id)a0;
- (id)insertStatementWithOptions:(id)a0;
- (id)rollbackTranscationStatement;
- (id)rollbackTranscationStatementToSavepointName:(id)a0;
- (id)savepointReleaseStatementWithName:(id)a0;
- (id)savepointStatementWithName:(id)a0;
- (id)statementWithPrefix:(id)a0 inParameterCount:(unsigned long long)a1;
- (id)statementWithPrefix:(id)a0 inParameterCount:(unsigned long long)a1 valueCount:(unsigned long long)a2;

@end
