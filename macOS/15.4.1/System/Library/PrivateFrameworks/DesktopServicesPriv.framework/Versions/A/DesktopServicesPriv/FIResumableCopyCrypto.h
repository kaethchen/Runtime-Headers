@class NSData;

@interface FIResumableCopyCrypto : NSObject {
    NSData *_cachedKey;
}

@property (retain, nonatomic) NSData *keyData;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)readKey;
- (id)createKey;
- (id)decryptData:(id)a0;
- (BOOL)deleteKey;
- (id)encryptData:(id)a0;
- (id)roundTrip:(id)a0;
- (id)sharedKeyDict;
- (BOOL)storeKey:(id)a0;

@end
