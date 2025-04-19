@class NSString, NSXPCConnection;

@interface LNAppNotificationEventRegistrationProvider : NSObject <LNAppNotificationEventRegistrationProviderInterface>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerForAppNotificationEventsOfBundleIdentifier:(id)a0 entityType:(id)a1 completion:(id /* block */)a2;
- (void)unregisterForAppNotificationEventsOfBundleIdentifier:(id)a0 entityType:(id)a1 completion:(id /* block */)a2;

@end
