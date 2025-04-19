@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>

@property (weak, nonatomic) HKSPSleepStore *sleepStore;

- (void).cxx_destruct;
- (id)_mergeExternalSleepEventRecordChange:(id)a0 clientIdentifier:(id)a1;
- (id)_mergeExternalSleepScheduleChange:(id)a0 clientIdentifier:(id)a1;
- (id)_mergeExternalSleepSettingsChange:(id)a0 clientIdentifier:(id)a1;
- (BOOL)_shouldNotifyObserversForClientIdentifier:(id)a0;
- (void)clientShouldCheckInWithCompletion:(id /* block */)a0;
- (void)getClientIdentifierWithCompletion:(id /* block */)a0;
- (void)sleepEventOccurred:(id)a0;
- (void)sleepEventRecordChanged:(id)a0 clientIdentifier:(id)a1;
- (void)sleepModeChanged:(id)a0;
- (void)sleepScheduleChanged:(id)a0 clientIdentifier:(id)a1;
- (void)sleepScheduleStateChanged:(id)a0;
- (void)sleepSettingsChanged:(id)a0 clientIdentifier:(id)a1;

@end
