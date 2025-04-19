@interface NSScriptCommandConstructionContext : NSObject

+ (void)endConstruction;
+ (void)beginConstructionWithSuiteRegistry:(id)a0;
+ (id)currentConstructionContext;
+ (void)setCurrentConstructionContext:(id)a0;

@end
