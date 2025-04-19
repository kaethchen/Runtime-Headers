@class EKCalendar, NSString, EKEventStore, NSURL, DAAccount;
@protocol DAPubCalDaemonAccount;

@interface DADClientPublishedCalendarDelegate : DADClientDelegate <DAPubCalDaemonAccountOperationDelegate> {
    NSString *_calendarUUID;
    DAAccount<DAPubCalDaemonAccount> *_daemonAccount;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
    NSURL *_oldURLForMovedCalendar;
    id /* block */ _operationCompletionBlock;
    BOOL _canceled;
}

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSString *calendarName;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)publish;
- (void)cancel;
- (void)unpublish;
- (void)finishWithError:(id)a0;
- (id)eventStore;
- (void)move;
- (void)addStandardRequestAttributesAndError:(id)a0 toRequestAttributes:(id)a1;
- (void)continueMove:(BOOL)a0;
- (void)forceReloadAgents;
- (id)initWithCalendarUUID:(id)a0 client:(id)a1;
- (id)lookupDaemonAccountCreateIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)publishOperationFinishedWithError:(id)a0;
- (void)publishOperationProgressedTo:(unsigned long long)a0 totalUnits:(unsigned long long)a1;
- (void)publishOrMove:(BOOL)a0;
- (void)publishWithFallbackHandler:(id /* block */)a0;
- (void)removeAccountAfterSuccessfulUnpublish;
- (void)reportMoveFailedUnpublishWithError:(id)a0;

@end
