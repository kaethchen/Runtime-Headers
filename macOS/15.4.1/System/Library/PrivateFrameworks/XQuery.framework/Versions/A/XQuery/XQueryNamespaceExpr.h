@class NSString;

@interface XQueryNamespaceExpr : XQueryExpr <XQueryExprBehavior> {
    id _name;
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)namespaceExprWithName:(id)a0 value:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)name;
- (id)value;
- (id)initWithName:(id)a0 value:(id)a1;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;

@end
