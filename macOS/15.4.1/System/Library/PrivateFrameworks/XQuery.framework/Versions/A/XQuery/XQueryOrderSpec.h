@class NSString;

@interface XQueryOrderSpec : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    id _collation;
    BOOL _ascending;
    char _emptyLeast;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderSpec:(id)a0 ascending:(BOOL)a1 emptyLeast:(char)a2 collation:(id)a3;

- (void)dealloc;
- (void)finalize;
- (BOOL)ascending;
- (void)bindInfoForProlog:(id)a0;
- (id)collation;
- (BOOL)emptyLeast;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 ascending:(BOOL)a1 emptyLeast:(char)a2 collation:(id)a3;
- (void)setExpr:(id)a0;

@end
