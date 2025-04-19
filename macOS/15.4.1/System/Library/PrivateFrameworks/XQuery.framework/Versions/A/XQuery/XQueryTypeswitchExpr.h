@class NSString, NSArray;

@interface XQueryTypeswitchExpr : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    NSArray *_caseClauses;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)expr:(id)a0 withCaseClauses:(id)a1;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 caseClauses:(id)a1;

@end
