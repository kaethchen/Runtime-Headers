@class NSArray, NSString, NSURL, NSMutableSet;

@interface CalTruthFilesReminderMigrationContext : CalReminderMigrationContext <CalPrivacySafePathProvider> {
    NSMutableSet *_directoriesToDelete;
    NSMutableSet *_filesToDelete;
    NSMutableSet *_accountPlistsToDisableReminders;
    NSMutableSet *_calendarPlistsToDisableReminders;
}

@property (readonly, nonatomic) NSURL *calendarDirectory;
@property (readonly, nonatomic) NSArray *itemsToDelete;
@property (readonly, nonatomic) NSArray *accountPlistsToDisableReminders;
@property (readonly, nonatomic) NSArray *calendarPlistsToDisableReminders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_homeRelativePathForURL:(id)a0 inCalendarDirectory:(id)a1;
+ (void)_removeItemsToDeleteContainedByDirectory:(id)a0 fromSet:(id)a1;
+ (id)reminderMigrationContextWithReminderKitProvider:(id)a0 calendarDirectory:(id)a1;

- (void).cxx_destruct;
- (id)_homeRelativePathForURL:(id)a0;
- (BOOL)_isURLSubpathOfExistingDirectoryToDelete:(id)a0;
- (void)_removeItemsToDeleteContainedByDirectory:(id)a0;
- (void)addAccountPlistToDisableReminders:(id)a0;
- (void)addCalendarPlistToDisableReminders:(id)a0;
- (void)addDirectoryToDelete:(id)a0;
- (void)addFileToDelete:(id)a0;
- (id)privacySafePathForURLInCalendarDirectory:(id)a0;
- (void)recordMigrationFailureWithDescription:(id)a0 inStage:(unsigned long long)a1 underlyingError:(id)a2 relatedToURL:(id)a3;
- (void)recordMigrationFailureWithDescription:(id)a0 inStage:(unsigned long long)a1 underlyingError:(id)a2 relatedToURL:(id)a3 isFatal:(BOOL)a4;
- (BOOL)willFileBeDeleted:(id)a0;

@end
