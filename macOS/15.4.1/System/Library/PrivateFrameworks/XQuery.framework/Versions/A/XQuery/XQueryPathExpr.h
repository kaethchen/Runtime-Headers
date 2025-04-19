@class NSString, XQueryStep;

@interface XQueryPathExpr : XQueryExpr <XQueryExprBehavior> {
    XQueryStep *_step;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pathExprWithStep:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithStep:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;

@end
