@class NSString;

@interface XQueryConditionalExpr : XQueryExpr <XQueryExprBehavior> {
    id _test;
    id _then;
    id _else;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)condionalExpr:(id)a0 thenExpr:(id)a1 elseExpr:(id)a2;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)intWithTestExpr:(id)a0 thenExpr:(id)a1 elseExpr:(id)a2;

@end
