@class NSArray, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
    id /* block */ _connectionToServer;
    int _notifyToken;
}

@property (class, readonly) TKSmartCardSlotManager *defaultManager;

@property (readonly) NSArray *slotNames;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithServer:(id /* block */)a0;
- (BOOL)setupConnection;
- (void)getSlotWithName:(id)a0 reply:(id /* block */)a1;
- (void)setSlotWithName:(id)a0 endpoint:(id)a1 type:(id)a2 reply:(id /* block */)a3;
- (id)slotNamed:(id)a0;

@end
