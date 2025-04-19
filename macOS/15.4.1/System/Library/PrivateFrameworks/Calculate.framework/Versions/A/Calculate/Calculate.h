@interface Calculate : NSObject

+ (void)_unlock;
+ (void)_lock;
+ (id)evaluate:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (void)_resetGlobals;
+ (id)evaluate:(id)a0 options:(id)a1;
+ (id)evaluate:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)evaluate:(id)a0 options:(id)a1 error:(id *)a2 needsUpdate:(BOOL *)a3;
+ (id)scan:(id)a0 options:(id)a1;
+ (id)scan:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
+ (id)scan:(id)a0 options:(id)a1 stop:(BOOL *)a2;

@end
