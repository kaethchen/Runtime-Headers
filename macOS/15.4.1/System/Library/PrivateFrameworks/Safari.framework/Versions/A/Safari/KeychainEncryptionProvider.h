@class NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface KeychainEncryptionProvider : NSObject <WBSEncryptionProvider> {
    NSString *_keychainLabel;
    NSData *_encryptionKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (id)_findExistingEncryptionKey;
- (id)_generateEncryptionKey;
- (id)ensureEncryptionKey;
- (id)initWithKeychainLabel:(id)a0;

@end
