@interface CKSharedSettingsHelper : NSObject

+ (id)sharedInstance;
+ (id)currentKeepMessages;
+ (BOOL)currentMessageAutoKeepForType;
+ (int)currentMessageAutoKeepOptionForType;

- (BOOL)isRaiseGestureSupported;
- (BOOL)shouldShowCharacterCount;
- (BOOL)isSMSDevice;
- (BOOL)_isProximityMonitoringSupported;
- (BOOL)areReadReceiptsEnabled;
- (id)getAudioMessageAutoKeep;
- (BOOL)getRaiseToListenEnabled;
- (BOOL)isCheckInAllowedInRegion;
- (void)satelliteDemoModeTapped;
- (void)setAudioMessageAutoKeep:(id)a0;
- (void)setConversationListFilteringEnabled:(BOOL)a0;
- (void)setRaiseToListenEnabled:(BOOL)a0;
- (void)setReadReceiptsEnabled:(BOOL)a0;
- (BOOL)shouldShowCheckInLocationHistorySettings;
- (BOOL)shouldShowMMS;
- (BOOL)shouldShowSatelliteDemoModeButton;

@end
