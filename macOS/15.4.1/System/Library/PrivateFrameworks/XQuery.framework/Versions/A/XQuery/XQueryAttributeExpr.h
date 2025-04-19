@class NSString, NSArray, XQueryQNameReference;

@interface XQueryAttributeExpr : XQueryExpr <XQueryExprBehavior> {
    NSArray *_items;
    unsigned short _quoteChar;
    NSString *_name;
    XQueryQNameReference *_nameExpr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributeExprWithName:(id)a0 forItems:(id)a1 enclosedWith:(unsigned short)a2;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithName:(id)a0 forItems:(id)a1 enclosedWith:(unsigned short)a2;

@end
