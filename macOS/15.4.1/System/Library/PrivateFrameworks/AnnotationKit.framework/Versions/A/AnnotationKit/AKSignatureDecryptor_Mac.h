@interface AKSignatureDecryptor_Mac : NSObject {
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;

- (id)init;
- (void)initializeKey;
- (id)decryptedData:(id)a0;

@end
