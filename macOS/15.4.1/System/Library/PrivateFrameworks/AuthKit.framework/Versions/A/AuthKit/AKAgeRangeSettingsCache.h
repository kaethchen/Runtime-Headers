@class AKAgeRangeSettings, NSObject;
@protocol OS_dispatch_queue;

@interface AKAgeRangeSettingsCache : NSObject {
    AKAgeRangeSettings *_ageRangeSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

@property (readonly, nonatomic) AKAgeRangeSettings *ageRangeSettings;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_configurationValueForKey:(id)a0;
- (void)_setConfigurationValue:(id)a0 forKey:(id)a1;
- (void)_setU13AgeLimit:(long long)a0;
- (void)_setU18AgeLimit:(long long)a0;
- (int)_u13AgeLimit;
- (int)_u18AgeLimit;
- (void)_updateAgeRangeSettings;
- (void)clearAgeRangeCache;
- (void)updateAgeRangeCacheWithGlobalConfig:(id)a0;

@end
