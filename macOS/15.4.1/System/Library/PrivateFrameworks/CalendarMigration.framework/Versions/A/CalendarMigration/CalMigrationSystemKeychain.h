@class NSString;

@interface CalMigrationSystemKeychain : NSObject <CalMigrationKeychain>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadKeychainInformationsForURL:(id)a0;
- (id)_computeOtherPossibleLookupPathsForPath:(id)a0;
- (BOOL)_deleteSecItemKeychainEntry:(id)a0 error:(id *)a1;
- (void)_deleteURLCredentialStorageEntry:(id)a0;
- (id)_urlCredentialStorageKeychainEntryForURL:(id)a0;
- (BOOL)deleteEntry:(id)a0 error:(id *)a1;
- (id)keychainEntryForURL:(id)a0;
- (id)loadKeychainInformationsForURL:(id)a0 realm:(id)a1;
- (id)loadKeychainInformationsForURL:(id)a0 realm:(id)a1 login:(id *)a2;
- (id)loadOldKeychainForURL:(id)a0;
- (struct __CFDictionary { } *)newDictionaryForGenericPasswordWithAccount:(id)a0 service:(id)a1;
- (struct __CFDictionary { } *)newDictionaryForInternetPasswordWithAccount:(id)a0 protocol:(void *)a1 server:(id)a2 port:(id)a3 path:(id)a4;
- (struct __CFDictionary { } *)newDictionaryForURL:(id)a0 realm:(id)a1;
- (struct __CFDictionary { } *)newDictionaryForURL:(id)a0 realm:(id)a1 backupDictionaries:(id *)a2;
- (void *)protocolForScheme:(id)a0;

@end
