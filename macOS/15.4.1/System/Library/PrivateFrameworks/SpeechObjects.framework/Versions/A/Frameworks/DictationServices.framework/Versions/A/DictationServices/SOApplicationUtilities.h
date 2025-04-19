@interface SOApplicationUtilities : NSObject

+ (id)runningApplications;
+ (id)_applicationsInDirectoryAtPath:(id)a0;
+ (BOOL)_addRunningApplicationsToTable:(id)a0;
+ (void)addApplicationWithURL:(id)a0;
+ (void)flushTargetApplicationCache;
+ (id)installedApplications;
+ (id)nGramsFromAppNameString:(id)a0 localeIdentifier:(id)a1;
+ (void)removeApplicationWithPID:(int)a0;
+ (id)targetApplications;
+ (id)targetApplicationsForcingSyncWithDisk:(BOOL)a0;

@end
