@class NSArray;

@interface XQueryStep : NSObject {
    id _expr;
    id _next;
    NSArray *_predicates;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)setPredicates:(id)a0;
- (id)next;
- (id)predicates;
- (void)setNext:(id)a0;
- (void)setLast:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)expr;
- (id)handlePreicatesFromIndex:(unsigned long long)a0 items:(id)a1 context:(id)a2;
- (id)initWithExpr:(id)a0;
- (void)processItems:(id)a0 toResults:(id)a1 forContext:(id)a2 validate:(BOOL)a3;

@end
