@interface BRCEventsAnalytics : NSObject

+ (id)sharedAnalytics;

- (void)_sendDictionaryToCoreAnalytics:(id)a0 eventName:(id)a1;
- (void)registerAndSendNewApplyFailureWithOutcome:(id)a0;
- (void)registerAndSendNewContainerResetWithOutcome:(id)a0;
- (void)registerAndSendNewFolderSharePCSChainingTime:(double)a0 chainedRecordsCount:(id)a1 zoneMangledID:(id)a2 enhancedDrivePrivacyEnabled:(BOOL)a3 itemIDString:(id)a4 error:(id)a5 analyticsReporter:(id)a6;
- (void)registerAndSendNewPeriodicSyncWithOutcome:(id)a0;
- (void)registerAndSendNewShareAcceptationWithLastStep:(id)a0 zoneMangledID:(id)a1 enhancedDrivePrivacyEnabled:(BOOL)a2 itemIDString:(id)a3 error:(id)a4 analyticsReporter:(id)a5;
- (void)registerAndSendShareSaveError:(id)a0 analyticsReporter:(id)a1;

@end
