@interface UAFExpiredAssets : NSObject

+ (void)removeToken:(id)a0;
+ (BOOL)assetsExpired:(id)a0 error:(id *)a1;
+ (id)expiredTokens:(id *)a0;
+ (id)loadToken:(id)a0 error:(id *)a1;
+ (BOOL)markAssetsExpired:(id)a0 error:(id *)a1;
+ (id)tokenDir:(id *)a0;
+ (id)tokenFilename:(id)a0;

@end
