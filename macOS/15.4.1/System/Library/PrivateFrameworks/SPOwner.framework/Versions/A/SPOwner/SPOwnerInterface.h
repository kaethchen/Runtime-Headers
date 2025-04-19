@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)settingsConfiguration;
- (id)beaconSharingSession;
- (id)beaconSharingSessionWithToolingSupport;
- (id)certificationAssistantSession;
- (id)firmwareUpdateSession;
- (id)fmipRegisterInfo;
- (id)maintenanceConnectionSession;
- (id)ownerSession;
- (id)persistentConnectionSession;
- (id)privateFirmwareUpdateSession;
- (id)privateOwnerSession;
- (id)separationMonitoringSession;
- (id)tagSeparationSession;
- (id)trackingAvoidanceService;

@end
