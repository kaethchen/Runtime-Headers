@interface PFDeferredInitializationTrigger : PFInitializationWorkItemTrigger

+ (id)dependencies;
+ (BOOL)mainThreadOnly;
+ (void)performInitialization;
+ (Class)workItemClass;

@end
