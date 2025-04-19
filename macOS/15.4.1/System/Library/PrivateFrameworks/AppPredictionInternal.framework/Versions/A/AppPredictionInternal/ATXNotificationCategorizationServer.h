@class NSString, NSXPCListener, _PASLazyResult;

@interface ATXNotificationCategorizationServer : NSObject <NSXPCListenerDelegate, ATXNotificationCategorizationXPCInterface> {
    NSXPCListener *_listener;
    _PASLazyResult *_featuresCorrelator;
    _PASLazyResult *_notificationSenderImportanceModel;
    _PASLazyResult *_mailSenderImportanceModel;
    _PASLazyResult *_messageSenderImportanceModel;
    _PASLazyResult *_contactStore;
    _PASLazyResult *_contactRelationships;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)collectCoreAnalyticsJsonForNotification:(id)a0 completion:(id /* block */)a1;
- (void)collectDynamicBreakthroughFeaturesForNotification:(id)a0 completion:(id /* block */)a1;
- (void)fetchContextForMailWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchContextForMessageWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchContextForNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)rankUserNotificationWithRequest:(id)a0 completion:(id /* block */)a1;

@end
