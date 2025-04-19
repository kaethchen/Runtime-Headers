@interface CPProfileManager : NSObject

+ (void)setMode:(unsigned long long)a0;
+ (id)sharedProfileManager;
+ (unsigned long long)getMode;
+ (id)sharedProfileManager:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithData:(id)a0;
- (id)allProfiles:(id *)a0;
- (id)flushProfileUserData:(id)a0 forUser:(id)a1;
- (id)flushProfileUserData:(id)a0 forUserGUID:(id)a1;
- (id)guidForUser:(id)a0;
- (id)installProfile:(id)a0 forUser:(id)a1;
- (BOOL)isUserAllowed:(id)a0 profile:(id)a1;
- (void)processPluginInstallActions:(id)a0 compositorWatcher:(id)a1 forUser:(id)a2;
- (BOOL)profilesAreInstalled;
- (id)profilesForUser:(id)a0 error:(id *)a1;
- (id)profilesForUserRecord:(id)a0 error:(id *)a1;
- (void)recompositeManagedClient:(id)a0 profileUUID:(id)a1 withUID:(unsigned int)a2 infoDict:(id)a3;
- (id)removeAllProfiles;
- (id)uninstallProfile:(id)a0 forUser:(id)a1 removalPassword:(id)a2;
- (id)uninstallProfile:(id)a0 forUser:(id)a1 removalPassword:(id)a2 ignoringAuth:(BOOL)a3;
- (id)uninstallProfileByIdentifier:(id)a0 forUser:(id)a1 removalPassword:(id)a2;
- (id)uninstallProfileByIdentifier:(id)a0 forUser:(id)a1 removalPassword:(id)a2 ignoringAuth:(BOOL)a3 authData:(id)a4;
- (id)uninstallProfileCore:(id)a0 forUser:(id)a1;

@end
