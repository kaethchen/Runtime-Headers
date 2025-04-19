@class NSString, XQueryTypeDeclaration;

@interface XQueryQuantifiedExprItem : XQueryExpr <XQueryExprBehavior> {
    NSString *_varName;
    long long _varID;
    XQueryTypeDeclaration *_type;
    id _expr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quantifiedExpr:(id)a0 forVar:(id)a1 type:(id)a2;

- (void)dealloc;
- (void)finalize;
- (id)type;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 forVar:(id)a1 type:(id)a2;
- (long long)varID;

@end
