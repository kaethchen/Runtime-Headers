@class HDHealthServiceManager, HDNotificationSyncManager, HDNanoSyncManager, HDFitnessMachineManager, HDRestorableAlarmScheduler, HDWorkoutCondenser, HDWorkoutManager, HDAWDSubmissionManager, HDProtectedDataOperationScheduler, HDTinkerPrivacyAlertCoordinator, HDNotificationManager, HDSummarySharingEntryManager, HDAssociationManager, HDDemoDataManager, HDAssertionManager, HDDataCollectionManager, HDAppSubscriptionManager, HDCurrentActivitySummaryHelper, HDAgeGatingManager, HDServiceConnectionManager, HDPeriodicCountryMonitor, HDAttachmentManager, HDRapportMessenger, HDSummarySharingEntryIDSManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDNotificationSyncManager *_notificationSyncManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDProtectedDataOperationScheduler *_protectedDataOperationScheduler;
    HDRapportMessenger *_rapportMessenger;
    HDHealthServiceManager *_serviceManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDWorkoutManager *_workoutManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
    HDSummarySharingEntryManager *_summarySharingEntryManager;
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
    HDAttachmentManager *_attachmentManager;
    HDAssociationManager *_associationManager;
}

- (void).cxx_destruct;
- (id)notificationManager;
- (id)serviceManager;
- (id)alarmScheduler;
- (id)attachmentManager;
- (id)nanoSyncManager;
- (id)protectedDataOperationScheduler;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)_newAWDSubmissionManager;
- (id)_newNanoSyncManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)_newRapportMessenger;
- (id)_newWorkoutManager;
- (id)activityCacheInterface;
- (id)ageGatingManager;
- (id)appSubscriptionManager;
- (id)associationManager;
- (id)awdSubmissionManager;
- (id)currentActivitySummaryHelper;
- (id)dataCollectionManager;
- (id)fitnessMachineManager;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)notificationSyncManager;
- (id)periodicCountryMonitor;
- (id)rapportMessenger;
- (id)serviceConnectionManager;
- (id)sessionAssertionManager;
- (id)sharingEntryManager;
- (id)summarySharingEntryIDSManager;
- (void)terminationCleanup;
- (id)tinkerPrivacyAlertCoordinator;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)workoutCondenser;
- (id)workoutManager;

@end
