@class NSString, XQueryTypeDeclaration;

@interface XQueryLetExpr : XQueryExpr <XQueryExprBehavior> {
    NSString *_varName;
    XQueryTypeDeclaration *_type;
    id _expr;
    long long _varID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exprWithName:(id)a0 type:(id)a1 expr:(id)a2;

- (void)dealloc;
- (void)finalize;
- (id)type;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 expr:(id)a2;
- (long long)varID;

@end
