@class NSString, XQueryQNameReference;

@interface XQueryWildCardNameTest : XQueryExpr <XQueryExprBehavior> {
    XQueryQNameReference *_qNameReference;
    NSString *_uri;
    NSString *_prefix;
    NSString *_localName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameTest:(id)a0 localName:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)localName;
- (id)prefix;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithPrefix:(id)a0 localName:(id)a1;
- (id)uriForContext:(id)a0;

@end
