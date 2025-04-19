@class EDMessageAuthenticationStateMigrator, NSString, EDMessagePersistence, EDCategoryMigrator, EDMessageCategorizer, NSConditionLock, EDMessageAuthenticator, NSObject, EDCategoryPersistence;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDMessageAuthenticationAndCategoryMigrator : NSObject <EFLoggable, EFContentProtectionObserver>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (readonly, nonatomic) EDMessageCategorizer *categorizer;
@property (readonly, nonatomic) EDMessageAuthenticator *authenticator;
@property (readonly, nonatomic) EDMessageAuthenticationStateMigrator *authenticationStateMigrator;
@property (readonly, nonatomic) EDCategoryMigrator *categoryMigrator;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundMessageMigrationQueue;
@property (readonly, nonatomic) NSConditionLock *contentProtectionState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (nonatomic) long long reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (BOOL)_checkContentProtectionState;
- (id)_reasonString;
- (id)initWithCategoryPersistence:(id)a0 categorizer:(id)a1 authenticator:(id)a2 messagePersistence:(id)a3 activityPersistence:(id)a4 reason:(long long)a5;
- (void)startMigrationIfNecessaryWithCategorizationQuery:(id)a0 cancelationToken:(id)a1 completion:(id /* block */)a2;
- (void)startMigrationWithProgressHandler:(id /* block */)a0 cancelationToken:(id)a1 completion:(id /* block */)a2;

@end
