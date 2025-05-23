@class RBSAssertionIdentifier, NSString, NSArray, NSHashTable, RBSAssertionDescriptor, RBSTarget;
@protocol RBSServiceLocalProtocol;

@interface RBSAssertion : NSObject {
    NSHashTable *_observers;
    id /* block */ _invalidationHandler;
    id /* block */ _warningHandler;
    RBSAssertionDescriptor *_descriptor;
    id<RBSServiceLocalProtocol> _service;
    unsigned long long _state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
}

@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (readonly, copy, nonatomic) RBSAssertionDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) RBSTarget *target;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (oneway void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (BOOL)acquireWithError:(out id *)a0;
- (id)initWithExplanation:(id)a0 target:(id)a1 attributes:(id)a2;
- (BOOL)invalidateWithError:(out id *)a0;
- (oneway void)acquireWithInvalidationHandler:(id /* block */)a0;
- (id)_initWithDescriptor:(id)a0 service:(id)a1;
- (id)_initWithServerValidatedDescriptor:(id)a0;
- (id)_initWithServerValidatedDescriptor:(id)a0 service:(id)a1;
- (void)_serverInvalidateWithError:(id)a0;
- (BOOL)invalidateSyncWithError:(out id *)a0;
- (void)setExpirationWarningHandler:(id /* block */)a0;

@end
