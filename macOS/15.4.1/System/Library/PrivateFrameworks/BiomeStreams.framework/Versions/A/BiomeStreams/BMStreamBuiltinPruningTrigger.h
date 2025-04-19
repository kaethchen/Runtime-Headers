@class NSString, NSPredicate;

@interface BMStreamBuiltinPruningTrigger : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSPredicate *triggerCondition;
@property (readonly, nonatomic) NSPredicate *pruningPredicate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 predicate:(id)a1;
- (id)initWithIdentifier:(id)a0 triggerCondition:(id)a1 pruningPredicate:(id)a2;

@end
