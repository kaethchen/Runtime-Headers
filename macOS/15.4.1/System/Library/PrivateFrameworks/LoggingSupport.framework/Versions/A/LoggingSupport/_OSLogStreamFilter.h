@class NSData, NSMutableDictionary;

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {
    NSMutableDictionary *_filter;
    NSMutableDictionary *_pids;
    NSMutableDictionary *_processes;
    NSMutableDictionary *_processImagePaths;
    NSMutableDictionary *_uids;
    NSMutableDictionary *_subsystems;
    NSMutableDictionary *_categories;
}

@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void)addProcess:(id)a0 flags:(unsigned long long)a1 returningDict:(id *)a2;
- (void)addCategory:(id)a0 flags:(unsigned long long)a1 returningDict:(id *)a2;
- (void)addProcessID:(id)a0 flags:(unsigned long long)a1 returningDict:(id *)a2;
- (void)addProcessImagePath:(id)a0 flags:(unsigned long long)a1 returningDict:(id *)a2;
- (void)addSubsystem:(id)a0 flags:(unsigned long long)a1 returningDict:(id *)a2;
- (void)addUserID:(id)a0 flags:(unsigned long long)a1 returningDict:(id *)a2;
- (id)dictionaryForComparisonPredicate:(id)a0;
- (id)encodePredicate:(id)a0;
- (unsigned long long)flagsForPredicate:(id)a0;
- (void)processComparisonPredicate:(id)a0;
- (void)processLeftExpression:(id)a0 andRightExpression:(id)a1 flags:(unsigned long long)a2;
- (void)processLeftExpression:(id)a0 andRightExpression:(id)a1 flags:(unsigned long long)a2 returningDict:(id *)a3;
- (void)reduceFilter:(id)a0;

@end
