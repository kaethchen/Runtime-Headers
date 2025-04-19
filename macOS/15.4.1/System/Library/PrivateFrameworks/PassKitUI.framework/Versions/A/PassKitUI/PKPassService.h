@class NSLock, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PKPassService : NSObject {
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSLock *_xpcConnectionLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_dispatchQueue;
- (id)_xpcConnection;
- (BOOL)passbookUbiquityContainerExists;
- (void)setPass:(id)a0 toUbiquitous:(BOOL)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)ubiquitousPassHashForFilename:(id)a0;

@end
