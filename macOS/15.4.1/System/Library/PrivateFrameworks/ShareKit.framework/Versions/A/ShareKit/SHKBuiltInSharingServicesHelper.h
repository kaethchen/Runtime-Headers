@interface SHKBuiltInSharingServicesHelper : NSObject

+ (id)workQueue;
+ (id)builtInSharingServicesForItems:(id)a0;
+ (void)builtInSharingServicesForItems:(id)a0 completion:(id /* block */)a1;
+ (void)builtInSharingServicesOnQueueForItems:(id)a0 completion:(id /* block */)a1;
+ (id)builtinActivityClasses;
+ (id)builtinCollaborationActivityClasses;
+ (id)collaborationSharingServicesForItems:(id)a0;
+ (void)collaborationSharingServicesForItems:(id)a0 completion:(id /* block */)a1;
+ (void)collaborationSharingServicesOnQueueForItems:(id)a0 completion:(id /* block */)a1;

@end
