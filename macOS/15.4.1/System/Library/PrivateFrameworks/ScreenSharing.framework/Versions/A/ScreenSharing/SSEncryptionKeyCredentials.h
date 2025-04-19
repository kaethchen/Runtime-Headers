@class NSData;

@interface SSEncryptionKeyCredentials : SSCredentials

@property (retain) NSData *encryptionKey;

+ (id)preauthorizedCredentialsWithKey:(id)a0;

- (void)dealloc;
- (id)initWithAuthenticationType:(id)a0 withEncryptionKey:(id)a1;

@end
