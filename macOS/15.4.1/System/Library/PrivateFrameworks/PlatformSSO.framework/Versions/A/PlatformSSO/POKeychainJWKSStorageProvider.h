@class NSData, NSString, POKeychainHelper;

@interface POKeychainJWKSStorageProvider : NSObject <POJWKSStorageProvider>

@property (copy) NSData *jwksCache;
@property (retain) POKeychainHelper *keychainHelper;
@property (nonatomic) BOOL isSystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSystem:(BOOL)a0;
- (id)jwksCacheForExtensionIdentifier:(id)a0;
- (void)setJwksCache:(id)a0 forExtensionIdentifier:(id)a1;

@end
