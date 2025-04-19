@class NSString, XQueryQName;

@interface XQueryQNameReference : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    NSString *_prefix;
    NSString *_localPart;
    XQueryQName *_qName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)qNameReferenceWithQName:(id)a0 line:(long long)a1;
+ (id)qNameReferenceWithString:(id)a0 line:(long long)a1;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithQName:(id)a0 line:(long long)a1;
- (id)initWithString:(id)a0 line:(long long)a1;

@end
