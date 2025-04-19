@class NSString;
@protocol CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNDataSourceEventRepresentationProvider, CALNRemoteMutator, EKEventStoreProvider, EKNotificationPreferences;

@interface CALNEventCanceledNotificationEKDataSource : NSObject <CALNEventCanceledNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly, nonatomic) id<CALNRemoteMutator> remoteMutator;
@property (readonly, nonatomic) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly, nonatomic) id<EKNotificationPreferences> preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fetchEventCanceledNotifications;
- (id)_notificationInfoFromNotification:(id)a0 inEventStore:(id)a1;
- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)a0;
- (void)deleteCanceledEventWithSourceClientIdentifier:(id)a0;
- (id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)a0;
- (id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)a0;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2 remoteMutator:(id)a3 dataSourceEventRepresentationProvider:(id)a4 preferences:(id)a5;

@end
