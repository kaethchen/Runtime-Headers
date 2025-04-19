@interface AMSMethodImplementationCache : NSObject

+ (void *)implementationOf:(SEL)a0 forInstancesOf:(Class)a1;
+ (BOOL)implementationsOf:(SEL)a0 areEqualIn:(Class)a1 and:(Class)a2;

- (id)init;
- (void).cxx_destruct;

@end
