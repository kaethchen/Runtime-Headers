@class HUComfortSound;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) BOOL stopsOnLock;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) BOOL forceMixingBehavior;

+ (id)sharedInstance;

- (void)reset;
- (void)logMessage:(id)a0;
- (void)setMediaVolume:(double)a0;
- (double)mediaVolume;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)setRelativeVolume:(double)a0;
- (double)relativeVolume;
- (id)keysMonitoredForUpdates;
- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (BOOL)shouldStoreLocally;
- (BOOL)comfortSoundsEnabled;
- (void)setStopsOnLock:(BOOL)a0;
- (BOOL)comfortSoundsAvailable;
- (BOOL)forceMixingBehavior;
- (double)lastEnablementTimestamp;
- (BOOL)mixesWithMedia;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)setMixesWithMedia:(BOOL)a0;
- (BOOL)stopsOnLock;

@end
