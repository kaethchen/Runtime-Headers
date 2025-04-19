@class RPClient, NSArray, ULDarwinNotificationHelper, RPCompanionLinkClient;

@interface ULRapportMonitor : ULEventMonitor

@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) unsigned int identityTypeFlags;
@property (retain, nonatomic) RPClient *client;
@property (retain, nonatomic) NSArray *identities;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_activateCompanionLinkClientAndSetHandlers;
- (void)_getIdentities;
- (void)_startMonitoringForDevices;
- (void)_startMonitoringForIdentities;
- (void)_stopMonitoringForDevices;
- (void)_stopMonitoringForIdentities;
- (id)initWithNotificationHelper:(id)a0 identityTypeFlags:(unsigned int)a1 controlFlags:(unsigned long long)a2;

@end
