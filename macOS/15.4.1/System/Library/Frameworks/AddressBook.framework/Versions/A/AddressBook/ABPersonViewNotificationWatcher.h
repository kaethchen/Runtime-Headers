@class ABCardViewNotificationHandler;

@interface ABPersonViewNotificationWatcher : NSObject {
    ABCardViewNotificationHandler *_cardViewNotificationHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addressBookChangedExternally:(id)a0;
- (void)registerForExternalNotifications;
- (void)removeNotificationObservers;
- (id)initWithCardViewNotificationHandler:(id)a0;
- (void)managedObjectContextObjectsDidChange:(id)a0;
- (void)registerForLocalNotificationsWithAddressBook:(id)a0;
- (void)registerForNotificationsWithAddressBook:(id)a0;

@end
