@class NSString, NSDictionary, NSData, NSObject;
@protocol OS_os_log;

@interface PFClientSideEncryptionManager : NSObject {
    NSString *_keychainAccessGroup;
    NSString *_keychainApplicationLabel;
    NSString *_keychainViewHint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    NSData *_keyData;
    NSDictionary *_keyMetadata;
    NSObject<OS_os_log> *_logHandle;
}

- (void).cxx_destruct;
- (void)start;
- (id)initWithProfile:(id)a0;
- (void)archiveDirectoryAtURL:(id)a0 toOutputURL:(id)a1 dataType:(long long)a2 options:(id)a3 entryPredicate:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)shutdownWithCompletionHandler:(id /* block */)a0;
- (BOOL)unarchiveDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)_getKeyData;
- (BOOL)archiveFileAtURL:(id)a0 outputFileURL:(id)a1 error:(id *)a2;
- (id)configurationForProfile:(id)a0;
- (BOOL)createKeychainEntryReturningKeyData:(id *)a0 keyInfo:(id *)a1;
- (BOOL)findExistingKeychainEntryReturningKeyData:(id *)a0 keyInfo:(id *)a1;
- (BOOL)unarchiveFileAtURL:(id)a0 outputFileURL:(id)a1 error:(id *)a2;

@end
