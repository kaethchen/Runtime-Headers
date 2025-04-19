@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
