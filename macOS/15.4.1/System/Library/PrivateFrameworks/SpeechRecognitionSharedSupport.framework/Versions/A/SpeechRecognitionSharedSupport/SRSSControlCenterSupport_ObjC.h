@interface SRSSControlCenterSupport_ObjC : NSObject

+ (id)sharedAudioDeviceManager;
+ (BOOL)voiceControlEnabled;
+ (id)languageUpdateNotificationNames;
+ (id)listeningUpdateNotificationName;
+ (void)selectLanguage:(id)a0;
+ (id)clamshellChangedNotification;
+ (id)currentLanguages;
+ (id)currentMicrophones;
+ (id)goToSleepNotificationName;
+ (id)inputDeviceChangedNotificationName;
+ (id)listeningUpdateKey;
+ (id)microphoneUpdateNotificationName;
+ (void)monitorMicrophoneLevelsWithCallback:(id /* block */)a0;
+ (void)selectMicrophone:(id)a0;
+ (id)voiceControlEnabledNotificationName;
+ (id)wakeUpNotificationName;

@end
