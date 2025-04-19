@class NSString, NSMutableArray, NSArray;

@interface XQueryFLWORExpr : XQueryExpr <XQueryExprBehavior> {
    NSMutableArray *_forLet;
    id _whereExpr;
    NSArray *_orderSpecs;
    id _returnExpr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exprWithForLet:(id)a0 whereExpr:(id)a1 orderSpecs:(id)a2 returnExpr:(id)a3;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (void)evaluateStartingAt:(long long)a0 toResults:(struct ArrayOrSingleton { id x0; id x1; } *)a1 withContext:(id)a2;
- (id)evaluateWithContext:(id)a0;
- (id)initWithForLet:(id)a0 whereExpr:(id)a1 orderSpecs:(id)a2 returnExpr:(id)a3;
- (id)orderSpecs;
- (void)processItem:(struct ArrayOrSingleton { id x0; id x1; } *)a0 withContext:(id)a1;

@end
