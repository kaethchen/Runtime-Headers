@class AISSignOutContext, NSError;

@interface AISSignOutController : NSObject {
    void /* unknown type, empty encoding */ listenerEndpoint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)signOutAllAccountsWithContext:(AISSignOutContext *)a0 completion:(void (^)(BOOL, NSError *))a1;

@end
