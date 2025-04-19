@class NSString, NSPointerArray, ACAccount, NSObject, AMSObservable;
@protocol OS_dispatch_queue;

@interface AMSAccountsChangedObservable : NSObject

@property (class, readonly) NSPointerArray *createdObservables;
@property (class, readonly) NSObject<OS_dispatch_queue> *createdObservablesAccessQueue;
@property (class, readonly) AMSAccountsChangedObservable *sharedInstance;
@property (class, readonly) AMSAccountsChangedObservable *sharedLocalAccountInstance;

@property (retain) AMSObservable *observable;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } notificationsLock;
@property (readonly) ACAccount *account;
@property (readonly) NSString *accountTypeIdentifier;

+ (void)_processChangedAccount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)_accountStoreDidChange:(id)a0;
- (void)subscribe:(id)a0;
- (id)_initWithAccount:(id)a0 accountTypeIdentifier:(id)a1;
- (void)_processChangedAccount:(id)a0;
- (BOOL)_shouldNotifyObserversForChangedAccount:(id)a0;
- (id)initWithAccountTypeIdentifier:(id)a0;
- (void)unsubscribe:(id)a0;

@end
