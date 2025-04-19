@class NSXPCListener, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDBackgroundMessagingAPIListener : NSObject <NSXPCListenerDelegate, IMDBackgroundMessagingAPITargetHandlerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activeConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedListener;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)isConnectionEntitled:(id)a0;
- (void)connectionClosed:(int)a0;
- (void)handleSMSSendResult:(id)a0 sent:(BOOL)a1;

@end
