@class NSString;

@interface XQueryTextExpr : XQueryExpr <XQueryExprBehavior> {
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textExprWithValue:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithValue:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;

@end
