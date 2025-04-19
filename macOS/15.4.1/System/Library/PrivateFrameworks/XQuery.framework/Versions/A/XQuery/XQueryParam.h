@class NSString, XQueryTypeDeclaration;

@interface XQueryParam : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    XQueryTypeDeclaration *_type;
    long long _varID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramWithName:(id)a0 type:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)type;
- (id)initWithName:(id)a0 type:(id)a1;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (long long)varID;

@end
