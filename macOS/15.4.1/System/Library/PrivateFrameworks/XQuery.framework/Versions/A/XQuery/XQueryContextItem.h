@class NSString;

@interface XQueryContextItem : XQueryExpr <XQueryExprBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextItem;

- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;

@end
