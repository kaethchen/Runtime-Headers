@class NSString, XQueryTypeDeclaration;

@interface XQueryCastExpr : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    XQueryTypeDeclaration *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)castExpr:(id)a0 asType:(id)a1;
+ (id)castObject:(id)a0 asType:(long long)a1 forContext:(id)a2 allowEmpty:(BOOL)a3;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 type:(id)a1;

@end
