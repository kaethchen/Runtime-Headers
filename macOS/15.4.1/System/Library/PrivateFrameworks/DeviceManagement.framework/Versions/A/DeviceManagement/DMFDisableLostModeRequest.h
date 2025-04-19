@interface DMFDisableLostModeRequest : DMFTaskRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
