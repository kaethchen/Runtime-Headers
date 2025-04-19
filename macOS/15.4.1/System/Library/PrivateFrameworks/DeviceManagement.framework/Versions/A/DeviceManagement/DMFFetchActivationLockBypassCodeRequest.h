@interface DMFFetchActivationLockBypassCodeRequest : DMFTaskRequest

+ (Class)allowlistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
