@class RMStoreProfilesAdapter, NSString;

@interface RMStoreProfilesController : NSObject

@property (retain, nonatomic) RMStoreProfilesAdapter *profilesAdapter;
@property (copy, nonatomic) NSString *profileIdentifierPrefix;

+ (id)newProfileControllerWithPrefix:(id)a0 scope:(long long)a1;

- (void).cxx_destruct;
- (void)_installProfileAtPath:(id)a0 store:(id)a1 declaration:(id)a2 completionHandler:(id /* block */)a3;
- (void)_installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)allPrefixedProfileIdentifiers;
- (id)configurationByDeclarationKeyForConfigurations:(id)a0;
- (id)declarationKeyForStore:(id)a0 declaration:(id)a1;
- (void)downloadAndInstallProfileConfiguration:(id)a0 fromURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)downloadAndInstallProfileDeclaration:(id)a0 store:(id)a1 fromURL:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithProfileIdentifierPrefix:(id)a0;
- (id)initWithProfileIdentifierPrefix:(id)a0 scope:(long long)a1;
- (id)initWithProfilesAdapter:(id)a0 profileIdentifierPrefix:(id)a1;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)installedProfileIdentifiers;
- (id)profileIdentifierForConfiguration:(id)a0;
- (id)profileIdentifierForDeclaration:(id)a0 store:(id)a1;
- (id)profileNameForProfileIdentifier:(id)a0;
- (void)uninstallProfileWithIdentifier:(id)a0 store:(id)a1 completionHandler:(id /* block */)a2;

@end
