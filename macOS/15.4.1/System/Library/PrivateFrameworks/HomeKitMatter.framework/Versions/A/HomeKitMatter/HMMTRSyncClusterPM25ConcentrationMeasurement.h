@class NSString;

@interface HMMTRSyncClusterPM25ConcentrationMeasurement : MTRClusterPM25ConcentrationMeasurement <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)readAttributePluginMeasuredValueWithParams:(id)a0;
- (void)updatedValuePluginMeasuredValueForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;

@end
