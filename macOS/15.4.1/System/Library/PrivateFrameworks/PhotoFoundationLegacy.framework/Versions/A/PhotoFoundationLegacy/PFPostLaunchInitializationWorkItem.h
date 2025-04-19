@interface PFPostLaunchInitializationWorkItem : PFInitializationWorkItem

+ (void)registerMainThreadPostLaunchBlock:(id /* block */)a0;
+ (void)registerPostLaunchBlock:(id /* block */)a0;

- (id)init;

@end
