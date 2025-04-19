@class POTokenHelper, NSString, NSXPCConnection;
@protocol POUserIdentifierProvider;

@interface PODaemonCoreProcess : NSObject <PODaemonCoreProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property BOOL baseSystem;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *prebootKey;
@property (retain) POTokenHelper *tokenHelper;
@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;
@property (retain) NSString *volumeUUID;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)createPrebootKey:(struct __SecKey **)a0 encryptedKey:(id *)a1 error:(id *)a2;
+ (id)encryptDataForPreboot:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
+ (id)decryptDataForPreboot:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)_defaultConfigurationPath;
- (void)loadPrebootKeys;
- (id)_deviceConfigurationForIdentifer:(id)a0;
- (id)_loginConfigurationForIdentifer:(id)a0;
- (BOOL)_removeStashedUserLoginStateListDataWithError:(id *)a0;
- (BOOL)_savePendingSSOTokensData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_saveStashedDecryptionContextData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_saveStashedSSOTokensData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_saveUserLoginStateList:(id)a0 error:(id *)a1;
- (id)_stashedDecryptionContextForIdentifer:(id)a0 error:(id *)a1;
- (id)_stashedUserLoginStateListWithError:(id *)a0;
- (id)_userConfigurationForIdentifier:(id)a0 error:(id *)a1;
- (id)_userLoginStateListWithError:(id *)a0;
- (void)deviceConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)handleStartup;
- (id)initForBaseSystem:(BOOL)a0;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (void)loginConfigurationForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)retrievePendingSSOTokenForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)retrieveStashedDecryptionContextForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)retrieveStashedSSOTokenForIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)saveCachedContextsToDiskWithCompletion:(id /* block */)a0;
- (void)savePendingSSOTokens:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveStashedDecryptionContext:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)saveStashedSSOTokens:(id)a0 identifer:(id)a1 completion:(id /* block */)a2;
- (void)updateLoginStateForIdentifier:(id)a0 state:(id)a1 loginDate:(id)a2 loginType:(id)a3 completion:(id /* block */)a4;
- (void)useVolume:(id)a0 completion:(id /* block */)a1;
- (void)userConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)userLoginStateForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)writeData:(id)a0 toPath:(id)a1 saveError:(id *)a2;
- (id)_prebootVolumeConfigurationPath;
- (id)_dataForUserLoginStateList:(id)a0 error:(id *)a1;
- (id)_parseUserLoginStateListData:(id)a0 error:(id *)a1;
- (id)_pendingSSOTokensForIdentifer:(id)a0 error:(id *)a1;
- (void)_saveCachedContextsToDiskWithCompletion:(id /* block */)a0;
- (id)_stashedSSOTokensForIdentifer:(id)a0 error:(id *)a1;
- (id)_stashedUserLoginStateListDataWithError:(id *)a0;
- (id)_userLoginStateForIdentifier:(id)a0 error:(id *)a1;
- (id)_userLoginStateListDataWithError:(id *)a0;
- (id)_volumeConfigurationPathForVolumeUUID:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPrebootKeysForVolumeUUID:(id)a0;
- (id)initWithXPCConnection:(id)a0 baseSystem:(BOOL)a1;
- (void)loadKeybagForSystemVolume:(id)a0;

@end
