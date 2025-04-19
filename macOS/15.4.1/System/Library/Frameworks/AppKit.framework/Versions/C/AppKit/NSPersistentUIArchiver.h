@class NSString, NSKeyedArchiver, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface NSPersistentUIArchiver : NSCoder <NSKeyedArchiverDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSKeyedArchiver *_archiver;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_securityScopedBookmarks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowsKeyedCoding;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeDataObject:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (BOOL)requiresSecureCoding;
- (long long)versionForClassName:(id)a0;
- (void)finishEncodingWithCompletionHandler:(id /* block */)a0;
- (id)initWithQueue:(id)a0 requireSecureCoding:(BOOL)a1;

@end
