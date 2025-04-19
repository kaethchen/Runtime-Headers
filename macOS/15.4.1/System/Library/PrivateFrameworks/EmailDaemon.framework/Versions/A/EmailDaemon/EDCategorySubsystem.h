@class EDInteractionLogger, EDPETInteractionEventLog, EDMessagePersistence, NSString, EDCategoryCoreAnalyticsLogger, EDMessageCategorizer, EDMessageAuthenticator, EDBiomeInteractionEventLog, NSObject, EDBusinessPersistence, EDActivityPersistence, EDCategoryPersistence;
@protocol OS_os_log, EDAccountsProvider;

@interface EDCategorySubsystem : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPETInteractionEventLog *petLog;
@property (readonly, nonatomic) EDBiomeInteractionEventLog *biomeLog;
@property (readonly, nonatomic) EDCategoryCoreAnalyticsLogger *coreAnalyticsLogger;
@property (readonly, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger;
@property (readonly, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (readonly, nonatomic) EDBusinessPersistence *businessPersistence;
@property (readonly, nonatomic) EDMessageCategorizer *messageCategorizer;
@property (readonly, nonatomic) EDActivityPersistence *activityPersistence;
@property (readonly, nonatomic) EDMessageAuthenticator *messageAuthenticator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)_registerBiomeETLToCALoggerTask;
- (id)_majorAndMinorVersionFrom:(id)a0;
- (void)_recategorizeAllMessagesIfNecessary;
- (void)_registerCoreAnalyticsLoggerTask;
- (void)_schedulePETSubmissionActivityForLog:(id)a0;
- (id)initWithPersistence:(id)a0 userProfileProvider:(id)a1 vipManager:(id)a2 sourceApplicationBundleIdentifier:(id)a3 categorizationAnalyticsLogger:(id)a4;
- (void)recategorizeAllMessagesIfModelVersionChangedFrom:(id)a0 to:(id)a1;
- (void)registerAuthStateMigrationTask;
- (void)registerBusinessesGroupingTask;
- (void)registerInboxMigrationTasks;
- (void)scheduleRecurringActivity;
- (void)test_tearDown;

@end
