@class NSString, XQueryTypeDeclaration;

@interface XQueryRootStepExpr : NSObject <XQueryExprBehavior> {
    XQueryTypeDeclaration *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)expr;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;

@end
