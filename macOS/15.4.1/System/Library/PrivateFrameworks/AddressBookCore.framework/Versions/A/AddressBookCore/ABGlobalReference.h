@interface ABGlobalReference : NSObject

+ (void)initialize;
+ (void)addGlobalReference:(id)a0;
+ (void)removeGlobalReference:(id)a0 andKeepAlive:(BOOL)a1;

@end
