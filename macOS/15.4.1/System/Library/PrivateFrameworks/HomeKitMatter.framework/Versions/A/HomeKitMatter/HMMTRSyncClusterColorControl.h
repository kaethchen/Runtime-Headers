@class NSString;

@interface HMMTRSyncClusterColorControl : MTRClusterColorControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)moveToPluginColorTemperatureWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)readAttributePluginColorTemperatureMiredsWithParams:(id)a0;

@end
