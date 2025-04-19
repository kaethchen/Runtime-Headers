@class NSString, NSUUID, NSError, NSMutableArray;

@interface _LSDModificationPendingSaveToken : NSObject <_LSPendingSaveToken> {
    NSMutableArray *_waiters;
    NSUUID *_uuid;
    struct optional<NSError *> { union { char __null_state_; NSError *__val_; } ; BOOL __engaged_; } _saveError;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _mutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithUUID:(id)a0;
- (void)saveDidHappen:(BOOL)a0 error:(id)a1;
- (void)waitForResult:(id /* block */)a0;

@end
