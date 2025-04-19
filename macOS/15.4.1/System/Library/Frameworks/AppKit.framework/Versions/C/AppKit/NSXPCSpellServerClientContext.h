@class NSString, NSXPCSpellServerClient, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface NSXPCSpellServerClientContext : NSObject {
    NSXPCSpellServerClient *_client;
    NSString *_messageName;
    NSObject<OS_dispatch_semaphore> *_waiter;
    NSError *_error;
    BOOL _hasProxy;
    BOOL _incrementIndexOnTimeout;
    BOOL _isPostEditing;
}

+ (void)signalWaiter:(id)a0;

- (void)dealloc;
- (id)error;
- (void)finish;
- (id)client;
- (id)initWithClient:(id)a0 messageName:(id)a1 waitForReply:(BOOL)a2 incrementIndexOnTimeout:(BOOL)a3 isPostEditing:(BOOL)a4;
- (id)messageName;
- (id)proxy;
- (id)waiter;

@end
