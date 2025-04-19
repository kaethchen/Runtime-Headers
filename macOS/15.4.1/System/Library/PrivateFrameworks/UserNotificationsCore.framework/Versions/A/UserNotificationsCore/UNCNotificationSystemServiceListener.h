@class NSMutableArray, NSString, BSServiceConnectionListener, NSObject;
@protocol UNCNotificationSystemServiceListenerDelegate, OS_dispatch_queue;

@interface UNCNotificationSystemServiceListener : NSObject <BSServiceConnectionListenerDelegate, UNCNotificationSystemServiceConnectionDelegate> {
    id<UNCNotificationSystemServiceListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_queue_listener;
    NSMutableArray *_queue_connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)activate;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)systemServiceConnectionDidInvalidate:(id)a0;

@end
