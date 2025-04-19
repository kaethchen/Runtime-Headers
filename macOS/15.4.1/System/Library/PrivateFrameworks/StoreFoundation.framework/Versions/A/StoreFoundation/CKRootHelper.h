@class NSLock, NSXPCConnection;

@interface CKRootHelper : NSObject {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (id)proxy;

@end
