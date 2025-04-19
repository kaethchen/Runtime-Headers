@class NSObject, NSXPCConnection;
@protocol QLDaemonProxyProtocol;

@interface QLDaemonProxy : NSObject {
    NSXPCConnection *_connection;
    NSObject<QLDaemonProxyProtocol> *_proxy;
}

+ (id)sharedInstance;
+ (id)interface;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;

@end
