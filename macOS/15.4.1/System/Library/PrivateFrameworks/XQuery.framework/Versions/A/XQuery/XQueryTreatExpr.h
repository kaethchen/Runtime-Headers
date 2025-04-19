@class NSString, XQueryTypeDeclaration;

@interface XQueryTreatExpr : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    XQueryTypeDeclaration *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)object:(id)a0 treatAs:(id)a1 forContext:(id)a2;
+ (id)treatExpr:(id)a0 asType:(id)a1;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 asType:(id)a1;

@end
