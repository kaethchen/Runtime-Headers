@class HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord;

@interface HKSPSleepStoreModelCache : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, nonatomic) BOOL sleepScheduleNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, nonatomic) BOOL sleepSettingsNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly, nonatomic) BOOL sleepEventRecordNeedsUpdate;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepScheduleStateNeedsUpdate;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL sleepModeNeedsUpdate;

- (id)init;
- (void).cxx_destruct;
- (void)purgeCache;
- (void)_withLock:(id /* block */)a0;
- (void)updateCachedSleepScheduleState:(unsigned long long)a0;
- (id)cachedSleepModeWithMissHandler:(id /* block */)a0;
- (void)updateCachedSleepScheduleModel:(id)a0;
- (id)_locked_cachedSleepEventRecord;
- (id)_locked_cachedSleepSchedule;
- (id)_locked_cachedSleepSettings;
- (void)_locked_purgeCachedSleepEventRecord;
- (void)_locked_purgeCachedSleepMode;
- (void)_locked_purgeCachedSleepSchedule;
- (void)_locked_purgeCachedSleepScheduleState;
- (void)_locked_purgeCachedSleepSettings;
- (void)_locked_updateCachedSleepEventRecord:(id)a0;
- (void)_locked_updateCachedSleepSchedule:(id)a0;
- (void)_locked_updateCachedSleepSettings:(id)a0;
- (id)cachedSleepEventRecord;
- (id)cachedSleepEventRecordWithMissHandler:(id /* block */)a0;
- (id)cachedSleepSchedule;
- (id)cachedSleepScheduleModelWithMissHandler:(id /* block */)a0;
- (id)cachedSleepScheduleStateWithMissHandler:(id /* block */)a0;
- (id)cachedSleepScheduleWithMissHandler:(id /* block */)a0;
- (id)cachedSleepSettings;
- (id)cachedSleepSettingsWithMissHandler:(id /* block */)a0;
- (void)purgeCachedSleepEventRecord;
- (void)purgeCachedSleepMode;
- (void)purgeCachedSleepSchedule;
- (void)purgeCachedSleepScheduleState;
- (void)purgeCachedSleepSettings;
- (void)updateCachedSleepEventRecord:(id)a0;
- (void)updateCachedSleepMode:(long long)a0;
- (void)updateCachedSleepSchedule:(id)a0;
- (void)updateCachedSleepSettings:(id)a0;

@end
