@class NSString, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface NSPersistentUIRecord : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_keyedState;
    NSMutableArray *_securityScopedBookmarks;
    unsigned char _encryptionKey[16];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *archivedState;
@property (readonly, copy) NSString *persistentID;
@property (readonly, copy) NSArray *securityScopedBookmarks;
@property (readonly) unsigned int windowID;
@property BOOL isCarbonWindow;
@property (readonly) BOOL isFromLSFileListEra;
@property (readonly, getter=isGlobal) BOOL global;
@property (readonly, copy) NSDictionary *keyedState;
@property (readonly) unsigned long long approximateWrittenSize;

+ (void)coalesceRecords:(id)a0;
+ (id)parseOneRecordFromReadBlock:(id /* block */)a0 withDecryptionKeys:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addKeyedState:(id)a0;
- (id)initForDecoding;
- (void)_setKeyedState:(id)a0;
- (id)_keyedStateForKey:(id)a0;
- (void)_setSecurityScopedBookmarks:(id)a0;
- (void)addSecurityScopedBookmarks:(id)a0;
- (struct __CFData { } *)copyData;
- (id)copyStateDecoderRequiringSecureCoding:(BOOL)a0 restorationOptions:(id)a1;
- (void)generateArchiveRequiringSecureCoding:(BOOL)a0 usingBlock:(id /* block */)a1;
- (id)initForEncodingWithIdentifier:(id)a0 windowID:(unsigned int)a1;
- (BOOL)keyPathStateOfClasses:(id)a0 forKey:(id)a1 requireSecureCoding:(BOOL)a2 returningValue:(id *)a3;
- (void)mergeFromRecord:(id)a0;
- (id)openedPushStateUnarchiversRequiringSecureCoding:(BOOL)a0;
- (BOOL)parsePayloadFromData:(void *)a0 length:(unsigned long long)a1;
- (void)setEncodedKeyedState:(id)a0 forKey:(id)a1;
- (void)setEncodedKeyedState:(id)a0 forKey:(id)a1 type:(int)a2;
- (void)setEncryptionKey:(id)a0;

@end
