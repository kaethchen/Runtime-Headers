@class SUCoreRollbackDescriptor, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreRollback : NSObject <NSSecureCoding, NSCopying> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUCoreRollbackDescriptor *rollback;
@property (readonly, retain, nonatomic) SUCoreRollbackDescriptor *eligibleRollback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (void)loadPersistedStateFile;
- (id)previousRollback;
- (void)rollbackCompleted;

@end
