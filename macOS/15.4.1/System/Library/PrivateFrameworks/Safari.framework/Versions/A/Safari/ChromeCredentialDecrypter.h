@class NSString, NSData;

@interface ChromeCredentialDecrypter : NSObject {
    NSData *_rawKey;
    NSData *_version;
    NSData *_chromeSaltKey;
}

@property (readonly, nonatomic) BOOL isSafeStorageKeyCorrect;
@property (copy, nonatomic) NSString *safeStorageKey;

- (id)init;
- (void).cxx_destruct;
- (id)_dataByDecryptingData:(id)a0 rawKey:(id)a1 initializationVector:(id)a2;
- (id)_rawKeyWithSafeStorageKey:(id)a0;
- (id)credentialByDecryptingChromeCredential:(id)a0;

@end
