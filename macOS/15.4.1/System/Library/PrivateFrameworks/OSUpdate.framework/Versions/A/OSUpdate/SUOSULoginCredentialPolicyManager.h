@class SUSharedPrefs, SUOSULoginCredentialCacheInfo, SUOSUInstallTonightManager, SUOSUMobileSoftwareUpdateController;

@interface SUOSULoginCredentialPolicyManager : NSObject

@property unsigned long long currentLoginCredentialPolicyMode;
@property (retain) SUOSUMobileSoftwareUpdateController *msuController;
@property (retain) SUOSUInstallTonightManager *installTonightManager;
@property (retain) SUSharedPrefs *sharedPrefs;
@property (retain) SUOSULoginCredentialCacheInfo *cachedInfo;
@property (readonly) unsigned long long cachedMode;
@property double defaultRequiredInterval;
@property double staleUpdateInterval;
@property double staleUpdateRequiredInterval;

- (void).cxx_destruct;
- (BOOL)_allowedToRequireCredentialsForProductKey:(id)a0;
- (void)_isUpdateDownloadedAndPreparedWithCompletion:(id /* block */)a0;
- (unsigned long long)_modeFromCachedInfo:(id)a0;
- (id)_stringForPolicyMode:(unsigned long long)a0;
- (BOOL)_willAutoInstallDescriptor:(id)a0 withProductKey:(id)a1;
- (void)getCurrentLoginCredentialPolicyWithCompletion:(id /* block */)a0;
- (id)initWithSharedPrefs:(id)a0 msuController:(id)a1 installTonightManager:(id)a2;
- (void)refreshCachedMode;

@end
