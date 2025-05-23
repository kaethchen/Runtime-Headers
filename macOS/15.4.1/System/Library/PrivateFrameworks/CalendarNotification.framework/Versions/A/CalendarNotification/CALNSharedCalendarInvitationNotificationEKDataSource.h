@class NSString;
@protocol CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, EKNotificationPreferences, CALNDataAccessExpressConnection, EKEventStoreProvider;

@interface CALNSharedCalendarInvitationNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly, nonatomic) id<CALNDataAccessExpressConnection> dataAccessExpressConnection;
@property (readonly, nonatomic) id<EKNotificationPreferences> preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)a0;
- (id)_notificationInfoFromNotificationReference:(id)a0;
- (void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)a0;
- (void)declineSharedCalendarWithSourceClientIdentifier:(id)a0;
- (id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)a0;
- (id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)a0;
- (id)fetchSharedCalendarInvitationNotifications;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2 dataAccessExpressConnection:(id)a3 preferences:(id)a4;
- (void)joinSharedCalendarWithSourceClientIdentifier:(id)a0;
- (void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)a0;

@end
