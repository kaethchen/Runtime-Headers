@class NSString, NSXPCListener;

@interface ATXLockScreenNotificationRankerServer : NSObject <ATXLockScreenNotificationRankerProtocol, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)rankNewNotificationIntoNotificationArrays:(id)a0 newNotification:(id)a1 notificationArrayIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)rankNotificationArrays:(id)a0 reply:(id /* block */)a1;

@end
