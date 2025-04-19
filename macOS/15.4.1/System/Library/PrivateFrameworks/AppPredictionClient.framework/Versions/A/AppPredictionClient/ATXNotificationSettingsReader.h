@class NSString, ATXDNDModeConfigurationClient, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)notificationDigestDeliveryTimes;
- (id)allConfiguredDigestApps;
- (BOOL)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (BOOL)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (BOOL)digestSetupComplete;
- (BOOL)doesAppAllowMessageBreakthrough:(id)a0;
- (BOOL)doesAppSendNotificationsToDigest:(id)a0;
- (id)initWithModeConfigurationClient:(id)a0 notificationSettingsCenter:(id)a1;
- (id)modeConfiguration:(id)a0;
- (id)numConfiguredModes;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;

@end
