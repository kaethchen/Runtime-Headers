@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
