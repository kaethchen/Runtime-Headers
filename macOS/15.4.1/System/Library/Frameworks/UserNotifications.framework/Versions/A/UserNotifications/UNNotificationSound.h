@class NSString, NSURL, NSNumber;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly, copy) UNNotificationSound *defaultSystemSound;
@property (class, readonly, copy) UNNotificationSound *defaultSound;
@property (class, readonly, copy) UNNotificationSound *defaultRingtoneSound;
@property (class, readonly, copy) UNNotificationSound *defaultCriticalSound;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long alertType;
@property (readonly, copy) NSString *alertTopic;
@property (readonly, copy) NSString *audioCategory;
@property (readonly, copy) NSNumber *audioVolume;
@property (readonly, getter=isCritical) BOOL critical;
@property (readonly) double maximumDuration;
@property (readonly) BOOL shouldIgnoreAccessibilityDisabledVibrationSetting;
@property (readonly) BOOL shouldIgnoreRingerSwitch;
@property (readonly) BOOL shouldRepeat;
@property (readonly, copy) NSString *toneFileName;
@property (readonly, copy) NSURL *toneFileURL;
@property (readonly, copy) NSString *toneIdentifier;
@property (readonly) unsigned long long toneMediaLibraryItemIdentifier;
@property (readonly, copy) NSString *vibrationIdentifier;
@property (readonly, copy) NSURL *vibrationPatternFileURL;

+ (id)soundNamed:(id)a0;
+ (id)soundWithAlertType:(long long)a0;
+ (id)_soundWithAlertType:(long long)a0 audioVolume:(id)a1 critical:(BOOL)a2 toneFileName:(id)a3;
+ (id)criticalSoundNamed:(id)a0;
+ (id)criticalSoundNamed:(id)a0 withAudioVolume:(float)a1;
+ (id)defaultCriticalSoundWithAudioVolume:(float)a0;
+ (id)ringtoneSoundNamed:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAlertType:(long long)a0 alertTopic:(id)a1 audioCategory:(id)a2 audioVolume:(id)a3 critical:(BOOL)a4 maximumDuration:(double)a5 shouldIgnoreAccessibilityDisabledVibrationSetting:(BOOL)a6 shouldIgnoreRingerSwitch:(BOOL)a7 shouldRepeat:(BOOL)a8 toneFileName:(id)a9 toneFileURL:(id)a10 toneIdentifier:(id)a11 toneMediaLibraryItemIdentifier:(unsigned long long)a12 vibrationIdentifier:(id)a13 vibrationPatternFileURL:(id)a14;

@end
