@interface SMXPCUtilities : NSObject

+ (void)update:(id)a0 fromXPCDict:(id)a1 specialHandlers:(id)a2 propertyKeyOrder:(id)a3 duringInit:(BOOL)a4;
+ (void)update:(id)a0 fromXPCDict:(id)a1 specialHandlers:(id)a2;
+ (void)update:(id)a0 fromXPCDict:(id)a1 specialHandlers:(id)a2 propertyKeyOrder:(id)a3;
+ (id)xpcDictForObject:(id)a0 fromKeys:(id)a1 specialHandlers:(id)a2;

@end
