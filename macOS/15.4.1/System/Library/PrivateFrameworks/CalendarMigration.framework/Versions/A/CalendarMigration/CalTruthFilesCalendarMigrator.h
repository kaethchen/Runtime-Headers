@class NSString;
@protocol CalMigrationAccountStore, CalCalendarDataContainerProvider, CalBookmarkMigrator, CalMigrationKeychain, CalContactsProviderProtocol, CalCalendarMigrationFailureRecorder, CalCalendarMigrationDefaultsProvider;

@interface CalTruthFilesCalendarMigrator : NSObject <CalCalendarMigrator>

@property (readonly, nonatomic) id<CalCalendarMigrationDefaultsProvider> defaultsProvider;
@property (readonly, nonatomic) id<CalCalendarMigrationFailureRecorder> failureRecorder;
@property (readonly, nonatomic) id<CalMigrationAccountStore> accountStore;
@property (readonly, nonatomic) id<CalMigrationKeychain> keychain;
@property (readonly, nonatomic) id<CalContactsProviderProtocol> contactsProvider;
@property (readonly, nonatomic) id<CalCalendarDataContainerProvider> calendarDataContainerProvider;
@property (readonly, nonatomic) id<CalBookmarkMigrator> bookmarkMigrator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_accountTypeForExtension:(id)a0;
+ (void *)_attemptAccountCreationForDirectory:(id)a0 withContext:(id)a1 inPass:(unsigned long long)a2 accountType:(int *)a3 principalUid:(id *)a4 accountIdentifier:(id *)a5 ownerPrincipalUid:(id *)a6 shouldMigrateData:(BOOL *)a7;
+ (void *)_attemptAccountMigrationForDirectory:(id)a0 withContext:(id)a1 shouldMigrateData:(BOOL *)a2 inPass:(unsigned long long)a3 principalUid:(id *)a4 accountTypeOut:(int *)a5 migrationPrincipal:(id *)a6;
+ (void)_attemptCalendarMigrationForDirectory:(id)a0 withContext:(id)a1 storeForAccount:(void *)a2 ownerPrincipalUid:(id)a3 accountInfo:(id)a4;
+ (BOOL)_attemptGroupMigrationForDirectory:(id)a0 withContext:(id)a1;
+ (BOOL)_attemptLocalCalendarMigrationForDirectory:(id)a0 withContext:(id)a1;
+ (BOOL)_attemptMigrationForAccountInDirectory:(id)a0 withContext:(id)a1 inPass:(unsigned long long)a2;
+ (id)_calDAVPrincipalFromAccountPlistDictionary:(id)a0;
+ (id)_calendarUserAddressesFromAccountPlistDictionary:(id)a0 rootKey:(id)a1 addressKey:(id)a2 preferredKey:(id)a3;
+ (void)_deleteItems:(id)a0 withContext:(id)a1;
+ (id)_exchangePrincipalFromAccountPlistDictionary:(id)a0;
+ (BOOL)_importAlarmsIntoStore:(void *)a0 withPlistDictionary:(id)a1 fromDirectory:(id)a2 withContext:(id)a3 syncDefaultAlarms:(BOOL)a4;
+ (void)_importDirectoryAsCalendar:(id)a0 withPlistDictionary:(id)a1 context:(id)a2 storeForAccount:(void *)a3 ownerPrincipalUid:(id)a4 accountInfo:(id)a5;
+ (void)_importICSEventsInCalendarDirectory:(id)a0 inCalendar:(void *)a1 withContext:(id)a2 accountInfo:(id)a3;
+ (BOOL)_isCalDAVSubscribedCalendarWithNoEventsInDirectory:(id)a0 withPlistDictionary:(id)a1 isExchangeDirectory:(BOOL)a2 context:(id)a3;
+ (BOOL)_isDirectoryNaturalLanguageSuggestedEventsWithPlistDictionary:(id)a0;
+ (BOOL)_isDirectorySuggestedEventsWithPlistDictionary:(id)a0;
+ (void)_migrateCalendarsInAccountDirectory:(id)a0 withContext:(id)a1 storeForAccount:(void *)a2 ownerPrincipalUid:(id)a3 accountInfo:(id)a4;
+ (void)_migrateDefaultCalendarWithContext:(id)a0;
+ (void)_migrateHolidayCalendarWithContext:(id)a0;
+ (void)_migrateInboxInDirectory:(id)a0 withContext:(id)a1 store:(void *)a2 principal:(id)a3;
+ (void)_migrateLegacyDefaultsWithContext:(id)a0;
+ (void)_migrateNotificationsInDirectory:(id)a0 withContext:(id)a1 store:(void *)a2 principal:(id)a3;
+ (id)_preferredCalendarUserAddressesFromAccountPlistDictionary:(id)a0;
+ (id)_preferredOwnerUserAddressesFromAccountPlistDictionary:(id)a0;
+ (id)_publicationInfoFromCalendarPlistDictionary:(id)a0 forCalendarUUID:(id)a1 inDirectory:(id)a2 withContext:(id)a3;
+ (void)_removeKeychainEntriesAfterMigrationWithContext:(id)a0;
+ (BOOL)_removeTruthFilesAfterMigrationFromCalendarDirectory:(id)a0 withContext:(id)a1 deleteBackup:(BOOL)a2;
+ (BOOL)_shouldImportDirectoryAsCalendar:(id)a0 withContext:(id)a1 isBirthdayCalendar:(BOOL *)a2 plistDictionary:(id *)a3;
+ (id)_subscriptionInfoFromCalendarPlistDictionary:(id)a0 inDirectory:(id)a1 withContext:(id)a2;

- (void).cxx_destruct;
- (id)initWithDefaultsProvider:(id)a0 failureRecorder:(id)a1 accountStore:(id)a2 keychain:(id)a3 contactsProvider:(id)a4 calendarDataContainerProvider:(id)a5 bookmarkMigrator:(id)a6;
- (BOOL)_performMigrationInCalendarDirectory:(id)a0 withContext:(id)a1;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0 intoDestinationCalendarDirectory:(id)a1;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0 intoDestinationCalendarDirectory:(id)a1 withCancellationToken:(id)a2;
- (BOOL)attemptMigrationWithSourceCalendarDirectory:(id)a0 intoDestinationCalendarDirectory:(id)a1 withCancellationToken:(id)a2;

@end
