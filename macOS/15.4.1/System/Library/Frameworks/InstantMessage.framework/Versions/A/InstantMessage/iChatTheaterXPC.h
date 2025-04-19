@class NSObject;
@protocol OS_xpc_object;

@interface iChatTheaterXPC : NSObject {
    unsigned long long _connectionCount;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_currentPeer;
}

+ (id)sharedInstance;

- (void)addConnection;
- (void)connectionUpdated:(id)a0 forName:(id)a1;
- (id)currentPeerConnection;
- (void)removeConnection;
- (void)requestConnectionForName:(id)a0;

@end
