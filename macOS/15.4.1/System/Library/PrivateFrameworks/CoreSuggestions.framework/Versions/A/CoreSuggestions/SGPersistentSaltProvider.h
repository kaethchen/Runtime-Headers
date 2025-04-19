@class _PASLock, NSString;

@interface SGPersistentSaltProvider : NSObject {
    _PASLock *_lock;
    NSString *_serviceIdentifier;
    NSString *_accessGroup;
}

+ (id)hexStringForData:(id)a0;
+ (id)saltProviderFromKeyChainWithServiceIdentifier:(id)a0 accessGroup:(id)a1;
+ (id)saltProviderWithString:(id)a0 serviceIdentifier:(id)a1 accessGroup:(id)a2;

- (void).cxx_destruct;
- (id)salt;
- (id)_createSalt;
- (void)_deleteSalt;
- (id)_findExistingSaltError:(out id *)a0;
- (id)_findOrCreateSalt;
- (id)_queryKeychainError:(out id *)a0;
- (id)initWithServiceIdentifier:(id)a0 accessGroup:(id)a1;

@end
