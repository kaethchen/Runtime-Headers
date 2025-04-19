@interface ACNotificationRebroadcaster : NSObject

@property (class, readonly) ACNotificationRebroadcaster *sharedRebroadcaster;

- (void)dealloc;
- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)_endObservingAccountStoreDidChangeNotifications;

@end
