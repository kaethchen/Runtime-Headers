@interface MUPayloadEncryption : NSObject {
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;

- (id)init;
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (void)initializeKey;

@end
