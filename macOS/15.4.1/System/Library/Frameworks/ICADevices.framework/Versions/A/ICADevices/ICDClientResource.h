@class NSString, NSMutableDictionary, NSXPCConnection, NSNumber;

@interface ICDClientResource : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceLock;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *notifications;
@property (copy) NSString *name;
@property int pid;
@property BOOL openSession;
@property (copy) NSNumber *transactionID;
@property (copy) NSNumber *callbackInfo;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void)lock;
- (void)unlock;
- (id)interestedProcsForNotification:(id)a0;
- (void)addNotifications:(id)a0 forProc:(id)a1;
- (void)cleanupConnection;
- (void)remNotifications:(id)a0 forProc:(id)a1;

@end
