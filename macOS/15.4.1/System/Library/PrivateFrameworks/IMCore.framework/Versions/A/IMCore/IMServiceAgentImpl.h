@interface IMServiceAgentImpl : IMServiceAgent

+ (void)initialize;
+ (id)notificationCenter;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (void)_determineStatusImageAppearance;
+ (void)_statusImageAppearanceChanged:(id)a0;
+ (void)forgetStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (id)sharedAgent;

- (void)dealloc;
- (id)init;
- (id)notificationCenter;
- (id)serviceWithName:(id)a0;
- (void)setupComplete;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)_customMessagesChanged:(id)a0;
- (void)_daemonConnected:(id)a0;
- (void)_daemonDisconnected:(id)a0;
- (void)_statusImageAppearanceChanged:(id)a0;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:(id)a0;
- (void)setMyAwayMessages:(id)a0;
- (unsigned long long)vcCapabilities;

@end
