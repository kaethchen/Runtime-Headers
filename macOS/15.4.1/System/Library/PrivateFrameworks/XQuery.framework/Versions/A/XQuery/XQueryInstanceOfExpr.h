@class NSString, XQueryTypeDeclaration;

@interface XQueryInstanceOfExpr : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    XQueryTypeDeclaration *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceOfExpr:(id)a0 forType:(id)a1;
+ (id)object:(id)a0 instanceOf:(id)a1 forContext:(id)a2;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 forType:(id)a1;

@end
