@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (id)_lastScopedItem;
- (id)governingEntity;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)initWithScope:(id)a0;
- (BOOL)isFunctionScoped;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;
- (BOOL)isOrScoped;
- (BOOL)isTargetColumnsScoped;
- (BOOL)isUpdateColumnsScoped;
- (BOOL)isUpdateScoped;
- (BOOL)isWhereScoped;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;

@end
