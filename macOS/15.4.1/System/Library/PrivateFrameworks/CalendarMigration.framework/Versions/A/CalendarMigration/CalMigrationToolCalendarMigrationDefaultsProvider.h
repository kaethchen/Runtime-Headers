@class NSString, CalMigrationToolOptions;
@protocol CalCalendarMigrationDefaultsProvider;

@interface CalMigrationToolCalendarMigrationDefaultsProvider : NSObject <CalCalendarMigrationDefaultsProvider>

@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions;
@property (readonly, nonatomic) id<CalCalendarMigrationDefaultsProvider> defaultProvider;
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly, nonatomic) BOOL isHolidayCalendarEnabled;
@property (readonly, nonatomic) NSString *defaultCalendarUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (void)clearLegacyDefaults;
- (id)initWithToolOptions:(id)a0 defaultProvider:(id)a1;
- (void)migrateLegacyDefaults;
- (BOOL)needsMigrationCleanupWithDestinationDirectory:(id)a0;
- (void)recordMigrationDidBeginWithDestinationDirectory:(id)a0;
- (void)recordMigrationDidEndWithReason:(unsigned long long)a0;
- (void)setDefaultCalendarExternalIDOrUUID:(id)a0 storeID:(int)a1;
- (void)setDefaultTimedAlarmOffset:(id)a0;
- (BOOL)shouldPerformMigrationWithDestinationDirectory:(id)a0;

@end
