@class NSString;

@interface HMMTRSyncClusterFanControl : MTRClusterFanControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)writeAttributePluginRockSettingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (id)readAttributePluginFanModeWithParams:(id)a0;
- (id)readAttributePluginRockSettingWithParams:(id)a0;
- (void)updatedValuePluginFanModeForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)updatedValuePluginRockSettingForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)writeAttributePluginFanModeWithValue:(id)a0 expectedValueInterval:(id)a1;

@end
