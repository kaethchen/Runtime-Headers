@interface SOAgentUtils : NSObject

+ (id)_bundleForPid:(int)a0;
+ (id)_localizedNameForBundle:(id)a0;
+ (id)_localizedNameForPath:(id)a0;
+ (id)_localizedNameFromInfoDict:(id)a0 path:(id)a1;
+ (id)_pathForPid:(int)a0;
+ (id)bundleIdentiferForXPCConnection:(id)a0;
+ (BOOL)isAppManagedWithPID:(int)a0 bundleIdentifier:(id)a1;
+ (id)localizedAppNameWithPID:(int)a0;

@end
