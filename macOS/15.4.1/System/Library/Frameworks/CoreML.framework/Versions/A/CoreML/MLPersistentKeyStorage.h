@interface MLPersistentKeyStorage : NSObject

+ (id)persistentKeyStorageURL;
+ (id)retrieveKeyBlobForKeyIdentifier:(id)a0;
+ (BOOL)storeKeyBlob:(id)a0 forKeyIdentifier:(id)a1 error:(id *)a2;
+ (id)syncQueue;

@end
