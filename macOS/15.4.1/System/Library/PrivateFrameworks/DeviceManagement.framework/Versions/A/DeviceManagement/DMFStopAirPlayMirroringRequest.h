@interface DMFStopAirPlayMirroringRequest : DMFTaskRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
