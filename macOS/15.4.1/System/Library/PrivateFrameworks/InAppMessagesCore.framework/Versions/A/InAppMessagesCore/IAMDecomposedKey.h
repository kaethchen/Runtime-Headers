@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)addPredicateCondition:(id)a0;
- (void)constructCompoundPredicateIfNeeded;
- (BOOL)hasPredicates;
- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;

@end
