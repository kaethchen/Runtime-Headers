@interface CNDefaultQuickActionsEnvironment : NSObject

+ (id)environment;
+ (id)capabilities;
+ (id)schedulerProvider;
+ (id)applicationWorkspace;
+ (id)defaultActionFetcher;
+ (id)idsAvailabilityProvider;
+ (id)idsIDQueryControllerWrapper;

@end
