@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    long long _flags;
}

@property unsigned long long resultType;
@property (readonly, copy) NSFetchRequest *fetchRequest;

+ (id)decodeFromXPCArchive:(id)a0 withContext:(id)a1 withPolicy:(id)a2;

- (void)dealloc;
- (id)description;
- (id)initWithFetchRequest:(id)a0;
- (void)_resolveEntityWithContext:(id)a0;
- (BOOL)_secureOperation;
- (void)_setSecureOperation:(BOOL)a0;
- (id)encodeForXPC;
- (id)initWithObjectIDs:(id)a0;
- (unsigned long long)requestType;
- (void)setShouldPerformSecureOperation:(BOOL)a0;
- (BOOL)shouldPerformSecureOperation;

@end
