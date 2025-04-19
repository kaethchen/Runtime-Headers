@class ULEnvironment, NSString, CLMicroLocationLoiBridge, NSMutableArray;

@interface ULLogicAdapter : NSObject <ULDiagnosticsProvider, ULLogicServiceHandling, ULLogicDiagnosticsHandling, ULLogicLegacyServiceHandling, ULRapportMonitorHandling, ULDataProtectionMonitorHandling> {
    struct unique_ptr<ULLogicAdapterImpl, std::default_delete<ULLogicAdapterImpl>> { struct __compressed_pair<ULLogicAdapterImpl *, std::default_delete<ULLogicAdapterImpl>> { struct ULLogicAdapterImpl *__value_; } __ptr_; } logicAdapterImpl;
    CLMicroLocationLoiBridge *_loiBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ULEnvironment *environment;
@property (retain, nonatomic) NSMutableArray *sleepWakeEventsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newULServiceDescriptorFromInternalDescriptor:(const void *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_stopMonitoringEvents;
- (id)getMicroLocationInternalVersion;
- (BOOL)purgeMicroLocationData;
- (void)_start;
- (void)_stop;
- (id)diagnosticInfo;
- (BOOL)isDataAvailable;
- (void)_handleULSleepWakeMonitorEvent:(id)a0;
- (void)_analyticsExecute:(id)a0;
- (void)_exportiCloudBackupExecute:(id)a0;
- (void)_handleULAirplaneModeMonitorEventAirplaneMode:(id)a0;
- (void)_handleULBatteryModeMonitorEventLowPowerMode:(id)a0;
- (void)_handleULBatteryModeMonitorEventUnlimitedPower:(id)a0;
- (void)_handleULBluetoothMonitorEventPowerOn:(id)a0;
- (void)_handleULBuddyMonitorEventBuddyComplete:(id)a0;
- (void)_handleULDataProtectionMonitorEventDataAvailable:(id)a0;
- (void)_handleULDisplayMonitorEventDisplayState:(id)a0;
- (void)_handleULDisplayMonitorEventDisplayState_OSX:(id)a0;
- (void)_handleULInternalNotifyMonitorEventLocalize:(id)a0;
- (void)_handleULInternalNotifyMonitorEventPurge:(id)a0;
- (void)_handleULInternalNotifyMonitorEventRecord:(id)a0;
- (void)_handleULInternalNotifyMonitorEventSettingsRefrsh:(id)a0;
- (void)_handleULPrivacyMonitorEventLocationServices:(id)a0;
- (void)_handleULRapportMonitorEventDeviceFound:(id)a0;
- (void)_handleULRapportMonitorEventIdentities:(id)a0;
- (void)_learnExecute:(id)a0;
- (void)_maintenanceExecute:(id)a0;
- (void)_registerOnDatabaseValidNotification;
- (void)_registerOrUnregisterForActivities:(BOOL)a0;
- (void)_registerOrUnregisterForBackgroundTaskWithRequest:(id)a0 withSelector:(SEL)a1 requiresMiLoEnabled:(BOOL)a2 isRegister:(BOOL)a3;
- (void)_routineStateAnalyzerExecute:(id)a0;
- (void)_startMonitoringEvents;
- (void)_startSensors;
- (void)_startSpectating;
- (void)_wifiAnalyticsExecute:(id)a0;
- (void)connectWithServiceIdentifier:(id)a0 legacyServiceIdentifier:(id)a1 clientIdentifier:(id)a2 connectionToken:(id)a3 requestIdentifier:(id)a4;
- (void)createCustomLoiAtCurrentLocationForConnectionToken:(id)a0 withConfiguration:(id)a1;
- (id)deleteServiceWithIdentifier:(id)a0 clientIdentifier:(id)a1;
- (void)disconnectWithConnectionToken:(id)a0 clientIdentifier:(id)a1 requestIdentifier:(id)a2;
- (id)donateMicroLocationTruthTagWithTagUUID:(id)a0 correspondingToTriggerUUID:(id)a1 handler:(id /* block */)a2 clientId:(id)a3;
- (id)donateMicroLocationTruthTagWithTagUUID:(id)a0 forRecordingEventsBetweenDate:(id)a1 andDate:(id)a2 handler:(id /* block */)a3 clientId:(id)a4;
- (id)exportDatabase;
- (id)getRecordingTriggerUUIDAndRequestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 shouldForceRecording:(BOOL)a1 handler:(id /* block */)a2 clientId:(id)a3;
- (id)initWithEnvironment:(id)a0 delegate:(id)a1;
- (void)labelObservationForConnectionToken:(id)a0 withRequestIdentifier:(id)a1 andPlaceIdentifier:(id)a2 andReturnIdentifier:(id)a3;
- (id)purgeDatabase;
- (id)queryServicesForClient:(id)a0;
- (void)removeCustomLoiWithIdentifier:(id)a0 forConnectionToken:(id)a1;
- (void)removePendingConnectionRequestsByConnectionToken:(id)a0;
- (void)requestCurrentMicroLocationWithAdditionalInformation:(id)a0 clientId:(id)a1;
- (void)requestMicroLocationRecordingScanWithAdditionalInformation:(id)a0 clientId:(id)a1;
- (void)requestModelLearningForConnectionToken:(id)a0 requestIdentifier:(id)a1;
- (void)requestObservationForConnectionToken:(id)a0 clientIdentifier:(id)a1 requestIdentifier:(id)a2;
- (void)requestPredictionForConnectionToken:(id)a0 clientIdentifier:(id)a1 requestIdentifier:(id)a2;
- (void)startRapportSession;
- (void)startUpdatingForConnectionToken:(id)a0 updateConfiguration:(id)a1 requestIdentifier:(id)a2;
- (void)stopRapportSession;
- (void)stopUpdatingForConnectionToken:(id)a0 requestIdentifier:(id)a1;

@end
