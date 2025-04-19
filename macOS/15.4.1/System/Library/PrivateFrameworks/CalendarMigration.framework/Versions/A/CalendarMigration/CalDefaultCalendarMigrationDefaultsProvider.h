@class NSString, NSURL;

@interface CalDefaultCalendarMigrationDefaultsProvider : NSObject <CalCalendarMigrationDefaultsProvider> {
    NSURL *_destinationDirectory;
}

@property (class, readonly, nonatomic) CalDefaultCalendarMigrationDefaultsProvider *sharedInstance;

@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly, nonatomic) BOOL isHolidayCalendarEnabled;
@property (readonly, nonatomic) NSString *defaultCalendarUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_calendarDatabaseFileExistsInDirectory:(id)a0;
+ (void)_createMigrationInProcessSentinelFileInDirectory:(id)a0;
+ (void)_createPreviousMigrationCancelledSentinelFileInDirectory:(id)a0;
+ (id)_databaseFileURLInCalendarDirectory:(id)a0;
+ (id)_defaultDatabaseFileURL;
+ (id)_defaultDestinationDirectory;
+ (void)_deleteMigrationInProgressSentinelFileInDirectory:(id)a0;
+ (void)_deletePreviousMigrationCancelledSentinelFileInDirectory:(id)a0;
+ (BOOL)_migrationInProgressSentinelFileExistsInDirectory:(id)a0;
+ (id)_migrationInProgressSentinelFileInDirectory:(id)a0;
+ (BOOL)_previousMigrationCancelledSentinelFileExistsInDirectory:(id)a0;
+ (id)_previousMigrationCancelledSentinelFileInDirectory:(id)a0;

- (void).cxx_destruct;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (id)_calendarDatabaseFileInDestinationDirectory;
- (void)_clearLastMigrationResultsInCalendarDirectory:(id)a0;
- (void)clearLegacyDefaults;
- (void)migrateLegacyDefaults;
- (BOOL)needsMigrationCleanupWithDestinationDirectory:(id)a0;
- (void)recordMigrationDidBeginWithDestinationDirectory:(id)a0;
- (void)recordMigrationDidEndWithReason:(unsigned long long)a0;
- (void)setDefaultCalendarExternalIDOrUUID:(id)a0 storeID:(int)a1;
- (void)setDefaultTimedAlarmOffset:(id)a0;
- (BOOL)shouldPerformMigrationWithDestinationDirectory:(id)a0;

@end
