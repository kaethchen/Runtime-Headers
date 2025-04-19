@class NSString, SEMSQLCommandJoinCriterion;

@interface SEMSQLCommandJoin : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) SEMSQLCommandJoinCriterion *joinCriterion;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
