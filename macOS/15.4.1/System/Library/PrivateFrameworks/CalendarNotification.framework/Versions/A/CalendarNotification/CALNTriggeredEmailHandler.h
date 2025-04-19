@protocol EKEventStoreProvider, CALNAlarmEngineMonitor, CALNEmailSender;

@interface CALNTriggeredEmailHandler : NSObject

@property (readonly, nonatomic) id<EKEventStoreProvider> storeProvider;
@property (readonly, nonatomic) id<CALNAlarmEngineMonitor> alarmEngineMonitor;
@property (readonly, nonatomic) id<CALNEmailSender> emailSender;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sendEmailForAlert:(id)a0 emailAddress:(id)a1;
- (void)_alertsFired:(id)a0;
- (id)_bodyWithEventTitle:(id)a0 eventStartDate:(id)a1 isAllDay:(BOOL)a2;
- (id)_subjectWithEventTitle:(id)a0;
- (id)fetchEmailAddressWithAlarmExternalID:(id)a0 databaseID:(int)a1;
- (id)initWithEventStoreProvider:(id)a0 alarmEngineMonitor:(id)a1 emailSender:(id)a2;

@end
