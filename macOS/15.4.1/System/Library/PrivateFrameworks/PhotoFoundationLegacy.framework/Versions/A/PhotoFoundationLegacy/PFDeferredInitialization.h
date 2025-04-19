@interface PFDeferredInitialization : PFInitialization

+ (id)dependencies;
+ (unsigned long long)initializationTrigger;
+ (Class)workItemClass;

@end
