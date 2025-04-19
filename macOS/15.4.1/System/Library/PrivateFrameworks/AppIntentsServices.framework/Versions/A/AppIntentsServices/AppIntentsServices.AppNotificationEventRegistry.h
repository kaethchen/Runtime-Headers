@class NSArray, NSError;

@interface AppIntentsServices.AppNotificationEventRegistry : _TtCs12_SwiftObject <LNAppNotificationEventListenerInterface> {
    void /* unknown type, empty encoding */ listener;
}

- (void)sendAppNotificationEvents:(NSArray *)a0 reply:(void (^)(NSError *))a1;

@end
