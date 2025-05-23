@class NSData, NSString, NSURL, NSArray, NSDate, REMObjectID, NSDictionary, NSDateComponents, NSNumber;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (readonly, nonatomic) BOOL newAppShouldTakeoverEKReminderNotifications;
@property (readonly, nonatomic) BOOL dataaccessDaemonStopSyncingReminders;
@property (readonly, nonatomic) BOOL siriShouldRouteIntentsToNewRemindersApp;
@property (nonatomic) BOOL databaseMigrationTestModeEnabled;
@property (nonatomic) BOOL isDatabaseMigrated;
@property (nonatomic) BOOL databaseMigrationTimedOut;
@property (copy, nonatomic) NSString *lastDatabaseMigrationSystemBuildVersion;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumInvocations;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumFailures;
@property (retain, nonatomic) NSNumber *cloudKitMigrationDelayAfterError;
@property (retain, nonatomic) NSNumber *cloudKitMigrationObserverPollingInterval;
@property (retain, nonatomic) NSNumber *cloudKitMigrationSimulatedError;
@property (retain, nonatomic) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property (nonatomic) BOOL cloudKitMigrationDisableCleanUp;
@property (retain, nonatomic) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
@property (retain, nonatomic) NSArray *acAccountIdentifiersToMigrateInactivatedCalDavData;
@property (retain, nonatomic) NSDate *cloudKitMergeLocalLastDateMaxRetryReached;
@property (retain, nonatomic) NSString *cloudKitMergeLocalLastBuildVersionMaxRetryReached;
@property (retain, nonatomic) NSDate *cloudKitSchemaCatchUpSyncLastSuccessDate;
@property (retain, nonatomic) NSString *cloudKitSchemaCatchUpSyncLastSuccessBuildVersion;
@property (retain, nonatomic) NSNumber *cloudKitSchemaCatchUpSyncSchedulingState;
@property (retain, nonatomic) NSDate *cloudKitSchemaCatchUpSyncLastScheduledDate;
@property (nonatomic) BOOL debugForceSupportCloudKitSchemaCatchUpSyncBackgroundScheduling;
@property (retain, nonatomic) NSNumber *cloudKitMaxNumAlarmIDsInReminderCKRecordDebugOverride;
@property (retain, nonatomic) NSNumber *debugSimulatedCKErrorCode;
@property (copy, nonatomic) NSNumber *spotlightIndexVersion;
@property (copy, nonatomic) NSDate *nextScheduledAlarmDate;
@property (copy, nonatomic) NSDate *lastPresentAlarmDate;
@property (copy, nonatomic) NSData *lastSuggestedAttributesAutoTrainingToken;
@property (copy, nonatomic) NSDate *lastSuggestedAttributesAutoTrainingExecutionDate;
@property (copy, nonatomic) NSDate *lastSyncPoll;
@property (copy, nonatomic) NSDate *lastCloudConfigurationDownload;
@property (copy, nonatomic) NSDate *staledFileAttachmentCleanupLastExecutionDate;
@property (nonatomic) BOOL staledFileAttachmentCleanupContainerDeemedClean;
@property (nonatomic) BOOL extraneousAlarmsCollectorContainerDeemedClean;
@property (copy, nonatomic) NSDate *lastExtraneousAlarmsCollectorExecutionDate;
@property (copy, nonatomic) NSDate *imageDeduplicationLastExecutionDate;
@property (copy, nonatomic) NSArray *imageDeduplicationLegacyAttachmentsMarkedForDeletion;
@property (copy, nonatomic) NSDate *savedImageDeduplicationLastExecutionDate;
@property (copy, nonatomic) NSArray *savedImageDeduplicationLegacyAttachmentsMarkedForDeletion;
@property (copy, nonatomic) NSDate *suggestConversionToGroceryListLastExecutionDate;
@property (copy, nonatomic) NSDate *analyticsActivityLastExecutionDate;
@property (copy, nonatomic) NSDate *batchDeleteExpiredRemindersLastExecutionDate;
@property (copy, nonatomic) NSData *userInteractionsData;
@property (nonatomic) BOOL simulateMAIDAccount;
@property (nonatomic) BOOL showRemindersAsOverdue;
@property (nonatomic) BOOL enableWelcomeScreen;
@property (nonatomic) BOOL forceShowWelcomeScreen;
@property (nonatomic) BOOL forceShowWhatsNewScreen;
@property (nonatomic) BOOL enableInAppDebugMenu;
@property (readonly, nonatomic) BOOL enableAutoGenerateCKPersonIDSalt;
@property (nonatomic) BOOL enableHashingUserIdentifiablesWithPersonIDSalt;
@property (retain, nonatomic) REMObjectID *preferredDefaultListID;
@property (retain, nonatomic) NSURL *preferredDefaultListObjectIDUrl;
@property (copy, nonatomic) NSArray *preferredLocalizations;
@property (retain, nonatomic) NSDateComponents *todayNotificationFireTime;
@property (nonatomic) BOOL disableAlarmEngineDataSourcePrefetching;
@property (nonatomic) BOOL enableAssignmentNotifications;
@property (nonatomic) BOOL enableAutoCompleteReminders;
@property (copy, nonatomic) NSDictionary *suggestedAttributesTrainingOverrides;
@property (copy, nonatomic) NSDictionary *suggestedAttributesHarvestingOverrides;
@property (copy, nonatomic) NSDictionary *muteNotificationForSharedList;
@property (copy, nonatomic) NSDictionary *hideEmptySectionsForGroceryList;
@property (copy, nonatomic) NSData *accountsListCategorizedCountsCache;
@property (copy, nonatomic) NSData *hashtagLabelsInCustomSmartListFilterCache;
@property (nonatomic) BOOL debugSimulateSqliteFull;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfUncompletedReminders;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfLists;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfListsWithCustomBadge;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfCustomSmartLists;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfHashtags;
@property (copy, nonatomic) NSDate *lastViewedNotificationsPermissionWarmingSheetDate;
@property (copy, nonatomic) NSDate *lastDismissedNotificationsPermissionInlineRequestDate;
@property (nonatomic) BOOL groceryTipDismissed;
@property (nonatomic) BOOL hasCreatedGroceryList;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForLocation;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForMessaging;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForCalDAVSharing;
@property (nonatomic) BOOL didShowReminderDeletePrivacyWarning;
@property (nonatomic) BOOL hasSeenGroceryFeedbackSurvey;
@property (nonatomic) BOOL enableGroceryFeedbackSurvey;
@property (retain, nonatomic) NSNumber *remCurrentRuntimeVersionDebuggingOverride;
@property (nonatomic) BOOL forceEligibleForAutoCloudKitMigration;
@property (nonatomic) BOOL forceBasicAAAccountEligibleForCloudKitReminders;
@property (retain, nonatomic) NSDictionary *dataSeparationAppDocumentsURLDebugOverride;
@property (copy, nonatomic) NSDate *lastDataSeparationMigrationDate;
@property (copy, nonatomic) NSDictionary *syncActivityNotificationEngine_accountSignInTime;
@property (nonatomic) BOOL sharedListActivityNotifications_demoMode;
@property (nonatomic) BOOL shouldIncludeRemindersDueTodayInBadgeCount;
@property (nonatomic) BOOL isSpotlightQueryLoggingEnabled;
@property (copy, nonatomic) NSString *trialAssetsDirectoryDebugOverride;
@property (copy, nonatomic) NSDate *automaticSecondaryGroceryLocalesLastModifiedDate;
@property (copy, nonatomic) NSArray *automaticSecondaryGroceryLocales;

+ (id)defaultValues;
+ (id)storageNumberForTodayNotificationTime:(id)a0;
+ (id)todayNotificationFireTimeFromStorageNumber:(id)a0;

- (void).cxx_destruct;
- (id)initWithSuiteName:(id)a0 containerURL:(id)a1;
- (void)setBestKForKNN:(id)a0;
- (id)_pptPreferredDefaultListIDKey;
- (void)deletePreferredDefaultListID;
- (void)deletePreferredDefaultListObjectIDUrl;
- (BOOL)hideEmptySectionsForGroceryList:(id)a0;
- (unsigned long long)muteNotificationOptionsForSharedList:(id)a0;
- (id)observeEnableAssignmentNotificationsWithBlock:(id /* block */)a0;
- (id)observeEnableAutoCompleteRemindersWithBlock:(id /* block */)a0;
- (id)observePreferredDefaultListIDWithBlock:(id /* block */)a0;
- (id)observeShouldIncludeRemindersDueTodayInBadgeCountWithBlock:(id /* block */)a0;
- (id)observeShowRemindersAsOverdueWithBlock:(id /* block */)a0;
- (id)observeTodayNotificationFireTimeWithBlock:(id /* block */)a0;
- (void)ppt_handleInstall;
- (void)ppt_handleRestore;
- (void)removeHideEmptySectionsForGroceryList:(id)a0;
- (void)removeMuteNotificationOptionsForSharedList:(id)a0;
- (void)setCoreBehaviorTrainingParameters:(id)a0;
- (void)setHideEmptySections:(BOOL)a0 forGroceryList:(id)a1;
- (void)setMuteNotificationOptions:(unsigned long long)a0 forSharedList:(id)a1;
- (BOOL)showRemindersAsOverdueWithShouldBypassCache:(BOOL)a0;
- (id)streamShouldIncludeRemindersDueTodayInBadgeCount:(id /* block */)a0;
- (id)streamTodayNotificationFireTime:(id /* block */)a0;

@end
