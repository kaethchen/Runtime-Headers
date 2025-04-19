@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

- (void).cxx_destruct;
- (struct __CFDictionary { } *)_copyKeychainQuery;
- (BOOL)_removeTokenFromKeychain;
- (BOOL)deleteToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)retrieveToken;
- (BOOL)storeToken:(id)a0;

@end
