@class NSString;
@protocol CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNDataSourceEventRepresentationProvider, EKNotificationPreferences, EKEventStoreProvider;

@interface CALNEventInvitationResponseNotificationEKDataSource : NSObject <CALNEventInvitationResponseNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly, nonatomic) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly, nonatomic) id<EKNotificationPreferences> preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)a0 inEventStore:(id)a1;
- (void)acceptEventInvitationResponseWithSourceClientIdentifier:(id)a0;
- (void)clearEventInvitationResponseWithSourceClientIdentifier:(id)a0;
- (void)declineEventInvitationResponseWithSourceClientIdentifier:(id)a0;
- (id)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(id)a0;
- (id)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(id)a0;
- (id)fetchEventInvitationResponseNotifications;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2 dataSourceEventRepresentationProvider:(id)a3 preferences:(id)a4;

@end
