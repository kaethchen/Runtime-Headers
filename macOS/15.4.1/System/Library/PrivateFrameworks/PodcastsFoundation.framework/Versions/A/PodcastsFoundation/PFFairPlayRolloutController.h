@interface PFFairPlayRolloutController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalQueue;
}

@property (class, nonatomic, readonly) PFFairPlayRolloutController *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)didRollbackStatusChangeWithCompletion:(id /* block */)a0;

@end
