@class NSString, KHDBEntity, NSMutableArray;

@interface KHDBModelFilterParser : NSObject

@property (retain, nonatomic) NSString *sql;
@property (retain, nonatomic) KHDBEntity *entity;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (nonatomic) long long nextTokenIndex;
@property (nonatomic) unsigned long long nextArgIndex;

+ (int)predicateTypeForString:(id)a0;
+ (id)sqlTokensForString:(id)a0;
+ (id)stringForPredicateType:(int)a0;

- (void)dealloc;
- (id)parsePredicate;
- (id)nextToken;
- (id)peekToken;
- (BOOL)atEof;
- (id)getToken;
- (id)initWithSql:(id)a0 forEntity:(id)a1;
- (id)parseFilterOrPredicate;
- (id)parseModelFilter;
- (id)parseSetOfLiterals;

@end
