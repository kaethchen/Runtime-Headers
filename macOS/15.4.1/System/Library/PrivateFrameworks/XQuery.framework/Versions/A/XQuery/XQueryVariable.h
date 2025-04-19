@class NSString, XQueryQName;

@interface XQueryVariable : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    XQueryQName *_qName;
    long long _varID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)variableWithName:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithName:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (long long)varID;

@end
