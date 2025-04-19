@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
