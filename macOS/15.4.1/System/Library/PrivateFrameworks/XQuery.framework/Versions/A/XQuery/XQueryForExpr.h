@class NSString, XQueryTypeDeclaration;

@interface XQueryForExpr : XQueryExpr <XQueryExprBehavior> {
    NSString *_varName;
    NSString *_posVarName;
    XQueryTypeDeclaration *_type;
    id _expr;
    long long _varID;
    long long _posVarID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exprWithName:(id)a0 type:(id)a1 position:(id)a2 expr:(id)a3;

- (void)dealloc;
- (void)finalize;
- (id)type;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 position:(id)a2 expr:(id)a3;
- (long long)posVarID;
- (long long)varID;

@end
