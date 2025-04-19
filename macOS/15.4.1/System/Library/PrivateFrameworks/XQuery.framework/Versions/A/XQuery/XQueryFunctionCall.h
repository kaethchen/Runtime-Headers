@class XQueryFunctionDecl, NSString, NSValue, XQueryArgs;

@interface XQueryFunctionCall : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    XQueryArgs *_args;
    NSValue *_function;
    XQueryFunctionDecl *_functionDecl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)functionCallWithName:(id)a0 withArgs:(id)a1;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithName:(id)a0 args:(id)a1;

@end
